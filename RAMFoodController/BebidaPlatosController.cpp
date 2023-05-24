#include "BebidaPlatosController.h"

using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;


BebidaPlatosController::BebidaPlatosController() {

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


