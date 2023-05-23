#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;
productoController::productoController()
{
}
List<PlatoBebidaMenu^>^ productoController::listarProductos()
{
	List<PlatoBebidaMenu^>^ listaProductos = gcnew List<PlatoBebidaMenu^>();
	array<String^>^ lineas = File::ReadAllLines("productos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		double Precio = Convert::ToDouble(datos[2]);
		int Tipo = Convert::ToInt32(datos[3]);
		PlatoBebidaMenu^ objPlatoBebidaMenu = gcnew PlatoBebidaMenu(Id, Nombre, Precio, Tipo);
		listaProductos->Add(objPlatoBebidaMenu);
	}
	return listaProductos;
}
void productoController::escribirProductos(List<PlatoBebidaMenu^>^ listaProductos)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProductos->Count);
	for (int i = 0; i < listaProductos->Count; i++) {
		PlatoBebidaMenu^ ObjPlatoBebida = listaProductos[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";" + ObjPlatoBebida->GetNombre() + ";" + ObjPlatoBebida->GetPrecio() + ";" + ObjPlatoBebida->GetTipo();
	}
	File::WriteAllLines("productos.txt", lineasArchivo);
}
void productoController::addProducto(PlatoBebidaMenu^ objProducto)
{
	List<PlatoBebidaMenu^>^ listaProductos = listarProductos();
	listaProductos->Add(objProducto);
	escribirProductos(listaProductos);
}
void productoController::updateProducto(PlatoBebidaMenu^ objProducto)
{
	List<PlatoBebidaMenu^>^ listaProductos = listarProductos();
	for (int i = 0; i < listaProductos->Count; i++) {
			if (listaProductos[i]->GetId() == objProducto->GetId()) {
				listaProductos[i] = objProducto;
				break;
			}
	}
	escribirProductos(listaProductos);
}
void productoController::deleteProducto(int id)
{
List<PlatoBebidaMenu^>^ listaProductos = listarProductos();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->GetId() == id) {
			listaProductos->RemoveAt(i);
			break;
		}
	}
	escribirProductos(listaProductos);
}
PlatoBebidaMenu^ productoController::buscarProductoxId(int id)
{
	List<PlatoBebidaMenu^>^ listaProductos = listarProductos();
	PlatoBebidaMenu^ objProducto;
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->GetId() == id) {
			objProducto = listaProductos[i];
			break;
		}
	}
	return objProducto;
}
List<PlatoBebidaMenu^>^ productoController::buscarProductoxNombre(String^ nombre)
{
	List<PlatoBebidaMenu^>^ listaProductos = listarProductos();
	List<PlatoBebidaMenu^>^ listaProductosBuscados = gcnew List<PlatoBebidaMenu^>();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->GetNombre()->ToLower()->Contains(nombre->ToLower())) {
			listaProductosBuscados->Add(listaProductos[i]);
		}
	}
	return listaProductosBuscados;

}
List<int>^ productoController::listarIdProductos(List<PlatoBebidaMenu^>^ listaProductos)
{
	List<int>^ listaIdProductos = gcnew List<int>();
	for (int i = 0; i < listaProductos->Count; i++) {
		listaIdProductos->Add(listaProductos[i]->GetId());
	}
	return listaIdProductos;
}
void productoController::generarIdProductos(PlatoBebidaMenu^ objProducto)
{
	int nextId = 1;
	List<int>^ existingIds = listarIdProductos(listarProductos());
	existingIds->Sort();
	for (int i = 0; i < existingIds->Count; i++)
	{
		if (existingIds[i] != nextId)
		{
			break;
		}
		nextId++;
	}
	objProducto->SetId(nextId);
}
//Para el menu
List<PlatoBebidaMenu^>^ productoController::listarMenu()
{
List<PlatoBebidaMenu^>^ listaMenu = gcnew List<PlatoBebidaMenu^>();
	array<String^>^ lineas = File::ReadAllLines("menuDelDia.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaMenu in lineas) {
		array<String^>^ datos = lineaMenu->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		double Precio = Convert::ToDouble(datos[2]);
		int Tipo = Convert::ToInt32(datos[3]);
		PlatoBebidaMenu^ objPlatoBebidaMenu = gcnew PlatoBebidaMenu(Id, Nombre, Precio, Tipo);
		listaMenu->Add(objPlatoBebidaMenu);
	}
	return listaMenu;
}
void productoController::escribirMenu(List<PlatoBebidaMenu^>^ listaMenu)
{
array<String^>^ lineasArchivo = gcnew array<String^>(listaMenu->Count);
	for (int i = 0; i < listaMenu->Count; i++) {
		PlatoBebidaMenu^ ObjPlatoBebida = listaMenu[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";" + ObjPlatoBebida->GetNombre() + ";" + ObjPlatoBebida->GetPrecio() + ";" + ObjPlatoBebida->GetTipo();
	}
	File::WriteAllLines("menuDelDia.txt", lineasArchivo);
}
int productoController::existeProductoMenuxId(int id)
{
	List<PlatoBebidaMenu^>^ listaMenu = listarMenu();
	int existe = 0;
	for (int i = 0; i < listaMenu->Count; i++) {
		if (listaMenu[i]->GetId() == id) {
			existe = 1;
			break;
		}
	}
	return existe;
}
void productoController::addProductToDailyMenu(PlatoBebidaMenu^ obj)
{
	List<PlatoBebidaMenu^>^ listaMenu = listarMenu();
	listaMenu->Add(obj);
	escribirMenu(listaMenu);
}
void productoController::removeDailyMenuProduct(int id)
{
	List<PlatoBebidaMenu^>^ listaMenu = listarMenu();
	for (int i = 0; i < listaMenu->Count; i++) {
		if (listaMenu[i]->GetId() == id) {
			listaMenu->RemoveAt(i);
			break;
		}
	}
	escribirMenu(listaMenu);
}
void productoController::generarArchivosMenu()
{
	List<PlatoBebidaMenu^>^ listaMenu = listarMenu();
	List<PlatoBebidaMenu^>^ listaComidas = gcnew List<PlatoBebidaMenu^>();
	List<PlatoBebidaMenu^>^ listaBebidas = gcnew List<PlatoBebidaMenu^>();
	for (int i = 0; i < listaMenu->Count; i++) {
		if (listaMenu[i]->GetTipo() == 2) {
			listaComidas->Add(listaMenu[i]);
		}
		else if (listaMenu[i]->GetTipo() == 1) {
			listaBebidas->Add(listaMenu[i]);
		}
	}
	array<String^>^ lineasArchivo = gcnew array<String^>(listaComidas->Count);
	for (int i = 0; i < listaComidas->Count; i++) {
		PlatoBebidaMenu^ ObjPlatoBebida = listaComidas[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";" + ObjPlatoBebida->GetNombre() + ";" + ObjPlatoBebida->GetPrecio() + ";" + ObjPlatoBebida->GetTipo();
	}
	File::WriteAllLines("Platos.txt", lineasArchivo);
	array<String^>^ lineasArchivo2 = gcnew array<String^>(listaBebidas->Count);
	for (int i = 0; i < listaBebidas->Count; i++) {
		PlatoBebidaMenu^ ObjPlatoBebida = listaBebidas[i];
		lineasArchivo2[i] = ObjPlatoBebida->GetId() + ";" + ObjPlatoBebida->GetNombre() + ";" + ObjPlatoBebida->GetPrecio() + ";" + ObjPlatoBebida->GetTipo();
	}
	File::WriteAllLines("Bebidas.txt", lineasArchivo2);
}