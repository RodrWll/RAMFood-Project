#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;
productoController::productoController()
{
}
List<Producto^>^ productoController::listarProductos()
{
	List<Producto^>^ listaProductos = gcnew List<Producto^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos/productos/productos.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaProducto in lineas) {
		array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
		int Id = Convert::ToInt32(datos[0]);
		String^ Nombre = datos[1];
		double Precio = Convert::ToDouble(datos[2]);
		int Tipo = Convert::ToInt32(datos[3]);
		Producto^ objPlatoBebidaMenu = gcnew Producto(Id, Nombre, Precio, Tipo);
		listaProductos->Add(objPlatoBebidaMenu);
	}
	return listaProductos;
}
void productoController::escribirProductos(List<Producto^>^ listaProductos)
{
	array<String^>^ lineasArchivo = gcnew array<String^>(listaProductos->Count);
	for (int i = 0; i < listaProductos->Count; i++) {
		Producto^ ObjPlatoBebida = listaProductos[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";" + ObjPlatoBebida->GetNombre() + ";" + ObjPlatoBebida->GetPrecio() + ";" + ObjPlatoBebida->GetTipo();
	}
	File::WriteAllLines("Recursos/productos/productos.txt", lineasArchivo);
}
void productoController::addProducto(Producto^ objProducto)
{
	List<Producto^>^ listaProductos = listarProductos();
	listaProductos->Add(objProducto);
	escribirProductos(listaProductos);
}
void productoController::updateProducto(Producto^ objProducto)
{
	List<Producto^>^ listaProductos = listarProductos();
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
List<Producto^>^ listaProductos = listarProductos();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->GetId() == id) {
			
			if(existeProductoMenuxId(listaProductos[i]->GetId()))//se elimina del menu si es que esta
			{
				removeDailyMenuProduct(listaProductos[i]->GetId());
				generarArchivosMenu();//se actualizan los archivos del menu

			}
			listaProductos->RemoveAt(i);//se elimina de la lista de productos
			break;
		}
	}
	escribirProductos(listaProductos);
}
Producto^ productoController::buscarProductoxId(int id)
{
	List<Producto^>^ listaProductos = listarProductos();
	Producto^ objProducto;
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->GetId() == id) {
			objProducto = listaProductos[i];
			break;
		}
	}
	return objProducto;
}
List<Producto^>^ productoController::buscarProductoxNombre(String^ nombre)
{
	List<Producto^>^ listaProductos = listarProductos();
	List<Producto^>^ listaProductosBuscados = gcnew List<Producto^>();
	for (int i = 0; i < listaProductos->Count; i++) {
		if (listaProductos[i]->GetNombre()->ToLower()->Contains(nombre->ToLower())) {
			listaProductosBuscados->Add(listaProductos[i]);
		}
	}
	return listaProductosBuscados;

}
List<int>^ productoController::listarIdProductos(List<Producto^>^ listaProductos)
{
	List<int>^ listaIdProductos = gcnew List<int>();
	for (int i = 0; i < listaProductos->Count; i++) {
		listaIdProductos->Add(listaProductos[i]->GetId());
	}
	return listaIdProductos;
}
void productoController::generarIdProductos(Producto^ objProducto)
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
List<Producto^>^ productoController::listarMenu()
{
List<Producto^>^ listaMenu = gcnew List<Producto^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos/productos/menuDelDia.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaMenu in lineas) {
		array<String^>^ datos = lineaMenu->Split(separadores->ToCharArray());
		int id = Convert::ToInt32(datos[0]);
		Producto^ productoEncontrado = buscarProductoxId(id);
		listaMenu->Add(productoEncontrado);
	}
	return listaMenu;
}
void productoController::escribirMenu(List<Producto^>^ listaMenu)
{
array<String^>^ lineasArchivo = gcnew array<String^>(listaMenu->Count);
	for (int i = 0; i < listaMenu->Count; i++) {
		Producto^ ObjPlatoBebida = listaMenu[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";";
	}
	File::WriteAllLines("Recursos/productos/menuDelDia.txt", lineasArchivo);
}
int productoController::existeProductoMenuxId(int id)
{
	List<Producto^>^ listaMenu = listarMenu();
	int existe = 0;
	for (int i = 0; i < listaMenu->Count; i++) {
		if (listaMenu[i]->GetId() == id) {
			existe = 1;
			break;
		}
	}
	return existe;
}
void productoController::addProductToDailyMenu(Producto^ obj)
{
	List<Producto^>^ listaMenu = listarMenu();
	listaMenu->Add(obj);
	escribirMenu(listaMenu);
}
void productoController::removeDailyMenuProduct(int id)
{
	List<Producto^>^ listaMenu = listarMenu();
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
	List<Producto^>^ listaMenu = listarMenu();
	List<Producto^>^ listaComidas = gcnew List<Producto^>();
	List<Producto^>^ listaBebidas = gcnew List<Producto^>();
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
		Producto^ ObjPlatoBebida = listaComidas[i];
		lineasArchivo[i] = ObjPlatoBebida->GetId() + ";";
	}
	File::WriteAllLines("Recursos/productos/Platos.txt", lineasArchivo);
	array<String^>^ lineasArchivo2 = gcnew array<String^>(listaBebidas->Count);
	for (int i = 0; i < listaBebidas->Count; i++) {
		Producto^ ObjPlatoBebida = listaBebidas[i];
		lineasArchivo2[i] = ObjPlatoBebida->GetId() + ";";
	}
	File::WriteAllLines("Recursos/productos/Bebidas.txt", lineasArchivo2);
}

/*nuevo*/

int productoController::buscarIdxNombre(String^ nombre) {
	
	int id = 0;
	array<String^>^ listaLeida = File::ReadAllLines("Recursos/productos/productos.txt");

	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	productoController^ objProductosController = gcnew productoController();
	for each (String ^ linea in listaLeida) {
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		if (datos[1]->Contains(nombre)) {
			return Convert::ToInt32(datos[0]);
		}
	}
	/*si retorna 0, queire decir que no encuentra nada*/
	return id;
};