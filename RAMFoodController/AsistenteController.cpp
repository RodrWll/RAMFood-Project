#include "AsistenteController.h"

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

void AsistenteController::ActualizarAsistencia() {

}
