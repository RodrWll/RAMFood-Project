#include "AsistenteController.h"
#include "productosController.h"

using namespace RAMFoodController;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;

AsistenteController::AsistenteController(){

}

List<Asistente^>^ AsistenteController::leerArchivoMesa1() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Asistente^>^ listaCarrerasEncontradas = gcnew List<Asistente^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//PruebaPedidomesa1.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		String^ nombre = datos[0];
		int cantidad = Convert::ToInt32(datos[1]);
		double precioUnidad = Convert::ToDouble(datos[2]);
		Asistente^ objAsistente = gcnew Asistente(1,nombre, cantidad, precioUnidad);
		listaCarrerasEncontradas->Add(objAsistente);
	}
	return listaCarrerasEncontradas;
}

List<Asistente^>^ AsistenteController::leerArchivoMesa2() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Asistente^>^ listaCarrerasEncontradas = gcnew List<Asistente^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//PruebaPedidomesa2.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		String^ nombre = datos[0];
		int cantidad = Convert::ToInt32(datos[1]);
		double precioUnidad = Convert::ToDouble(datos[2]);
		Asistente^ objAsistente = gcnew Asistente(2, nombre, cantidad, precioUnidad);
		listaCarrerasEncontradas->Add(objAsistente);
	}
	return listaCarrerasEncontradas;
}

List<Asistente^>^ AsistenteController::leerArchivoMesa3() {
	/*En esta lista vamos a colocar la información de las carreras que encontremos en el archivo de texto*/
	List<Asistente^>^ listaCarrerasEncontradas = gcnew List<Asistente^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//PruebaPedidomesa2.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaCarrera in lineas) {
		array<String^>^ datos = lineaCarrera->Split(separadores->ToCharArray());
		String^ nombre = datos[0];
		int cantidad = Convert::ToInt32(datos[1]);
		double precioUnidad = Convert::ToDouble(datos[2]);
		Asistente^ objAsistente = gcnew Asistente(3, nombre, cantidad, precioUnidad);
		listaCarrerasEncontradas->Add(objAsistente);
	}
	return listaCarrerasEncontradas;
}

List<Plato^>^ AsistenteController::listarPlatosPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//pedidomesa1Asistente.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		PlatoBebidaMenu^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if(productoEncontrado->GetTipo() == 2){
			int cantidad = Convert::ToInt32(datos[1]);
			Plato^ objPlato = gcnew Plato(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), productoEncontrado->GetId(), cantidad, productoEncontrado->GetId());
			listaPlatosEncontrados->Add(objPlato);
		}
	}
	return listaPlatosEncontrados;
}

List<Bebidas^>^ AsistenteController::listarBebidasPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Bebidas^>^ listabebidasEncontradas = gcnew List<Bebidas^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//pedidomesa1Asistente.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		PlatoBebidaMenu^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if (productoEncontrado->GetTipo() == 1) {
			int cantidad = Convert::ToInt32(datos[1]);
			Bebidas^ objBebidas = gcnew Bebidas(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), productoEncontrado->GetId(), cantidad,1, productoEncontrado->GetId());
			listabebidasEncontradas->Add(objBebidas);
		}
	}
	return listabebidasEncontradas;
}

void AsistenteController::ActualizarAsistencia() {

}
