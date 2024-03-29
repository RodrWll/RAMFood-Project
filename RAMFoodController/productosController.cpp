#include "productosController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;
productoController::productoController()
{
	this->objConexion = gcnew SqlConnection();
}
void productoController::abrirConexion()
{
	//Verificar si la conexion ya está abierta
	if (this->objConexion->State == System::Data::ConnectionState::Open)
	{
		return;
	}

	this->objConexion->ConnectionString = "Server=200.16.7.140;DataBase=a20202021;User Id=a20202021;Password=WbMpwW8j";
	this->objConexion->Open();
}
void productoController::cerrarConexion()
{
	//verificar si la conexion ya está cerrada
	if (this->objConexion->State == System::Data::ConnectionState::Closed)
	{
		return;
	}
	this->objConexion->Close();
}
List<Producto^>^ productoController::listarProductos()
{
	List<Producto^>^ listaProductos = gcnew List<Producto^>();
	List<Producto^>^ listaProductosBD = gcnew List<Producto^>();
	abrirConexion();
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui indico que sentencia voy a ejecutar*/
	objSentencia->CommandText = "select * from Productos";
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	while (objData->Read()) 
	{
		int Id = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		double Precio = safe_cast<double>(objData[2]);	
		int Tipo = safe_cast<int>(objData[3]);
		int menu = safe_cast<int>(objData[4]);
		int status = safe_cast<int>(objData[5]);
		Producto^ objPlatoBebidaMenu = gcnew Producto(Id, Nombre, Precio, Tipo, menu, status);
		listaProductosBD->Add(objPlatoBebidaMenu);
	}
	cerrarConexion();

	return listaProductosBD;
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
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	//int id = objProducto->GetId();
	String^ nombre = " '" + objProducto->GetNombre() + "' ";
	double precio = objProducto->GetPrecio();
	int tipo = objProducto->GetTipo();
	String^ valores = nombre + ", " + Convert::ToString(precio) + ", " + Convert::ToString(tipo) + ",0, 1";
	objSentencia->CommandText = "INSERT Productos(nombreProducto,precio,tipo, menu,status ) VALUES("+valores + ")";
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
void productoController::updateProducto(Producto^ objProducto)
{
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	int id = objProducto->GetId();
	String^ nombre = "'" + objProducto->GetNombre() + "'";
	double precio = objProducto->GetPrecio();
	int tipo = objProducto->GetTipo();
	int status = objProducto->GetStatus();
	objSentencia->CommandText = "UPDATE Productos SET nombreProducto = " + nombre + ", precio = " + Convert::ToString(precio) + ", tipo = " + Convert::ToString(tipo) + ", status = " + Convert::ToString(status) + " WHERE id = " + Convert::ToString(id);
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
void productoController::deleteProducto(int id)
{
	List<Producto^>^ listaProductos = listarProductos();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "UPDATE Productos SET status = 0, menu=0 WHERE id = " + Convert::ToString(id);
	/*
	objSentencia->CommandText = "DELETE FROM Productos WHERE id = " + Convert::ToString(id);*/
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
	generarMenu();//se actualizan los archivos del menu
}
Producto^ productoController::buscarProductoxId(int id)
{
	Producto^ objProducto = nullptr;
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT * FROM Productos WHERE id = " + Convert::ToString(id);
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	if (objData->Read()) {
		int Id = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		double Precio = safe_cast<double>(objData[2]);
		int Tipo = safe_cast<int>(objData[3]);
		int menu = safe_cast<int>(objData[4]);
		int status = safe_cast<int>(objData[5]);
		objProducto = gcnew Producto(Id, Nombre, Precio, Tipo, menu, status);
	}
	cerrarConexion();
	return objProducto;
}
List<Producto^>^ productoController::buscarProductoxNombre(String^ nombre)
{
	List<Producto^>^ listaProductos = listarProductos();
	List<Producto^>^ listaProductosBuscados = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT * FROM Productos WHERE nombreProducto LIKE '%" + nombre + "%'";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	//Primero verificamos si hay datos que coincidan con la busqueda

	while (objData->Read()) {
		int Id = safe_cast<int>(objData[0]);
		String^ Nombre = safe_cast<String^>(objData[1]);
		double Precio = safe_cast<double>(objData[2]);
		int Tipo = safe_cast<int>(objData[3]);
		Producto^ objProducto = gcnew Producto(Id, Nombre, Precio, Tipo);
		listaProductosBuscados->Add(objProducto);
	}

	cerrarConexion();
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
	List<int>^ listaIds = gcnew List<int>();
	List<Producto^>^ listaMenu = gcnew List<Producto^>();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT * FROM Productos Where menu=1 AND status=1";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	
	while (objData->Read()) {
		//Solo se obtiene el id
		int Id = safe_cast<int>(objData[0]);
		listaIds->Add(Id);
		/*Producto^ productoEncontrado = buscarProductoxId(Id);
		listaMenu->Add(productoEncontrado);*/
	}
	cerrarConexion();
	
	//Ahora se obtiene la informacion de cada producto
	for (int i = 0; i < listaIds->Count; i++) {
		Producto^ productoEncontrado = buscarProductoxId(listaIds[i]);
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
	int idListaPrevia;
	//La tabla se llama ListaPreviaMenu, la cual solo contiene el id del producto
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "SELECT * FROM ListaPreviaMenu ";
	SqlDataReader^ objData = objSentencia->ExecuteReader();
	//Verificamos que id es igual a algun id de la tabla ListaPreviaMenu

	while (objData->Read()) {
		idListaPrevia = safe_cast<int>(objData[0]);
		if (idListaPrevia == id) {
			existe = 1;
			break;
		}
	}
	cerrarConexion();
	return existe;
}
void productoController::addProductToDailyMenu(Producto^ obj)
{
	List<Producto^>^ listaMenu = listarMenu();
	//Agregamos el producto a la tabla ListaPreviaMenu
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	//objSentencia->CommandText = "INSERT INTO ListaPreviaMenu VALUES (" + obj->GetId() + ")";
	objSentencia->CommandText = "UPDATE Productos SET menu=1 WHERE id = " + Convert::ToString(obj->GetId());
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
void productoController::removeDailyMenuProduct(int id)
{
	List<Producto^>^ listaMenu = listarMenu();
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	//objSentencia->CommandText = "DELETE FROM ListaPreviaMenu WHERE id = " + id;
	objSentencia->CommandText = "UPDATE Productos SET menu=0 WHERE id = " + Convert::ToString(id);
	objSentencia->ExecuteNonQuery();
	cerrarConexion();
}
void productoController::generarMenu()
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
	abrirConexion();
	SqlCommand^ objSentencia = gcnew SqlCommand();
	objSentencia->Connection = this->objConexion;
	objSentencia->CommandText = "DELETE FROM PlatosMenu";
	objSentencia->ExecuteNonQuery();
	objSentencia->CommandText = "DELETE FROM BebidasMenu";
	objSentencia->ExecuteNonQuery();
	for (int i = 0; i < listaComidas->Count; i++) {
		Producto^ ObjPlatoBebida = listaComidas[i];
		objSentencia->CommandText = "INSERT INTO PlatosMenu (Id) VALUES (" + ObjPlatoBebida->GetId() + ")";
		objSentencia->ExecuteNonQuery();
	}
	for (int i = 0; i < listaBebidas->Count; i++) {
		Producto^ ObjPlatoBebida = listaBebidas[i];
		objSentencia->CommandText = "INSERT INTO BebidasMenu (Id) VALUES (" + ObjPlatoBebida->GetId() + ")";
		objSentencia->ExecuteNonQuery();
	}
	cerrarConexion();
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

double productoController::obtenerPrecioXId(int id) {
	double precio = 0;
	abrirConexion();

	//array<String^>^ listaLeida = File::ReadAllLines("Recursos/productos/productos.txt");

	//String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	//productoController^ objProductosController = gcnew productoController();
	//for each (String ^ linea in listaLeida) {
	//	array<String^>^ datos = linea->Split(separadores->ToCharArray());
	//	if (datos[0]->Contains(Convert::ToString(id))) {
	//		return Convert::ToDouble(datos[2]);
	//	}
	//}
	///*si retorna 0, queire decir que no encuentra nada*/
	
	/*SqlCommand viene a ser el objeto que utilizare para hacer el query o sentencia para la BD*/
	SqlCommand^ objSentencia = gcnew SqlCommand();
	/*Aqui estoy indicando que mi sentencia se va a ejecutar en mi conexion de BD*/
	objSentencia->Connection = this->objConexion;
	/*Aqui indico que sentencia voy a ejecutar*/
	objSentencia->CommandText = "select precio from Productos where id="+id;
	/*Para Select siempre sera ExecuteReader*/
	/*Para select siempre va a devolver un SqlDataReader*/
	SqlDataReader^ objData = objSentencia->ExecuteReader();

	//array<String^>^ lineas = File::ReadAllLines("Recursos/productos/productos.txt");
	//String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	//for each (String ^ lineaProducto in lineas) {
	//	array<String^>^ datos = lineaProducto->Split(separadores->ToCharArray());
	//	int Id = Convert::ToInt32(datos[0]);
	//	String^ Nombre = datos[1];
	//	double Precio = Convert::ToDouble(datos[2]);
	//	int Tipo = Convert::ToInt32(datos[3]);
	//	Producto^ objPlatoBebidaMenu = gcnew Producto(Id, Nombre, Precio, Tipo);
	//	listaProductos->Add(objPlatoBebidaMenu);
	//}
	

	while (objData->Read())
	{
		precio = safe_cast<double>(objData[0]);

	}
	cerrarConexion();
	
	return precio;

};