#include "ReporteController.h"
#include "PedidoController.h"
#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;

using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

ReporteController::ReporteController() {
	this->objConexion = gcnew SqlConnection();

};



void ReporteController::conectarBD() {

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
	this->objConexion->Open();
	this->objConexion->State;

};


void ReporteController::cerrarConexionBD() {
	this->objConexion->Close();
	this->objConexion->State;
}
List<Reportes^>^ ReporteController::obtenerReportes()
{
	List <Reportes^>^ listaReportes = gcnew List<Reportes^>();
	conectarBD();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "select Rol, COUNT(*) from Usuarios WHERE Status=1  GRoup by Rol";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) {
		
		int Rol = safe_cast<Int32>(objData[0]);
		int Cantidad = safe_cast<Int32>(objData[1]);
		Reportes^ objReporte = gcnew Reportes(Rol, Cantidad);
		listaReportes->Add(objReporte);
	}
	cerrarConexionBD();
	return listaReportes;
}
;


//version BD
void ReporteController::obtenerTopPlatos(List<String^>^ listaId, List<String^>^ listaValor, String^ fechaInicio, String^ FechaFin) {
	PedidoController^ objController = gcnew PedidoController();


	List<String^>^ listaIdEnRango = gcnew List<String^>();
	//FILTRAR FECHAS: Primero, los id de pedido general que se encuentran en el rango de fechas
	conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT id FROM PedidoGeneralMesa WHERE fecha BETWEEN '"+fechaInicio+"' AND '"+FechaFin+"'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		listaIdEnRango->Add(Convert::ToString(safe_cast<Int32>(objData[0])));
	}
	cerrarConexionBD();

	if (listaIdEnRango->Count > 0) {

		productoController^ objProductoController = gcnew productoController();



		//for each (String ^ lineaPedido in listaPlatosLeidos)
		//{
			//array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
			//int idLeido = Convert::ToInt32(datos[2]);
			//if (id == idLeido) {
				//conteo = conteo + Convert::ToInt32(datos[3]);
			//}

		//}

		//con los datos obtenidos se hacen las consultas a la tabla de Detalle


		conectarBD();
		int final = listaIdEnRango->Count;
		SqlCommand^ objSentenciaP = gcnew SqlCommand();
		/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
		objSentenciaP->Connection = this->objConexion;
		/*Aqui voy a indicar la sentencia que voy a ejecutar*/
		objSentenciaP->CommandText = "SELECT idProducto,cantidad FROM DetallePedido WHERE idPedido BETWEEN " + listaIdEnRango[0] + " AND " + listaIdEnRango[final - 1] + " ORDER BY idProducto";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
		SqlDataReader^ objDataP = objSentenciaP->ExecuteReader();
		int idProductoAnterior;
		int key = 1;
		int iniciarConteo = 0;
		int conteo = 0;
		while (objDataP->Read()) {
			Producto^ PlatoProducto = gcnew Producto();
			int idBuscado = safe_cast<Int32>(objDataP[0]);
			PlatoProducto = objProductoController->buscarProductoxId(idBuscado);

			if (PlatoProducto->GetTipo() == 2) {
				iniciarConteo = 1;
			};

			int idProducto = safe_cast<Int32>(objDataP[0]);
			if (iniciarConteo) {
				if (key) {

					idProductoAnterior = idProducto;
					conteo = conteo + safe_cast<Int32>(objDataP[1]);
					key = 0;
				}
				else {
					if (idProductoAnterior == idProducto) {
						conteo = conteo + safe_cast<Int32>(objDataP[1]);
					}
					else
					{
						//agregar el ingreso en esa día a la tabla
						listaId->Add(Convert::ToString(idProductoAnterior));
						listaValor->Add(Convert::ToString(conteo));
						idProductoAnterior = idProducto;
						conteo = 0;
						conteo = conteo + safe_cast<Int32>(objDataP[1]);
						//if (!(objDataI->Read())) {

						//	listaFechas->Add(Convert::ToString(objDataI[1]));
						//	listaCuenta->Add(Convert::ToString(IngresoXDia));

						//}

					}
				};

				iniciarConteo = 0;
			};

		}
		if (key == 0) {
			listaId->Add(Convert::ToString(idProductoAnterior));
			listaValor->Add(Convert::ToString(conteo));

		
		}
		
		cerrarConexionBD();



		//listaValor->Add(Convert::ToString(conteo));



		//ordenar lista de valor

		int i, j, aux;
		String^ auxiliarId;
		for (i = 0; i < listaValor->Count; i++) {
			for (j = 0; j < listaValor->Count; j++) {
				int valorJ = Convert::ToInt32(listaValor[j]);
				int valorJsgte = 0;
				if (j < listaValor->Count - 1) {
					valorJsgte = Convert::ToInt32(listaValor[j + 1]);
				}
				if (j<listaValor->Count - 1 && valorJ > valorJsgte) {
					//id
					auxiliarId = listaId[j];
					listaId[j] = listaId[j + 1];
					listaId[j + 1] = auxiliarId;
					//valor
					aux = valorJ;
					listaValor[j] = listaValor[j + 1];
					listaValor[j + 1] = Convert::ToString(aux);
				}
			}
		}

	}
	else {
		listaIdEnRango->Clear();
		listaValor->Clear();
	}
	

	
	

};
void ReporteController::obtenerTopPlatosTxt(List<String^>^ listaId, List<String^>^ listaValor) {
	PedidoController^ objController = gcnew PedidoController();
	List<Plato^>^ listaPlatos = gcnew List<Plato^>();
	listaPlatos = objController->obtenerInfoPlato();
	
	array<String^>^ listaPlatosLeidos = File::ReadAllLines("NewComensal/DetallePedidoMesaGeneral.txt");

	String^ separadores = ";";

	for each (Plato ^ platoI in listaPlatos)
	{
		int id = platoI->GetId();
		int conteo = 0;
		listaId->Add(Convert::ToString(id));
		/*
		for each (String ^ lineaPedido in listaPlatosLeidos)
		{
			array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
			int idLeido = Convert::ToInt32(datos[2]);
			if (id == idLeido) {
				conteo = conteo + Convert::ToInt32(datos[3]);
			}

		}*/
		conectarBD();
		/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
		SqlCommand^ objSentencia = gcnew SqlCommand();
		/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
		objSentencia->Connection = this->objConexion;
		/*Aqui voy a indicar la sentencia que voy a ejecutar*/
		objSentencia->CommandText = "SELECT * FROM DetallePedido WHERE idProducto=" + Convert::ToString(id) + " and estado=3";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
		SqlDataReader^ objData = objSentencia->ExecuteReader();

		while (objData->Read()) {
			conteo = conteo + Convert::ToInt32(objData[3]);

		}
		cerrarConexionBD();



		listaValor->Add(Convert::ToString(conteo));

	};
	//ordenar lista de valor
	int i, j, aux;
	
	String^ auxiliarId;
	for (i = 0; i < listaValor->Count; i++) {
		for (j = 0; j < listaValor->Count; j++) {
			int valorJ = Convert::ToInt32(listaValor[j]);
			int valorJsgte = 0;
			if (j <listaValor->Count-1) {
				valorJsgte = Convert::ToInt32(listaValor[j + 1]);
			}
			if (j<listaValor->Count - 1 && valorJ > valorJsgte) {
				//id
				auxiliarId = listaId[j];
				listaId[j] = listaId[j + 1];
				listaId[j + 1] = auxiliarId;
				//valor
				aux = valorJ;
				listaValor[j] = listaValor[j + 1];
				listaValor[j + 1] = Convert::ToString(aux);
			}
		}
	}


};

void ReporteController::obtenerTopBebidas(List<String^>^ listaId, List<String^>^ listaValor, String^ fechaInicio, String^ FechaFin) {
	PedidoController^ objController = gcnew PedidoController();
	List<Bebida^>^ listaBebida = gcnew List<Bebida^>();
	listaBebida = objController->obtenerInfoBebida();

	/*

	array<String^>^ listaPlatosLeidos = File::ReadAllLines("NewComensal/DetallePedidoMesaGeneral.txt");

	String^ separadores = ";";

	for each (Bebida^ platoI in listaBebida)
	{
		int id = platoI->GetId();
		int conteo = 0;
		listaId->Add(Convert::ToString(id));
		for each (String ^ lineaPedido in listaPlatosLeidos)
		{
			array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
			int idLeido = Convert::ToInt32(datos[2]);
			if (id == idLeido) {
				conteo = conteo + Convert::ToInt32(datos[3]);
			}

		}
		listaValor->Add(Convert::ToString(conteo));

	};
	*/


	List<String^>^ listaIdEnRango = gcnew List<String^>();
	//FILTRAR FECHAS: Primero, los id de pedido general que se encuentran en el rango de fechas
	conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentencia->CommandText = "SELECT id FROM PedidoGeneralMesa WHERE fecha BETWEEN '" + fechaInicio + "' AND '" + FechaFin + "'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	while (objData->Read()) {
		listaIdEnRango->Add(Convert::ToString(safe_cast<Int32>(objData[0])));
	}
	cerrarConexionBD();

	if (listaIdEnRango->Count>0) {
	
		productoController^ objProductoController = gcnew productoController();



		//for each (String ^ lineaPedido in listaPlatosLeidos)
		//{
			//array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
			//int idLeido = Convert::ToInt32(datos[2]);
			//if (id == idLeido) {
				//conteo = conteo + Convert::ToInt32(datos[3]);
			//}

		//}

		//con los datos obtenidos se hacen las consultas a la tabla de Detalle


		conectarBD();
		int final = listaIdEnRango->Count;
		SqlCommand^ objSentenciaP = gcnew SqlCommand();
		/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
		objSentenciaP->Connection = this->objConexion;
		/*Aqui voy a indicar la sentencia que voy a ejecutar*/
		objSentenciaP->CommandText = "SELECT idProducto,cantidad FROM DetallePedido WHERE idPedido BETWEEN " + listaIdEnRango[0] + " AND " + listaIdEnRango[final - 1] + " ORDER BY idProducto";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
		SqlDataReader^ objDataP = objSentenciaP->ExecuteReader();
		int idProductoAnterior;
		int key = 1;
		int iniciarConteo = 0;
		int conteo = 0;
		while (objDataP->Read()) {
			Producto^ PlatoProducto = gcnew Producto();
			PlatoProducto = objProductoController->buscarProductoxId(safe_cast<Int32>(objDataP[0]));

			if (PlatoProducto->GetTipo() == 1) {
				iniciarConteo = 1;
			};

			int idProducto = safe_cast<Int32>(objDataP[0]);
			if (iniciarConteo) {
				if (key) {

					idProductoAnterior = idProducto;
					conteo = conteo + safe_cast<Int32>(objDataP[1]);
					key = 0;
				}
				else {
					if (idProductoAnterior == idProducto) {
						conteo = conteo + safe_cast<Int32>(objDataP[1]);
					}
					else
					{
						//agregar el ingreso en esa día a la tabla
						listaId->Add(Convert::ToString(idProductoAnterior));
						listaValor->Add(Convert::ToString(conteo));
						idProductoAnterior = idProducto;
						conteo = 0;
						conteo = conteo + safe_cast<Int32>(objDataP[1]);
						//if (!(objDataI->Read())) {

						//	listaFechas->Add(Convert::ToString(objDataI[1]));
						//	listaCuenta->Add(Convert::ToString(IngresoXDia));

						//}

					}
				};

				iniciarConteo = 0;
			};

		}
		if (key == 0) {
			listaId->Add(Convert::ToString(idProductoAnterior));
			listaValor->Add(Convert::ToString(conteo));

		};
		
		cerrarConexionBD();








		//ordenar lista de valor
		int i, j, aux;
		String^ auxiliarId;
		for (i = 0; i < listaValor->Count; i++) {
			for (j = 0; j < listaValor->Count; j++) {
				int valorJ = Convert::ToInt32(listaValor[j]);
				int valorJsgte = 0;
				if (j < listaValor->Count - 1) {
					valorJsgte = Convert::ToInt32(listaValor[j + 1]);
				}

				if (j<listaValor->Count - 1 && valorJ > valorJsgte) {
					//id
					auxiliarId = listaId[j];
					listaId[j] = listaId[j + 1];
					listaId[j + 1] = auxiliarId;
					//valor
					aux = valorJ;
					listaValor[j] = listaValor[j + 1];
					listaValor[j + 1] = Convert::ToString(aux);
				}
			}
		}

	}
	else {
	
		listaId->Clear();
		listaValor->Clear();
	}

	


};


void ReporteController::obtenerVentasTotalTxt(List<String^>^ listaFechas, List<String^>^ listaCuenta) {

	array<String^>^ lineasLeidas = File::ReadAllLines("NewComensal//pedidoMesaGeneral.txt");
	String^ separador = ";";
	
	for each (String^ linea in lineasLeidas)
	{
		int agregar = 1;
		array<String^>^ datos = linea->Split(separador->ToCharArray());
		//ver si la nueva fecha es nueva, si es asi agregarla
		for each (String^ fechas in listaFechas)
		{
			if (fechas->Contains(datos[4])) {
				agregar = 0;
				break;
			}
		}
		if (agregar) {
			listaFechas->Add(datos[4]);
		}

	}
	for each (String^ fechaRegistrada in listaFechas)
	{
		int monto = 0;
		for each (String^ linea in lineasLeidas) {
			array<String^>^ datos = linea->Split(separador->ToCharArray());
			
			if (datos[4]->Contains(fechaRegistrada)) {
				monto = monto + Convert::ToInt32(datos[3]);
						
			}
		
		}
		listaCuenta->Add(Convert::ToString(monto));

	}

};


//version BD
void ReporteController::obtenerVentasTotal(List<String^>^ listaFechas, List<String^>^ listaCuenta, String^ fechaInicio, String^ FechaFin) {

	//array<String^>^ lineasLeidas = File::ReadAllLines("NewComensal//pedidoMesaGeneral.txt");
	//String^ separador = ";";


	
	//FILTRAR FECHAS: Primero, los id de pedido general que se encuentran en el rango de fechas
	//conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	//SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	//objSentencia->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	//objSentencia->CommandText = "SELECT fecha FROM PedidoGeneralMesa WHERE fecha ";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	//SqlDataReader^ objData = objSentencia->ExecuteReader();

	//while (objData->Read()) {
	//	if (!(listaFechas->Contains(safe_cast<String^>(objData[0])))) {
	//		listaFechas->Add(safe_cast<String^>(objData[0]));
	//	};
		
	//}
	//cerrarConexionBD();
	
	

	double IngresoXDia=0;
	conectarBD();
		/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentenciaI = gcnew SqlCommand();
		/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentenciaI->Connection = this->objConexion;
		/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentenciaI->CommandText = "SELECT cuenta,fecha FROM PedidoGeneralMesa WHERE fecha BETWEEN '"+fechaInicio+"' AND '"+FechaFin+"'";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objDataI = objSentenciaI->ExecuteReader();
	String^ fechaAnterior = "vacio";
	int key = 1;
	int i =0 ;
	
	while (objDataI->Read()) {
		
		String^ fechaLeida = Convert::ToString(objDataI[1]);
		if (key) {
			fechaAnterior = Convert::ToString(fechaLeida);
			IngresoXDia = IngresoXDia + safe_cast<Double>(objDataI[0]);
			key = 0;
		}
		else {
			if (fechaAnterior->Contains(fechaLeida)) {
				IngresoXDia = IngresoXDia + safe_cast<Double>(objDataI[0]);
			}
			else
			{
				//agregar el ingreso en esa día a la tabla
				listaFechas->Add(fechaAnterior);
				listaCuenta->Add(Convert::ToString(IngresoXDia));
				fechaAnterior = fechaLeida;
				IngresoXDia = 0;
				IngresoXDia = IngresoXDia + safe_cast<Double>(objDataI[0]);
				//if (!(objDataI->Read())) {
				
				//	listaFechas->Add(Convert::ToString(objDataI[1]));
				//	listaCuenta->Add(Convert::ToString(IngresoXDia));

				//}

			}
		};
		//i = i + 1;

	}
	if (key == 0) {
	
		listaFechas->Add(fechaAnterior);
		listaCuenta->Add(Convert::ToString(IngresoXDia));

	}
	
	


	cerrarConexionBD();
	


	/*
	for each (String ^ linea in lineasLeidas)
	{
		int agregar = 1;
		array<String^>^ datos = linea->Split(separador->ToCharArray());
		//ver si la nueva fecha es nueva, si es asi agregarla
		for each (String ^ fechas in listaFechas)
		{
			if (fechas->Contains(datos[4])) {
				agregar = 0;
				break;
			}
		}
		if (agregar) {
			listaFechas->Add(datos[4]);
		}

	}
	for each (String ^ fechaRegistrada in listaFechas)
	{
		int monto = 0;
		for each (String ^ linea in lineasLeidas) {
			array<String^>^ datos = linea->Split(separador->ToCharArray());

			if (datos[4]->Contains(fechaRegistrada)) {
				monto = monto + Convert::ToInt32(datos[3]);

			}

		}
		listaCuenta->Add(Convert::ToString(monto));

	}
	*/
};

void ReporteController::obtenerTop(List<String^>^ listaIdP, List<String^>^ listaValorP, List<String^>^ listaIdB, List<String^>^ listaValorB, String^ fechaInicio, String^ FechaFin) {

	List<String^>^ listaIdEnRango = gcnew List<String^>();
	
	conectarBD();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentenciaI = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentenciaI->Connection = this->objConexion;
	/*Aqui voy a indicar la sentencia que voy a ejecutar*/
	objSentenciaI->CommandText = "SELECT id FROM PedidoGeneralMesa WHERE fecha BETWEEN '"+ fechaInicio + "' AND '"+FechaFin+"'";
	/*Aqui ejecuto la sentencia en la Base de Datos*/
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objDataI = objSentenciaI->ExecuteReader();
	while (objDataI->Read())
	{
		String^ idElegido = Convert::ToString((objDataI[0]));

		listaIdEnRango->Add(idElegido);
	}

	cerrarConexionBD();

	int ultimaPosicion = listaIdEnRango->Count;
	if (ultimaPosicion > 0) {
		conectarBD();
		/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
		SqlCommand^ objSentenciaII = gcnew SqlCommand();
		/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
		objSentenciaII->Connection = this->objConexion;
		/*Aqui voy a indicar la sentencia que voy a ejecutar*/
		objSentenciaII->CommandText = "SELECT SUM(cantidad),idProducto FROM DetallePedido WHERE idPedido BETWEEN " + listaIdEnRango[0] + " AND " + listaIdEnRango[ultimaPosicion - 1] + " GROUP BY idProducto ORDER BY SUM(cantidad)";
		/*Aqui ejecuto la sentencia en la Base de Datos*/
		/*Para Select siempre sera ExecuteReader*/
		/*Para select siempre va a devolver un SqlDataReader*/
		SqlDataReader^ objDataII = objSentenciaII->ExecuteReader();
		productoController^ objProductoController = gcnew productoController();
		int idEncontrado;
		while (objDataII->Read())
		{
			Producto^ ProductoEncontrado = gcnew Producto();
			idEncontrado = safe_cast<Int32>(objDataII[1]);
			ProductoEncontrado = objProductoController->buscarProductoxId(idEncontrado);
			int cantidad = safe_cast<Int32>(objDataII[0]);
			if (ProductoEncontrado->GetTipo() == 1) {
				listaIdB->Add(Convert::ToString(idEncontrado));
				listaValorB->Add(Convert::ToString(cantidad));
			}
			else if (ProductoEncontrado->GetTipo() == 2) {
				listaIdP->Add(Convert::ToString(idEncontrado));
				listaValorP->Add(Convert::ToString(cantidad));
			};


		}

		cerrarConexionBD();

	}

};

