#include "PedidoController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;


PedidoController::PedidoController() {};


List<Bebida^>^ PedidoController::obtenerInfoBebida() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<Bebida^>^ listaBebidasEncontradas = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines("Bebidas.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaBebida in lineas) {
		array<String^>^ datos = lineaBebida->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		double PrecioBebida = Convert::ToDouble(datos[2]);
		Bebida^ objBebida = gcnew Bebida(nombre, PrecioBebida, 1, 0, 0, id);
		listaBebidasEncontradas->Add(objBebida);
	}
	return listaBebidasEncontradas;
}
List<Plato^>^ PedidoController::obtenerInfoPlato() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines("Platos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPlato in lineas) {
		array<String^>^ datos = lineaPlato->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		String^ nombre = datos[1];
		double PrecioPlato = Convert::ToDouble(datos[2]);		
		Plato^ objPlato = gcnew Plato(nombre, PrecioPlato, 1, 0, id);
		listaPlatosEncontrados->Add(objPlato);
	}
	return listaPlatosEncontrados;
}

void PedidoController::escribirPedidos(List<Plato^>^ listaPlatosMesa, List<Bebida^>^ listaBebidasMesa,
String^ nombre_archivo, int cantidad_bebida[], int cantidad_platos[]) {
	/*Formando lista con los datos de los platos*/

	List<String^>^ primera_lista = gcnew List<String^>();
	/*
	String^ es_nuevo_pedido = "1";
	primera_lista->Add(es_nuevo_pedido);
	*/
	/*for (int numero=0; numero<5;numero++)*/
	for (int numero = 0; numero < 6; numero++) {
		if (cantidad_platos[numero] > 0) {

			/*plato1;cantidad;precio*/
			double precio = Convert::ToDouble(cantidad_platos[numero]) * (listaPlatosMesa[numero]->GetPrecio());
			String^ nombre = listaPlatosMesa[numero]->GetNombre();
			String^ texto = nombre + ";" + Convert::ToString(cantidad_platos[numero]) + ";" + Convert::ToString(precio);
			primera_lista->Add(texto);

			/*primera_lista[y] = nombre + ";" + Convert::ToString(cantidad_platos[numero]) + ";";*/

		};

	};

	primera_lista->Add("Bebida");/*nombre para controlar la parte donde empieza las bebidas, creo que ser� util para hacer el reporte*/


	/*Formando lista con los datos de las bebidas*/
	/*
	for each (int numero in cantidad_bebida) {
		if (numero > 0) {


			double precio = Convert::ToDouble(numero) * (listaBebidasMesa[i]->GetPrecio());
			primera_lista[y] = listaBebidasMesa[i]->GetNombre() + ";" + Convert::ToString(numero) + ";" + Convert::ToString(precio);
			y = y + 1;

		};
		i = i + 1;
	};
	*/

	for (int numero = 0; numero < 6; numero++) {
		if (cantidad_bebida[numero] > 0) {

			String^ nombre = listaBebidasMesa[numero]->GetNombre();
			double precio = Convert::ToDouble(cantidad_bebida[numero]) * (listaBebidasMesa[numero]->GetPrecio());
			String^ texto = nombre + ";" + Convert::ToString(cantidad_bebida[numero]) + ";" + Convert::ToString(precio);
			primera_lista->Add(texto);

			//primera_lista[y] = nombre + ";" + Convert::ToString(cantidad_bebida[numero]) + ";";
			/*
			String^ texto = nombre + ";" + Convert::ToString(cantidad_platos[numero]) + ";" + Convert::ToString(precio);
			primera_lista->Add(texto);
			*/

		};

	};
	/*Escribirlas en un archivo, linea por linea*/
	File::WriteAllLines("pedidotemporal//pedido1.txt", primera_lista);
}
void PedidoController::escribirArchivo(String^ nombre_archivo, int valor)
{
	String^ texto = Convert::ToString(valor);
	List<String^>^ lista_texto = gcnew List<String^>(1);
	lista_texto->Add(texto);
	String^ nombre_archivo_m = "pedidotemporal//" + nombre_archivo + ".txt";
	File::WriteAllLines(nombre_archivo_m, lista_texto);

}
array<String^>^ PedidoController::leerArchivo(String^ nombre_archivo)
{
	String^ direccion = "pedidotemporal//" + nombre_archivo + ".txt";
	array<String^>^ lineas = File::ReadAllLines(direccion);
	return  lineas;

}
;
/*Como esta funcion se llama primero, solo se verifica aqui si es nuevo pedido o uno modificado*/

int PedidoController::esNuevoPedido(String^ nombre_archivo)
{
	String^ direccion = "pedidotemporal//" + nombre_archivo + ".txt";
	array<String^>^ lineas = File::ReadAllLines(direccion);
	int valor = Convert::ToInt32(lineas[0]);
	return valor;
}




/**/
List<Plato^>^ PedidoController::LeerPedidosPlato(String^ nombre_archivo) {
	/*Leyendo lineas del archivo*/
	List<Plato^>^ LPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);

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
					Plato^ objPlato = gcnew Plato(nombre_plato, precio, 0, cpedida, 0);
					LPlatosEncontrados->Add(objPlato);
				};
			
		};
	};
	return LPlatosEncontrados;
};
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
				Bebida^ objBebida = gcnew Bebida(nombre_bebida, precio, 0, cpedida, 0, 0);
				LBebidasEncontrados->Add(objBebida);
			};
		};

	};
	return LBebidasEncontrados;
}


List<Plato^>^ PedidoController::LeerPedidosPlatoFinal(String^ nombre_archivo) {
	/*Este método solo lee el nombre, precio, cantidad, idimagen y id lo settea a 0 por defecto*/
	/*Leyendo lineas del archivo*/
	List<Plato^>^ LPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);

	String^ separador = ";";
	int key = 1;
	int keyPlatos = 0;
	for each (String^ linea_plato in lineas) {

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
	};
	return LPlatosEncontrados;
};
List<Bebida^>^ PedidoController::LeerPedidosBebidasFinal(String^ nombre_archivo) {
	/*Este método solo lee el nombre, precio, cantidad, idimagen y id lo settea a 0 por defecto*/
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
				int cpedida = Convert::ToInt32(datos[1]);
				double cprecio = Convert::ToDouble(datos[2]);
				Bebida^ objBebida = gcnew Bebida(nombre_bebida, cprecio, 0, cpedida, 0, 0);
				LBebidasEncontrados->Add(objBebida);
			};
		};

	};
	return LBebidasEncontrados;
}


void PedidoController::escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, int numMesa) {
	int numeroLinea = 3 + lPlato->Count + lBebidas->Count;
	List<String^>^ lineasEscribir = gcnew List<String^>(numeroLinea);
	lineasEscribir->Add(Convert::ToString(numMesa));
	lineasEscribir->Add("Platos");
	for each (Plato^ objPlato in lPlato)
	{
		String^ lineaIt = objPlato->GetNombre() + ";" + objPlato->GetCantidadPedida();
		lineasEscribir->Add(lineaIt);
	}
	lineasEscribir->Add("Bebida");
	for each (Bebida^ objBebida in lBebidas)
	{
		String^ lineaIt = objBebida->GetNombre() + ";" + objBebida->GetCantidadPedida();
		lineasEscribir->Add(lineaIt);
	}
	File::WriteAllLines("pedidototal//pedidomesa.txt",lineasEscribir);
};
void PedidoController::escribirArchivoFormatoAsistente(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, int numMesa) {
	int numeroLinea = 3 + lPlato->Count + lBebidas->Count;
	List<String^>^ lineasEscribir = gcnew List<String^>(numeroLinea);
	lineasEscribir->Add(Convert::ToString(numMesa));
	lineasEscribir->Add("Platos");
	for each (Plato^ objPlato in lPlato)
	{
		String^ lineaIt = objPlato->GetNombre() + ";" + objPlato->GetCantidadPedida() + ";" + objPlato->GetPrecio();
		lineasEscribir->Add(lineaIt);
	}
	lineasEscribir->Add("Bebida");
	for each (Bebida^ objBebida in lBebidas)
	{
		String^ lineaIt = objBebida->GetNombre() + ";" + objBebida->GetCantidadPedida()+";"+ objBebida->GetPrecio();
		lineasEscribir->Add(lineaIt);
	}
	File::WriteAllLines("pedidototal//pedidomesaAsistente.txt", lineasEscribir);

};
void PedidoController::guardarPedido(int numeroMesa) {
	List<Bebida^>^ listaBebidasLeida = gcnew List<Bebida^>();
	List<Plato^>^ listaPlatoLeida = gcnew List<Plato^>();
	listaBebidasLeida = this->LeerPedidosBebidas("pedidotemporal//pedido1.txt");
	listaPlatoLeida = this->LeerPedidosPlato("pedidotemporal//pedido1.txt");
	array<String^>^ lineas = File::ReadAllLines("pedidototal//pedidomesa.txt");
	

	if (!(lineas[0]->Contains("vacio"))) {
		/*lista donde se guardara los nuevos platos que se envian*/
		List<Plato^>^ listaNuevosPlatos = gcnew List<Plato^>();
		List<Bebida^>^ listaNuevasBebidas = gcnew List<Bebida^>();
		/*escribir archivo sumando las cantidades que ya pidieron*/
		List<Bebida^>^ listaBebidasLeidaPedidoFinal = gcnew List<Bebida^>();
		List<Plato^>^ listaPlatoLeidaPedidoFinal = gcnew List<Plato^>();
		listaBebidasLeidaPedidoFinal = this->LeerPedidosBebidasFinal("pedidototal//pedidomesaAsistente.txt");
		listaPlatoLeidaPedidoFinal = this->LeerPedidosPlatoFinal("pedidototal//pedidomesaAsistente.txt");
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
		escribirArchivoFormatoChef(listaPlatoLeidaPedidoFinal, listaBebidasLeidaPedidoFinal, numeroMesa);
		escribirArchivoFormatoAsistente(listaPlatoLeidaPedidoFinal, listaBebidasLeidaPedidoFinal, numeroMesa);

	}
	else {
		/*archivo vacio, simplemente se escribe*/
		escribirArchivoFormatoChef(listaPlatoLeida, listaBebidasLeida, numeroMesa);
		escribirArchivoFormatoAsistente(listaPlatoLeida, listaBebidasLeida, numeroMesa);


	}


};

void PedidoController::CuentaPagada() {
	array<String^>^ lineasLeidas = File::ReadAllLines("pedidoTotal//pedidomesa.txt");
	List<String^>^ lineasEscribir = gcnew List<String^>();
	List<String^>^ lineaVacia = gcnew List<String^>();
	for each (String^ linea in lineasLeidas) 
	{
		lineasEscribir->Add(linea);
	}
	/*Escribien en registro*/
	File::WriteAllLines("RegistroPedidos//mesa1.txt",lineasEscribir);
	/*incializando archivos de la carpeta pedido total para que sean usados por otros comensales*/
	lineaVacia->Add("vacio");// se tiene que escribir vacio en los archivos, si no surgirá un error
	File::WriteAllLines("PedidoTotal//pedidomesa.txt",lineaVacia);
	File::WriteAllLines("PedidoTotal//pedidomesaAsistente.txt", lineaVacia);
};