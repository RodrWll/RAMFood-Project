#include "BebidaPlatosController.h"

using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;


BebidaPlatosController::BebidaPlatosController() {

}

List<Bebidas^>^ BebidaPlatosController::ObtenerInfoBebida() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<Bebidas^>^ listaBebidasEncontradas = gcnew List<Bebidas^>();
	array<String^>^ lineas = File::ReadAllLines("Bebidas.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaBebida in lineas) {
		array<String^>^ datos = lineaBebida->Split(separadores->ToCharArray());
		double PrecioBebida = Convert::ToDouble(datos[1]);
		String^ nombre = datos[0];
		int id = Convert::ToInt32(datos[2]);
		Bebidas^ objBebida = gcnew Bebidas(nombre, PrecioBebida, 1, 0, 0, id);
		listaBebidasEncontradas->Add(objBebida);
	}
	return listaBebidasEncontradas;
}
List<Plato^>^ BebidaPlatosController::ObtenerInfoPlato() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines("Platos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPlato in lineas) {
		array<String^>^ datos = lineaPlato->Split(separadores->ToCharArray());
		double PrecioPlato = Convert::ToDouble(datos[1]);
		String^ nombre = datos[0];
		int id = Convert::ToInt32(datos[2]);
		Plato^ objPlato = gcnew Plato(nombre, PrecioPlato, 1, 0, id);
		listaPlatosEncontrados->Add(objPlato);
	}
	return listaPlatosEncontrados;
}

//Metodo  CRUD para las Platos y bebidas del Menu

void BebidaPlatosController::AddPlatoBebidaMenu(PlatoBebidaMenu^ ObjPlatoBebidaMenu) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = buscarTodas();
	listaPlatosBebidas->Add(ObjPlatoBebidaMenu);
	escribirArchivo(listaPlatosBebidas, 1);
}

List<PlatoBebidaMenu^>^ BebidaPlatosController::buscarTodas() {
	/*En esta lista vamos a colocar la informaci�n de las carreras que encontremos en el archivo de texto*/
	List<PlatoBebidaMenu^>^ listaPlatosYBebidasEncontradas = gcnew List<PlatoBebidaMenu^>();
	array<String^>^ lineas = File::ReadAllLines("Bebidas_Menu.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		double Precio = Convert::ToDouble(datos[2]);
		int Tipo = Convert::ToInt32(datos[3]);
		PlatoBebidaMenu^ obPlatoBebidaMenu = gcnew PlatoBebidaMenu(Id, Nombre, Precio, Tipo);
		listaPlatosYBebidasEncontradas->Add(obPlatoBebidaMenu);
	}
	return listaPlatosYBebidasEncontradas;
}


void BebidaPlatosController::escribirArchivo(List<PlatoBebidaMenu^>^ ListaPlatoBebida, int TipoArchivo) {
	array<String^>^ lineasArchivo = gcnew array<String^>(ListaPlatoBebida->Count);
	for (int i = 0; i < ListaPlatoBebida->Count; i++) {
		PlatoBebidaMenu^ ObjPlatoBebida = ListaPlatoBebida[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";" + ObjPlatoBebida->GetNombre() + ";" + ObjPlatoBebida->GetPrecio() + ";" + ObjPlatoBebida->GetTipo();
	}
	if (TipoArchivo == 1) {
		File::WriteAllLines("Bebidas_Menu.txt", lineasArchivo);
	}
	else {
		if (TipoArchivo == 2) {
			File::WriteAllLines("menuDelDia.txt", lineasArchivo);
		}
	}

}

void BebidaPlatosController::EliminarPlatoBebida(int CodigoEliminar) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = buscarTodas();
	for (int i = 0; i < (listaPlatosBebidas->Count); i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatosBebidas[i];
		if (objPlatoBebida->GetId() == CodigoEliminar) {
			listaPlatosBebidas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPlatosBebidas, 1);

}

PlatoBebidaMenu^ BebidaPlatosController::QueryProductById(int codigoActualizar) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = buscarTodas();
	PlatoBebidaMenu^ objPlatoBebidaEncontrado = gcnew PlatoBebidaMenu();
	for (int i = 0; i < (listaPlatosBebidas->Count); i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatosBebidas[i];
		if (objPlatoBebida->GetId() == codigoActualizar) {
			objPlatoBebidaEncontrado = objPlatoBebida;
			break;
		}
	}
	return objPlatoBebidaEncontrado;
}

void BebidaPlatosController::UpdateProduct(PlatoBebidaMenu^ objPlatoBebidaMenu) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = buscarTodas();
	for (int i = 0; i < (listaPlatosBebidas->Count); i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatosBebidas[i];
		if (objPlatoBebida->GetId() == objPlatoBebidaMenu->GetId()) {
			listaPlatosBebidas[i] = objPlatoBebidaMenu;
			break;
		}
	}
	escribirArchivo(listaPlatosBebidas, 1);
}



//Funcion que me permite eliminar un plato o comida del MENU DIARIO
List<PlatoBebidaMenu^>^ BebidaPlatosController::BuscarProductoPorNombre(String^ Value) {
	List<PlatoBebidaMenu^>^ newProductList = gcnew List<PlatoBebidaMenu^>();
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = buscarTodas();

	for (int i = 0; i < listaPlatosBebidas->Count; i++) {
		PlatoBebidaMenu^ objPlatoBebidaMenu = listaPlatosBebidas[i];
		if (objPlatoBebidaMenu->GetNombre()->Contains(Value))
			newProductList->Add(listaPlatosBebidas[i]);
	}
	return newProductList;
}
void BebidaPlatosController::EliminarProductoDelMenuDiario(int CodigoEliminar) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = QueryAllProductFromDailyMenu();
	for (int i = 0; i < (listaPlatosBebidas->Count); i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatosBebidas[i];
		if (objPlatoBebida->GetId() == CodigoEliminar) {
			listaPlatosBebidas->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaPlatosBebidas, 2);
}

List<PlatoBebidaMenu^>^ BebidaPlatosController::QueryAllProductFromDailyMenu() {
	/*En esta lista vamos a colocar la informaci�n de las los productos que encontremos en el archivo de texto*/
	List<PlatoBebidaMenu^>^ listaPlatosYBebidasEncontradas = gcnew List<PlatoBebidaMenu^>();
	array<String^>^ lineas = File::ReadAllLines("menuDelDia.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		double Precio = Convert::ToDouble(datos[2]);
		int Tipo = Convert::ToInt32(datos[3]);
		PlatoBebidaMenu^ obPlatoBebidaMenu = gcnew PlatoBebidaMenu(Id, Nombre, Precio, Tipo);
		listaPlatosYBebidasEncontradas->Add(obPlatoBebidaMenu);
	}
	return listaPlatosYBebidasEncontradas;
}
PlatoBebidaMenu^ BebidaPlatosController::QueryProductByIdFromDailyMenu(int codigoActualizar) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = QueryAllProductFromDailyMenu();
	PlatoBebidaMenu^ objPlatoBebidaEncontrado = gcnew PlatoBebidaMenu();
	for (int i = 0; i < (listaPlatosBebidas->Count); i++) {
		PlatoBebidaMenu^ objPlatoBebida = listaPlatosBebidas[i];
		if (objPlatoBebida->GetId() == codigoActualizar) {
			objPlatoBebidaEncontrado = objPlatoBebida;
			break;
		}
	}
	return objPlatoBebidaEncontrado;
}


void BebidaPlatosController::AddProductToDailyMenu(PlatoBebidaMenu^ ObjPlatoBebidaMenu) {
	List<PlatoBebidaMenu^>^ listaPlatosBebidas = QueryAllProductFromDailyMenu();
	listaPlatosBebidas->Add(ObjPlatoBebidaMenu);
	escribirArchivo(listaPlatosBebidas, 2);
}
void BebidaPlatosController::Escribir_pedidos(List<Plato^>^ listaPlatosMesa, List<Bebidas^>^ listaBebidasMesa,
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

	primera_lista->Add("Bebidas");/*nombre para controlar la parte donde empieza las bebidas, creo que ser� util para hacer el reporte*/


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
void RAMFoodController::BebidaPlatosController::Escribir_archivo(String^ nombre_archivo, int valor)
{
	String^ texto = Convert::ToString(valor);
	List<String^>^ lista_texto = gcnew List<String^>(1);
	lista_texto->Add(texto);
	String^ nombre_archivo_m = "pedidotemporal//" + nombre_archivo + ".txt";
	File::WriteAllLines(nombre_archivo_m, lista_texto);

}
array<String^>^ RAMFoodController::BebidaPlatosController::Leer_archivo(String^ nombre_archivo)
{
	String^ direccion = "pedidotemporal//" + nombre_archivo + ".txt";
	array<String^>^ lineas = File::ReadAllLines(direccion);
	return  lineas;

}
;
/*Como esta funcion se llama primero, solo se verifica aqui si es nuevo pedido o uno modificado*/
List<Plato^>^ BebidaPlatosController::LeerPedidosPlato(String^ nombre_archivo) {
	/*Leyendo lineas del archivo*/
	List<Plato^>^ LPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);

	String^ separador = ";";
	int key = 1;
	for each (String ^ linea_plato in lineas) {

		if (key == 1) {
			array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
			if (datos[0] == "0" || datos[0] == "1") {

			}
			else {
				if (datos[0]->Contains("Bebidas")) { key = 0; }
				else {
					String^ nombre_plato = datos[0];
					double precio = Convert::ToDouble(datos[2]);
					int cpedida = Convert::ToInt32(datos[1]);
					Plato^ objPlato = gcnew Plato(nombre_plato, precio, 0, cpedida, 0);
					LPlatosEncontrados->Add(objPlato);
				};
			};
		};
	};
	return LPlatosEncontrados;
};

List<Bebidas^>^ BebidaPlatosController::LeerPedidosBebidas(String^ nombre_archivo) {
	/*Leyendo lineas del archivo*/
	List<Bebidas^>^ LBebidasEncontrados = gcnew List<Bebidas^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);
	String^ separador = ";";
	int key = 0;
	int vez = 1;
	for each (String ^ linea_plato in lineas) {
		/*Se busca hasta encontrar la palabra bebidas, para empezar a guardar datos*/
		array<String^>^ datos = linea_plato->Split(separador->ToCharArray());
		if (vez == 1 && (datos[0]->Contains("Bebidas"))) { key = 1; vez = 0; }
		else {
			if (key == 1) {

				String^ nombre_bebida = datos[0];
				double precio = Convert::ToDouble(datos[2]);
				int cpedida = Convert::ToInt32(datos[1]);
				Bebidas^ objBebida = gcnew Bebidas(nombre_bebida, precio, 0, cpedida, 0, 0);
				LBebidasEncontrados->Add(objBebida);
			};
		};

	};
	return LBebidasEncontrados;
}
int RAMFoodController::BebidaPlatosController::es_nuevo_pedido(String^ nombre_archivo)
{
	String^ direccion = "pedidotemporal//" + nombre_archivo + ".txt";
	array<String^>^ lineas = File::ReadAllLines(direccion);
	int valor = Convert::ToInt32(lineas[0]);
	return valor;
}

