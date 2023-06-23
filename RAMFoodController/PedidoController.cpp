#include "PedidoController.h"
#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;


PedidoController::PedidoController() {

	this->objConexion = gcnew SqlConnection();
};


//métodos para la conexion a base de datos

void PedidoController::conectarBD() {
	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
	this->objConexion->Open();

};


void PedidoController::cerrarConexionBD() {
	this->objConexion->Close();

};

int PedidoController::obtenerIdPedidoGeneralxNmesa(int numMesa) {
	int IdPedido;
	conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT id FROM PedidoGeneralMesa WHERE numeroMesa="+Convert::ToString(numMesa)+" and estado=0";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		IdPedido = safe_cast<int>(objData[0]);
		
	}
	cerrarConexionBD();
	return IdPedido;

};

List<OrdenMesa^>^ PedidoController::BuscarPedidoGeneralxnumMesa(int numMesa) {
	List<OrdenMesa^>^ listaProductoGeneral = gcnew List<OrdenMesa^>();
	
	int idPedido = obtenerIdPedidoGeneralxNmesa(numMesa);
	conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * FROM PedidoGeneralMesa WHERE id=" + Convert::ToString(idPedido);
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		int idGeneral = safe_cast<int>(objData[0]);
		int numMesa = safe_cast<int>(objData[1]);
		int estado = safe_cast<int>(objData[2]);
		int cuenta = safe_cast<int>(objData[3]);
		String^ fecha = safe_cast<String^>(objData[4]);
		

		//OrdenMesa(int id, int Mesa,int EstadoOrden, List<ProductoPedido^>^ listaProductosPedidos,String^ Fecha)
		OrdenMesa^ objOrden = gcnew OrdenMesa(idGeneral,numMesa,estado,cuenta,fecha);
		listaProductoGeneral->Add(objOrden);
	}
	cerrarConexionBD();
	return listaProductoGeneral;

};



List<Plato^>^ PedidoController::obtenerPedidoComensal(int numMesa) {
	List<Plato^>^ listaProductoGeneral = gcnew List<Plato^>();
	productoController^ objProductosController = gcnew productoController();
	int idPedido = obtenerIdPedidoGeneralxNmesa(numMesa);
	conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT * FROM DetallePedido WHERE idPedido=" + Convert::ToString(idPedido);
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		
		int idProducto = safe_cast<int>(objData[2]);
		int cantidad = safe_cast<int>(objData[3]);
		int estado = safe_cast<int>(objData[4]);


		Producto^ objProducto = gcnew Producto();
		objProducto = objProductosController->buscarProductoxId(idProducto);
		Plato^ objPlato = gcnew Plato(objProducto->GetNombre(), objProducto->GetPrecio(), cantidad, objProducto->GetId(), estado);
		listaProductoGeneral->Add(objPlato);
	}
	cerrarConexionBD();
	return listaProductoGeneral;

};


void PedidoController::insertarProductosTablaDetallePedido(List<Plato^>^ lPlato, List<Bebida^>^ lBebida, OrdenMesa^ objOrdenMesa) {
	conectarBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	int idPedido = obtenerIdPedidoGeneralxNmesa(objOrdenMesa->GetMesa());
	for each (Plato^ objPlatoI in lPlato)
	{
		int id= objPlatoI->GetId();
		int cantidad = objPlatoI->GetCantidadPedida();
		int estado = objPlatoI->GetEstado();
		String^ valores = Convert::ToString(idPedido)+ ", "+Convert::ToString(id) + ", " + Convert::ToString(cantidad) + ", " + Convert::ToString(estado);
		objSentencia->CommandText = "INSERT DetallePedido(idPedido,idProducto,cantidad,estado) VALUES("+valores+")";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
		SqlDataReader^ objData = objSentencia->ExecuteReader();

	}
	for each (Bebida ^ objBebidaI in lBebida)
	{
		int id = objBebidaI->GetId();
		int cantidad = objBebidaI->GetCantidadPedida();
		int estado = objBebidaI->GetEstado();
		String^ valores = Convert::ToString(idPedido) + ", " + Convert::ToString(id) + ", " + Convert::ToString(cantidad) + ", " + Convert::ToString(estado);
		objSentencia->CommandText = "INSERT DetallePedido(idPedido,idProducto,cantidad,estado) VALUES(" + valores + ")";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
		SqlDataReader^ objData = objSentencia->ExecuteReader();

	}
	cerrarConexionBD();

};


void PedidoController::actualizarCuenta(OrdenMesa^ objOrdenMesaBD, OrdenMesa^ objOrdenMesaLocal) {

	
	conectarBD();
	objOrdenMesaBD->SetCuenta(objOrdenMesaBD->GetCuenta()+objOrdenMesaLocal->GetCuenta());
	int id = objOrdenMesaBD->GetId();
	int nMesa = objOrdenMesaBD->GetMesa();
	int estado = objOrdenMesaBD->GetEstado();
	int cuenta = objOrdenMesaBD->GetCuenta();
	String^ fecha = objOrdenMesaBD->GetFecha();

	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "UPDATE PedidoGeneralMesa SET cuenta=" + Convert::ToString(cuenta) +" WHERE id="+Convert::ToString(id);
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	
	cerrarConexionBD();
};

/*
void PedidoController::actualizarCantidadPlato(OrdenMesa^ objOrdenMesa, Plato^ objPlato) {
	conectarBD();
	int id = obtenerIdPedidoGeneralxNmesa(objOrdenMesa->GetMesa());
	int idProducto = objPlato->GetId();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	//Aqui voy a indicar la sentencia que voy a ejecutar
	String^ cantidadNueva = Convert::ToString(objPlato->GetCantidadPedida());
	objSentencia->CommandText = "UPDATE DetallePedido SET cantidad="+ cantidadNueva+ " WHERE idPedido=" + Convert::ToString(id)+"and idProducto="+Convert::ToString(idProducto);
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	cerrarConexionBD();


};
*/

//hacer lo mismo de base de datos pero con platos
/*
List<Bebida^>^ PedidoController::obtenerPedidoDetalleBebidas(int nMesa) {


	List<OrdenMesa^>^ listaProductoGeneral = gcnew List<OrdenMesa^>();
	List<Bebida^>^ listaBebidasEncontradas = gcnew List<Bebida^>();
	int idPedido = obtenerIdPedidoGeneralxNmesa(nMesa);
	conectarBD();
	//SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD
	objSentencia->Connection = this->objConexion;
	//Aqui voy a indicar la sentencia que voy a ejecutar

	objSentencia->CommandText = "SELECT idProducto FROM DetallePedido WHERE idPedido=" + Convert::ToString(idPedido);
	//Aqui ejecuto la sentencia en la Base de Datos
	//Para Select siempre sera ExecuteReader
	//Para select siempre va a devolver un SqlDataReader
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	//obteniendo todos los datos posibles
	productoController^ objProductoController = gcnew productoController();
	while (objData->Read())
	{
		int idProducto = safe_cast<int>(objData[0]);
		int repetido = 0;
		for each (Bebida^ IBebida in listaBebidasEncontradas)
		{

			if (idProducto == IBebida->GetId()) {
				repetido = 1;
				break;
			}
		
		};
		//nombre,precio,cantidadpedida,id
		if (repetido == 0) {
			Producto^ objProductor = gcnew Producto();
			objProductor = objProductoController->buscarProductoxId(idProducto);
			Bebida^ objBebidar = gcnew Bebida(objProductor->GetNombre(),objProductor->GetPrecio(),0,idProducto);

			listaBebidasEncontradas->Add(objBebidar);
		};


	};
	
	cerrarConexionBD();
	//volviendo a hacer conexion

	conectarBD();
	//SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD
	SqlCommand^ objSentencia2 = gcnew SqlCommand();
	//Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD
	objSentencia2->Connection = this->objConexion;
	//Aqui voy a indicar la sentencia que voy a ejecutar

	objSentencia2->CommandText = "SELECT * FROM DetallePedido WHERE idPedido=" + Convert::ToString(idPedido);
	//Aqui ejecuto la sentencia en la Base de Datos
	//Para Select siempre sera ExecuteReader
	//Para select siempre va a devolver un SqlDataReader
	SqlDataReader^ objData2 = objSentencia2->ExecuteReader();
	//obteniendo todos los datos posibles
	for each (Bebida^ BebidaRegistrada in listaBebidasEncontradas)
	{
		while (objData2->Read()) {


			int idProducto = safe_cast<int>(objData[2]);
			int cantidadPedida = safe_cast<int>(objData[3]);
			int estado = safe_cast<int>(objData[4]);
			if (idProducto == BebidaRegistrada->GetId()) {
				BebidaRegistrada->SetCantidadPedida(BebidaRegistrada->GetCantidadPedida() + cantidadPedida);

			};

			
			productoController^ objProducto = gcnew productoController();
			Producto^ objP = gcnew Producto();

			objP = objProducto->buscarProductoxId(idProducto);

			if (objP->GetTipo() == 1) {
				Bebida^ objBebida = gcnew Bebida(objP->GetNombre(), objP->GetPrecio(), cantidadPedida, objP->GetId(), estado);

				listaBebidasEncontradas->Add(objBebida);
			};


		}
	}

	//sumando 

	cerrarConexionBD();
	return listaBebidasEncontradas;


};
*/
/*
List<Plato^>^ PedidoController::obtenerPedidoDetallePlato(int nMesa) {


	List<OrdenMesa^>^ listaProductoGeneral = gcnew List<OrdenMesa^>();
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	int idPedido = obtenerIdPedidoGeneralxNmesa(nMesa);
	conectarBD();
	//SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD
	SqlCommand^ objSentencia = gcnew SqlCommand();
	//Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD
	objSentencia->Connection = this->objConexion;
	//Aqui voy a indicar la sentencia que voy a ejecutar/
	objSentencia->CommandText = "SELECT * FROM DetallePedido WHERE id=" + Convert::ToString(idPedido);
	//Aqui ejecuto la sentencia en la Base de Datos
	//Para Select siempre sera ExecuteReader
	//Para select siempre va a devolver un SqlDataReader
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {


		int idProducto = safe_cast<int>(objData[2]);
		int cantidadPedida = safe_cast<int>(objData[3]);
		int estado = safe_cast<int>(objData[4]);

		productoController^ objProducto = gcnew productoController();
		Producto^ objP = gcnew Producto();

		objP = objProducto->buscarProductoxId(idProducto);

		if (objP->GetTipo() == 2) {
			Plato^ objPlato = gcnew Plato(objP->GetNombre(), objP->GetPrecio(), cantidadPedida, objP->GetId(), estado);

			listaPlatosEncontrados->Add(objPlato);
		};
	}
	cerrarConexionBD();
	return listaPlatosEncontrados;


};
*/

void  PedidoController::agregarNuevoPedidoGeneral(OrdenMesa^ objOrdenMesa) {
	conectarBD();

	int nMesa = objOrdenMesa->GetMesa();
	
	String^ fechaCuenta = DateTime::Now.ToString("dd/MM/yyyy");
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	String^ valores = Convert::ToString(nMesa)+", 0, 0, "+fechaCuenta;
	objSentencia->CommandText = "INSERT PedidoGeneralMesa(numeroMesa,estado,cuenta,fecha) VALUES(" + valores + ")";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	cerrarConexionBD();
};




//hasta aquí


List<Bebida^>^ PedidoController::obtenerInfoBebida() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<Bebida^>^ listaBebidasEncontradas = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos/productos/Bebidas.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	/*controoler del producto*/
	productoController^ objProductosController=gcnew productoController();
	for each (String ^ lineaBebida in lineas) {
		array<String^>^ datos = lineaBebida->Split(separadores->ToCharArray());
		/*
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		double PrecioBebida = Convert::ToDouble(datos[2]);
		
		Bebida^ objBebida = gcnew Bebida(nombre, PrecioBebida, 1, 0, 0, id);
		*/
		int id = Convert::ToInt32(datos[0]);
		Producto^ objProducto = gcnew Producto();
		objProducto = objProductosController->buscarProductoxId(id);
		Bebida^ objBebida = gcnew Bebida(objProducto->GetNombre(),objProducto->GetPrecio(),0,objProducto->GetId(),0);
		listaBebidasEncontradas->Add(objBebida);
	}
	return listaBebidasEncontradas;
}
List<Plato^>^ PedidoController::obtenerInfoPlato() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos/productos/Platos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	productoController^ objProductosController = gcnew productoController();
	for each (String^ lineaPlato in lineas) {
		array<String^>^ datos = lineaPlato->Split(separadores->ToCharArray());
		/*
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		double PrecioPlato = Convert::ToDouble(datos[2]);		
		Plato^ objPlato = gcnew Plato(nombre, PrecioPlato, 1, 0, id);
		*/
		int id = Convert::ToInt32(datos[0]);
		String^ texrt = datos[0];
		Producto^ objProducto = gcnew Producto();
		objProducto = objProductosController->buscarProductoxId(id);
		Plato^ objPlato = gcnew Plato(objProducto->GetNombre(), objProducto->GetPrecio(), 0, objProducto->GetId(), 0);
		listaPlatosEncontrados->Add(objPlato);
	}
	return listaPlatosEncontrados;
}

void PedidoController::escribirPedidos(List<Plato^>^ listaPlatosMesa, List<Bebida^>^ listaBebidasMesa,
String^ nombre_archivo, List<String^>^ cantidad_bebida, List<String^>^ cantidad_platos) {
	/*Formando lista con los datos de los platos*/
	productoController^ objProductoController = gcnew productoController();
	List<String^>^ primera_lista = gcnew List<String^>();
	int lp = cantidad_platos->Count;
	int lb = cantidad_bebida->Count;
	for (int numero = 0; numero < lp; numero++) {
		int cantidadI = Convert::ToInt32(cantidad_platos[numero]);
		if (cantidadI > 0) {
			double precioUnitario = objProductoController->obtenerPrecioXId(listaPlatosMesa[numero]->GetId());
			/*plato1;cantidad;precio*/
			double precio = Convert::ToDouble(cantidadI) * precioUnitario;
			String^ nombre = listaPlatosMesa[numero]->GetNombre();
			String^ texto = nombre + ";" + Convert::ToString(cantidadI) + ";" + Convert::ToString(precio);
			primera_lista->Add(texto);

		};

	};

	primera_lista->Add("Bebida");/*nombre para controlar la parte donde empieza las bebidas, creo que ser� util para hacer el reporte*/

	for (int numero = 0; numero < lb; numero++) {
		int cantidadI = Convert::ToInt32(cantidad_bebida[numero]);
		if (cantidadI > 0) {
			double precioUnitario = objProductoController->obtenerPrecioXId(listaBebidasMesa[numero]->GetId());
			String^ nombre = listaBebidasMesa[numero]->GetNombre();
			double precio = Convert::ToDouble(cantidadI) * precioUnitario;
			String^ texto = nombre + ";" + Convert::ToString(cantidadI) + ";" + Convert::ToString(precio);
			primera_lista->Add(texto);

		};

	};
	/*Escribirlas en un archivo, linea por linea*/
	File::WriteAllLines("Recursos//Comensal//pedidotemporal//pedido1.txt", primera_lista);
}
void PedidoController::escribirArchivo(String^ nombre_archivo, int valor)
{
	String^ texto = Convert::ToString(valor);
	List<String^>^ lista_texto = gcnew List<String^>(1);
	lista_texto->Add(texto);
	String^ nombre_archivo_m = nombre_archivo + ".txt";
	File::WriteAllLines(nombre_archivo_m, lista_texto);

}
array<String^>^ PedidoController::leerArchivo(String^ nombre_archivo)
{
	String^ direccion = nombre_archivo + ".txt";
	array<String^>^ lineas = File::ReadAllLines(direccion);
	return  lineas;

}
;
/*Como esta funcion se llama primero, solo se verifica aqui si es nuevo pedido o uno modificado*/

int PedidoController::esNuevoPedido(String^ nombre_archivo)
{
	String^ direccion = "Recursos//Comensal//pedidotemporal//" + nombre_archivo + ".txt";
	array<String^>^ lineas = File::ReadAllLines(direccion);
	int valor = Convert::ToInt32(lineas[0]);
	return valor;
}

void PedidoController::ListarPedidosMesa(int numeroDeMesaALeer, List<Plato^>^ listaPlatos, List<Bebida^>^ listaBebidas)
{
	productoController^ objProductoController = gcnew productoController();
	String^ direccion = "pedidomesa" + Convert::ToString(numeroDeMesaALeer) + ".txt";
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
	String^ separadores = ";";
	List<String^>^ lineasEscribir = gcnew List<String^>();
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		Producto^ productoEncontrado = objProductoController->buscarProductoxId(id);
		int cantidad = Convert::ToInt32(datos[1]);
		int status = Convert::ToInt32(datos[2]);
		if (productoEncontrado->GetTipo() == 2) {
			
			Plato^ objPlato = gcnew Plato(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), cantidad, productoEncontrado->GetId(), status);
			listaPlatos->Add(objPlato);
		}
		if (productoEncontrado->GetTipo() == 1) {
			Bebida^ objBebidas = gcnew Bebida(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), cantidad, productoEncontrado->GetId(), status);
			listaBebidas->Add(objBebidas);
		}
	}
}




/*toda la direccion, no es necesario cambiar el algoritmo, se trabaja internamente*/

List<Plato^>^ PedidoController::LeerPedidosPlato(String^ nombre_archivo) {
	/*Leyendo lineas del archivo*/
	List<Plato^>^ LPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);
	productoController^ objProductos = gcnew productoController();
	String^ separador = ";";
	int key = 1;
	for each (String ^ linea_plato in lineas) {
		

		
		if (key == 1) {
			array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
				if (datos[0]->Contains("Bebida")) { key = 0; }
				else {
					String^ nombre_plato = datos[0];
					double precio = Convert::ToDouble(datos[2]);
					int cpedida = Convert::ToInt32(datos[1]);
					Plato^ objPlato = gcnew Plato(nombre_plato, precio,cpedida, 0,0);
					LPlatosEncontrados->Add(objPlato);
				};
			
		};

	};
	return LPlatosEncontrados;
};
/*toda la direccion*/
List<Bebida^>^ PedidoController::LeerPedidosBebidas(String^ nombre_archivo) {
	/*Leyendo lineas del archivo*/
	List<Bebida^>^ LBebidasEncontrados = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);
	String^ separador = ";";
	int key = 0;
	int vez = 1;
		for each (String ^ linea_plato in lineas) {
		/*Se busca hasta encontrar la palabra bebidas, para empezar a guardar datos*/
		array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
	
		
		if (vez == 1 && (datos[0]->Contains("Bebida"))) { key = 1; vez = 0; }
		else {
			if (key == 1) {

				String^ nombre_bebida = datos[0];
				double precio = Convert::ToDouble(datos[2]);
				int cpedida = Convert::ToInt32(datos[1]);
				Bebida^ objBebida = gcnew Bebida(nombre_bebida, precio,cpedida, 0, 0);
				LBebidasEncontrados->Add(objBebida);
			};
		};
		
	};
	return LBebidasEncontrados;
}


/*toda la direccion, no es necesario cambiar el algoritmo, se trabaja internamente*/

List<Plato^>^ PedidoController::LeerPedidosPlatoFinal(String^ nombre_archivo) {
	/*Este método solo lee el nombre, precio, cantidad, idimagen y id lo settea a 0 por defecto*/
	/*Leyendo lineas del archivo*/
	List<Plato^>^ LPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);

	String^ separador = ";";
	int key = 1;
	for each (String^ linea_plato in lineas) {
		array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
		if (key != 1) {
			int id = Convert::ToInt32(datos[0]);
			int cantidadPedida = Convert::ToInt32(datos[1]);
			productoController^ objProducto = gcnew productoController();
			Producto^ objP = gcnew Producto();
			objP = objProducto->buscarProductoxId(id);
			if (objP->GetTipo() == 2) {
				Plato^ objPlato = gcnew Plato(objP->GetNombre(), objP->GetPrecio(), cantidadPedida,objP->GetId(),0);

				LPlatosEncontrados->Add(objPlato);
			};
		}
		else {
			/*primera linea se ignora*/
			key = 0;
		}
		/*
		if (key == 1) {
			array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
			
			if (datos[0]->Contains("Bebida")) { key = 0; }
			else if (datos[0]->Contains("Platos"))
			{
				keyPlatos = 1;
			}
			else {
				if (keyPlatos) {
					String^ nombre_plato = datos[0];
					int cpedida = Convert::ToInt32(datos[1]);
					double cprecio = Convert::ToDouble(datos[2]);
					Plato^ objPlato = gcnew Plato(nombre_plato, cprecio, 0, cpedida, 0);
					LPlatosEncontrados->Add(objPlato);
				};
			};
		};
		*/

	};
	return LPlatosEncontrados;
};
List<Bebida^>^ PedidoController::LeerPedidosBebidasFinal(String^ nombre_archivo) {
	/*Este método solo lee el nombre, precio, cantidad, idimagen y id lo settea a 0 por defecto*/
	/*Leyendo lineas del archivo*/
	List<Bebida^>^ LBebidasEncontrados = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);

	

	String^ separador = ";";
	int key = 1;
	int vez = 0;
	for each (String ^ linea_plato in lineas) {
		/*Se busca hasta encontrar la palabra bebidas, para empezar a guardar datos*/
		array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
		if (key != 1) {
			int id = Convert::ToInt32(datos[0]);
			int cantidadPedida = Convert::ToInt32(datos[1]);
			productoController^ objProducto = gcnew productoController();
			Producto^ objP = gcnew Producto();
			objP = objProducto->buscarProductoxId(id);
			if (objP->GetTipo() == 1) {
				Bebida^ objBebida = gcnew Bebida(objP->GetNombre(), objP->GetPrecio(), cantidadPedida, objP->GetId(), 0);

				LBebidasEncontrados->Add(objBebida);
			};
		}
		else {
			/*primera linea se ignora*/
			key = 0;
		};
		/*
		if (vez == 1 && (datos[0]->Contains("Bebida"))) { key = 1; vez = 0; }
		else {
			if (key == 1) {

				String^ nombre_bebida = datos[0];
				int cpedida = Convert::ToInt32(datos[1]);
				double cprecio = Convert::ToDouble(datos[2]);
				Bebida^ objBebida = gcnew Bebida(nombre_bebida, cprecio, cpedida, 0, 0);
				LBebidasEncontrados->Add(objBebida);
			};
		};
		*/
	};
	return LBebidasEncontrados;
}

/*dirección ya arreglada*/
void PedidoController::escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, List<Plato^>^ lPlatoExt, List<Bebida^>^ lBebidasExt,OrdenMesa^ objOrdenMesa) {
	
	int numeroLinea = 1 + lPlato->Count + lBebidas->Count;
	List<String^>^ lineasEscribir = gcnew List<String^>(numeroLinea);
	/*leyendo el archivo externo*/
	/*cambiar a lectura del nuevo archivo*/
	array<String^>^ pedidoanterior = File::ReadAllLines("NewComensal/DetallePedidoMesaGeneral.txt");
	//leyendo lo que hay en la talba PedidoMesaGeneral
	List<Plato^>^ listaPedidoAnterior = gcnew List<Plato^>();
	listaPedidoAnterior = obtenerPedidoComensal(objOrdenMesa->GetMesa());

	array<String^>^ lineasPedidoGeneralActualizarCuenta = File::ReadAllLines("NewComensal/pedidoMesaGeneral.txt");
	//array<String^>^ lineasPedidoMesaGeneralAnterior = File::ReadAllLines();
	List<String^>^ lineasEscribirExterno = gcnew List<String^>();
	List<String^>^ lineasEscribirExternoPedidoMesa = gcnew List<String^>();
	List<String^>^ lineasEscribirExternoActualizarCuenta = gcnew List<String^>();

	//if (!(pedidoanterior[0]->Contains("vacio"))) {
		//for each (String^ lin in pedidoanterior)
		//{
			//lineasEscribirExterno->Add(lin);
		//}
	//};

	/*hasta aqui*/
	/*borrar esto linea (abajo) si causa errores*/
	lineasEscribir->Add("1");
	
	productoController^ objPController = gcnew productoController();
	
	for each (Plato^ objPlato in lPlato)
	{
		
		String^ lineaIt = Convert::ToString(objPController->buscarIdxNombre(objPlato->GetNombre())) + ";" + objPlato->GetCantidadPedida();
		lineasEscribir->Add(lineaIt);
		
	}
	
	for each (Bebida^ objBebida in lBebidas)
	{
		String^ lineaIt = Convert::ToString(objPController->buscarIdxNombre(objBebida->GetNombre())) + ";" + objBebida->GetCantidadPedida();
		
		lineasEscribir->Add(lineaIt);
		
	}
	/*formato del archivo DetallePedidoMesaGeneral.txt*/
	/*leyendo ID ultimo*/
	//general
	array<String^>^ idUltimo = File::ReadAllLines("Recursos/Comensal/pedidotemporal/ultimoId.txt");
	//detalles
	array<String^>^ idPedido = File::ReadAllLines("Recursos/Comensal/pedidotemporal/ultimoIdPedidoMesa.txt");
	int idSiguiente = Convert::ToInt32(idPedido[0]);
	
	//Base de datos
	
	insertarProductosTablaDetallePedido(lPlatoExt, lBebidasExt, objOrdenMesa);
	//for each (Plato^ objPlato in lPlatoExt)
	//{	

		//para base de datos



		//para .txt
		//idSiguiente = idSiguiente + 1;
		//String^ idProducto = Convert::ToString(objPController->buscarIdxNombre(objPlato->GetNombre()));
		//String^ lineaItExt = Convert::ToString(idUltimo[0]) + ";" + Convert::ToString(idSiguiente) + ";" + idProducto + ";" + objPlato->GetCantidadPedida() + ";0";
		//String^ lineaItExt = Convert::ToString(objPController->buscarIdxNombre(objPlato->GetNombre())) + ";" + objPlato->GetCantidadPedida() + ";0";
		//lineasEscribirExterno->Add(lineaItExt);
	//}
	//for each (Bebida^ objBebida in lBebidasExt)
	//{
		//idSiguiente = idSiguiente + 1;
		//String^ idProducto = Convert::ToString(objPController->buscarIdxNombre(objBebida->GetNombre()));
		//String^ lineaItExt = Convert::ToString(idUltimo[0]) + ";" + Convert::ToString(idSiguiente) + ";" + idProducto + ";" + objBebida->GetCantidadPedida() + ";0";
		//String^ lineaItExt = Convert::ToString(objPController->buscarIdxNombre(objBebida->GetNombre())) + ";" + objBebida->GetCantidadPedida() + ";0";
		//lineasEscribirExterno->Add(lineaItExt);
	//}


	//escribiendo ultimo id
	//List<String^>^ idDetalleActualizar = gcnew List<String^>();
	//idDetalleActualizar->Add(Convert::ToString(idSiguiente));

	//File::WriteAllLines("Recursos/Comensal/pedidotemporal/ultimoIdPedidoMesa.txt", idDetalleActualizar);
	
	/*formato del archivo pedidoMesaGeneral.txt*/

	/*revisar esto de abajo, se puede borrar uno de los dos de abajo*/

	File::WriteAllLines("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt", lineasEscribir);

	/*externo*/
	

	/*
	int existeIdCuenta=0;
	String^ separadores = ";";
	for each (String^ linea in lineasPedidoGeneralActualizarCuenta)
	{
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		String^ idCuenta = Convert::ToString(objOrdenMesa->GetId());

		if (datos[0]->Contains(idUltimo[0])) {
			existeIdCuenta = 1;
		}
		
	};
	*/

	//File::WriteAllLines("NewComensal/DetallePedidoMesaGeneral.txt", lineasEscribirExterno);
	List<OrdenMesa^>^ listaObjOrdenMesa = gcnew List<OrdenMesa^>();

	listaObjOrdenMesa = BuscarPedidoGeneralxnumMesa(objOrdenMesa->GetMesa());
	/*crea una nueva cuenta o actualizar cuenta del id cuenta y guardar*/
	if (listaObjOrdenMesa->Count >0) {
		
		actualizarCuenta(listaObjOrdenMesa[0], objOrdenMesa);
		/*
		for each (String ^ linea in lineasPedidoGeneralActualizarCuenta)
		{
			array<String^>^ datos = linea->Split(separadores->ToCharArray());
			String^ idCuenta = idUltimo[0];
			double cuentaTotal = Convert::ToDouble(datos[3])+ objOrdenMesa->GetCuenta();
			if (datos[0]->Contains(idCuenta)) {
				datos[3] = Convert::ToString(cuentaTotal);
				linea = datos[0] + ";" + datos[1] + ";" + datos[2] + ";" + datos[3] + ";" + datos[4];

			}
			lineasEscribirExternoActualizarCuenta->Add(linea);

		}
		File::WriteAllLines("NewComensal/pedidoMesaGeneral.txt", lineasEscribirExternoActualizarCuenta);
		*/

	}
	else {


		//agregando nueva cuenta
		agregarNuevoPedidoGeneral(objOrdenMesa);
		/*
		for each (String^ linea in lineasPedidoGeneralActualizarCuenta)
		{
			lineasEscribirExternoActualizarCuenta->Add(linea);

		};
		//3;2;2;20;04/06/2023
		int nMesa = objOrdenMesa->GetMesa();
		double cuentaTotal = objOrdenMesa->GetCuenta();
		String^ fechaCuenta = DateTime::Now.ToString("dd/MM/yyyy");
		String^ lineaNueva = Convert::ToString(idUltimo[0]) + ";" + Convert::ToString(nMesa) + ";1" + ";"+Convert::ToString(cuentaTotal) +";" + fechaCuenta;
		lineasEscribirExternoActualizarCuenta->Add(lineaNueva);
		File::WriteAllLines("NewComensal/pedidoMesaGeneral.txt", lineasEscribirExternoActualizarCuenta);
		*/
	}

};
// función guardarPedido version txt
void PedidoController::guardarPedidotxt(OrdenMesa^ objOrdenMesa) {
	List<Bebida^>^ listaBebidasLeida = gcnew List<Bebida^>();
	List<Plato^>^ listaPlatoLeida = gcnew List<Plato^>();
	//se queda, porque solo es temporal
	listaBebidasLeida = this->LeerPedidosBebidas("Recursos//Comensal//pedidotemporal//pedido1.txt");
	listaPlatoLeida = this->LeerPedidosPlato("Recursos//Comensal//pedidotemporal//pedido1.txt");
	/*almacen de pedidos*/
	// esto hay que cambiar por base de datos,una tabla que almacena el pedido de los clientes
	array<String^>^ lineas = File::ReadAllLines("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
	
	//hay que modificar el condicional, el valor debería ser 1 si la tabla que corresponder a los pedidos de ese comensal está vacío
	
	if (!(lineas[0]->Contains("vacio"))) {
		/*lista donde se guardara los nuevos platos que se envian*/
		List<Plato^>^ listaNuevosPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaNuevasBebidas = gcnew List<Bebida^>();
		/*escribir archivo sumando las cantidades que ya pidieron*/
		List<Bebida^>^ listaBebidasLeidaPedidoFinal = gcnew List<Bebida^>();
		List<Plato^>^ listaPlatoLeidaPedidoFinal = gcnew List<Plato^>();
		//Se obtiene los platos que ordenó el comensal, esto debe ser reemplazado por base de datos
		listaBebidasLeidaPedidoFinal = this->LeerPedidosBebidasFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
		listaPlatoLeidaPedidoFinal = this->LeerPedidosPlatoFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
		for each (Plato^ objPlatoComparacion in listaPlatoLeida)
		{
			int platoNuevo = 1;
			for each (Plato^ objPlatoPedidoFinal in listaPlatoLeidaPedidoFinal)
			{
				if (objPlatoComparacion->GetNombre() == objPlatoPedidoFinal->GetNombre()) {
					int cantidadNueva = objPlatoComparacion->GetCantidadPedida() + objPlatoPedidoFinal->GetCantidadPedida();
					objPlatoPedidoFinal->SetCantidadPedida(cantidadNueva);
					objPlatoPedidoFinal->SetPrecio(objPlatoComparacion->GetPrecio());
					platoNuevo = 0;
					break;

				}
				

			}
			if (platoNuevo) {
				listaNuevosPlatos->Add(objPlatoComparacion);

			};
		}
		/*Se termina de sumar cantidad, ahora a agregar los platos nuevos*/
		for each (Plato^ ObjPlato in listaNuevosPlatos)
		{
			listaPlatoLeidaPedidoFinal->Add(ObjPlato);
		}

		/*Lo mismo para las bebidas*/
		for each (Bebida^ objBebidasComparacion in listaBebidasLeida)
		{
			int bebidaNueva = 1;
			for each (Bebida^ objBebidasPedidoFinal in listaBebidasLeidaPedidoFinal)
			{
				if (objBebidasComparacion->GetNombre() == objBebidasPedidoFinal->GetNombre()) {
					int cantidadNueva = objBebidasComparacion->GetCantidadPedida() + objBebidasPedidoFinal->GetCantidadPedida();
					objBebidasPedidoFinal->SetCantidadPedida(cantidadNueva);
					objBebidasPedidoFinal->SetPrecio(objBebidasComparacion->GetPrecio());
					bebidaNueva = 0;
					break;

				}

			}
			if (bebidaNueva) {
				listaNuevasBebidas->Add(objBebidasComparacion);
			}

		}
		/*Se termina de sumar cantidad, ahora a agregar las bebidas nuevas*/
		for each (Bebida^ ObjBebida in listaNuevasBebidas)
		{
			listaBebidasLeidaPedidoFinal->Add(ObjBebida);
		}
		escribirArchivoFormatoChef(listaPlatoLeidaPedidoFinal, listaBebidasLeidaPedidoFinal, listaPlatoLeida,listaBebidasLeida, objOrdenMesa);
		//escribirArchivoFormatoAsistente(listaPlatoLeidaPedidoFinal, listaBebidasLeidaPedidoFinal, numeroMesa);

	}
	else {
		/*archivo vacio, simplemente se escribe*/
		escribirArchivoFormatoChef(listaPlatoLeida, listaBebidasLeida, listaPlatoLeida, listaBebidasLeida,objOrdenMesa);
		//escribirArchivoFormatoAsistente(listaPlatoLeida, listaBebidasLeida, numeroMesa);


	}


};


//función guardarPedido version base de datos
void PedidoController::guardarPedido(OrdenMesa^ objOrdenMesa) {
	List<Bebida^>^ listaBebidasLeida = gcnew List<Bebida^>();
	List<Plato^>^ listaPlatoLeida = gcnew List<Plato^>();
	List<Plato^>^ listaProductosComensal = gcnew List<Plato^>();
	//se queda, porque solo es temporal
	listaBebidasLeida = this->LeerPedidosBebidas("Recursos//Comensal//pedidotemporal//pedido1.txt");
	listaPlatoLeida = this->LeerPedidosPlato("Recursos//Comensal//pedidotemporal//pedido1.txt");
	/*almacen de pedidos*/
	// esto hay que cambiar por base de datos,una tabla que almacena el pedido de los clientes
	//array<String^>^ lineas = File::ReadAllLines("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
	listaProductosComensal = obtenerPedidoComensal(objOrdenMesa->GetMesa());

	//hay que modificar el condicional, el valor debería ser 1 si la tabla que corresponder a los pedidos de ese comensal está vacío
	//NUEVO: verificando que la lista hay al menos un pedido para considerar que ya se pidio
	if (listaProductosComensal->Count > 0) {
		/*lista donde se guardara los nuevos platos que se envian*/
		List<Plato^>^ listaNuevosPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaNuevasBebidas = gcnew List<Bebida^>();
		/*escribir archivo sumando las cantidades que ya pidieron*/
		List<Bebida^>^ listaBebidasLeidaPedidoFinal = gcnew List<Bebida^>();
		List<Plato^>^ listaPlatoLeidaPedidoFinal = gcnew List<Plato^>();
		//Se obtiene los platos que ordenó el comensal, esto debe ser reemplazado por base de datos
		listaBebidasLeidaPedidoFinal = this->LeerPedidosBebidasFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
		listaPlatoLeidaPedidoFinal = this->LeerPedidosPlatoFinal("Recursos//Comensal//pedidototal//pedidomesaAsistente.txt");
		//listaBebidasLeidaPedidoFinal = obtenerPedidoDetalleBebidas(objOrdenMesa->GetMesa());
		//listaPlatoLeidaPedidoFinal = obtenerPedidoDetallePlato(objOrdenMesa->GetMesa());

		for each (Plato ^ objPlatoComparacion in listaPlatoLeida)
		{
			int platoNuevo = 1;
			for each (Plato ^ objPlatoPedidoFinal in listaPlatoLeidaPedidoFinal)
			{
				if (objPlatoComparacion->GetNombre() == objPlatoPedidoFinal->GetNombre()) {
					//actualizar en la base de datos

					int cantidadNueva = objPlatoComparacion->GetCantidadPedida() + objPlatoPedidoFinal->GetCantidadPedida();
					objPlatoPedidoFinal->SetCantidadPedida(cantidadNueva);
					objPlatoPedidoFinal->SetPrecio(objPlatoComparacion->GetPrecio());
					platoNuevo = 0;
					break;

				}


			}
			if (platoNuevo) {
				listaNuevosPlatos->Add(objPlatoComparacion);

			};
		}
		/*Se termina de sumar cantidad, ahora a agregar los platos nuevos*/
		for each (Plato ^ ObjPlato in listaNuevosPlatos)
		{
			listaPlatoLeidaPedidoFinal->Add(ObjPlato);
		}

		/*Lo mismo para las bebidas*/
		for each (Bebida ^ objBebidasComparacion in listaBebidasLeida)
		{
			int bebidaNueva = 1;
			for each (Bebida ^ objBebidasPedidoFinal in listaBebidasLeidaPedidoFinal)
			{
				if (objBebidasComparacion->GetNombre() == objBebidasPedidoFinal->GetNombre()) {
					int cantidadNueva = objBebidasComparacion->GetCantidadPedida() + objBebidasPedidoFinal->GetCantidadPedida();
					objBebidasPedidoFinal->SetCantidadPedida(cantidadNueva);
					objBebidasPedidoFinal->SetPrecio(objBebidasComparacion->GetPrecio());
					bebidaNueva = 0;
					break;

				}

			}
			if (bebidaNueva) {
				listaNuevasBebidas->Add(objBebidasComparacion);
			}

		}
		/*Se termina de sumar cantidad, ahora a agregar las bebidas nuevas*/
		for each (Bebida ^ ObjBebida in listaNuevasBebidas)
		{
			listaBebidasLeidaPedidoFinal->Add(ObjBebida);
		}
		escribirArchivoFormatoChef(listaPlatoLeidaPedidoFinal, listaBebidasLeidaPedidoFinal, listaPlatoLeida, listaBebidasLeida, objOrdenMesa);
		//escribirArchivoFormatoAsistente(listaPlatoLeidaPedidoFinal, listaBebidasLeidaPedidoFinal, numeroMesa);

	}
	else {
		/*archivo vacio, simplemente se escribe*/
		escribirArchivoFormatoChef(listaPlatoLeida, listaBebidasLeida, listaPlatoLeida, listaBebidasLeida, objOrdenMesa);
		//escribirArchivoFormatoAsistente(listaPlatoLeida, listaBebidasLeida, numeroMesa);


	}


};


void PedidoController::CuentaPagada(OrdenMesa^ mesa) {
	//se mantiene
	//array<String^>^ lineasLeidas = File::ReadAllLines("Recursos//Comensal//pedidoTotal//pedidomesa.txt");
	//List<String^>^ lineasEscribir = gcnew List<String^>();
	List<String^>^ lineaEscribirPedidoGeneral = gcnew List<String^>();
	List<String^>^ lineaVacia = gcnew List<String^>();
	List<String^>^ lineaInicializarIdDetallePedido = gcnew List<String^>();
	List<String^>^ idPedidoGeneralActualizado = gcnew List<String^>();
	List<String^>^ actualizarEstadoPedidoGeneral = gcnew List<String^>();
	//for each (String^ linea in lineasLeidas) 
	//{
		//lineasEscribir->Add(linea);
	//}
	//leer archivo pedidos general
	array<String^>^ lineasPedidoGeneral = File::ReadAllLines("NewComensal/pedidoMesaGeneral.txt");
	String^ separadores = ";";
	//modificar la linea con el id correspodnite, el estado a 0
	array<String^>^ numId = File::ReadAllLines("Recursos/Comensal/pedidotemporal/ultimoId.txt");
	String^ idCuenta = Convert::ToString(numId[0]);
	for each (String^ linea in lineasPedidoGeneral) {
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		if (datos[0]->Contains(idCuenta)) {
			datos[2] = "0";//Creo que no es necesario considerar el 2, dado que una vez se paga la cuenta la mesa estaría vacía
			linea = datos[0] + ";" + datos[1] + ";" + datos[2] + ";" + datos[3] + ";" + datos[4];

		};
		actualizarEstadoPedidoGeneral->Add(linea);

	};
/*
	for each (String^ lineas in lineasLeidas) {
		lineaEscribirPedidoGeneral->Add(lineas);
	}*/

	lineaVacia->Add("vacio");
	array<String^>^ idCuentaUltimo = File::ReadAllLines("Recursos/Comensal/pedidotemporal/ultimoId.txt");
	int num = Convert::ToInt32(idCuentaUltimo[0]) + 1;
	idPedidoGeneralActualizado->Add(Convert::ToString(num));
	

	//guardar cambios
	//externi
	File::WriteAllLines("NewComensal/pedidoMesaGeneral.txt", actualizarEstadoPedidoGeneral);
	
	//interno
	File::WriteAllLines("Recursos//Comensal//PedidoTotal//pedidomesaAsistente.txt", lineaVacia);
	//File::WriteAllLines("Recursos//Comensal//PedidoTotal//pedidomesa.txt", lineaVacia);
	
	File::WriteAllLines("Recursos//Comensal//pedidoTemporal//ultimoId.txt", idPedidoGeneralActualizado);

	/*
	//Escribe en registro
	String^ direccion = "mesa" + Convert::ToString(mesa)+".txt";
	//leer lo que había y reeescribir

	array<String^>^ lineasLeidas2 = File::ReadAllLines("Recursos//Comensal//RegistroPedidos//" + direccion);
	
	if (!(lineasLeidas2[0]->Contains("vacio"))) {
		//rescribir
		for each (String^ linea in lineasLeidas2)
		{
			lineasEscribir->Add(linea);
		}
		File::WriteAllLines("Recursos//Comensal//RegistroPedidos//" + direccion, lineasEscribir);
	}
	else {
		File::WriteAllLines("Recursos//Comensal//RegistroPedidos//" + direccion, lineasEscribir);
	}
	*/

	/*incializando archivos de la carpeta pedido total para que sean usados por otros comensales*/
	//lineaVacia->Add("vacio");// se tiene que escribir vacio en los archivos, si no surgirá un error
	//archivos de Franco y Misael
	/*
	File::WriteAllLines("Recursos//Comensal//PedidoTotal//pedido"+direccion,lineaVacia);
	//archivo interno
	File::WriteAllLines("Recursos//AsistenteChef//pedido"+direccion, lineaVacia);
	
	*/
	
};

/*Esta funcion modifica el estado del pedido de una mesa determinada, asume que nunca un pedido va a pasar de un estado X a un estado menor*/
void PedidoController::ModificarEstadoPedido(int idProducto, int cantidadPedida, int estadoDelPedido, int numeroDeMesaALeer) {
	String^ direccion = "pedidomesa" + Convert::ToString(numeroDeMesaALeer)+".txt";
	array<String^>^ lineasLeidas = File::ReadAllLines("Recursos//AsistenteChef//"+direccion);
	String^ separadores = ";"; 
	List<String^>^ lineasEscribir = gcnew List<String^>();
	for each (String^ linea in lineasLeidas)
	{
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		int cpedida = Convert::ToInt32(datos[1]);
		int estado = Convert::ToInt32(datos[2]);
		if (id == idProducto && cpedida == cantidadPedida && estado < estadoDelPedido) {
			datos[2] = Convert::ToString(estadoDelPedido);
		};
		String^ linea = datos[0] + ";" + datos[1] + ";" + datos[2];
		lineasEscribir->Add(linea);
	}
	File::WriteAllLines("Recursos//AsistenteChef//" + direccion,lineasEscribir);
};

