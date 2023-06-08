#include "AsistenteController.h"
#include "productosController.h"

using namespace RAMFoodController;
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;

AsistenteController::AsistenteController(){

}


List<Plato^>^ AsistenteController::listarPlatosPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Plato^>^ listaPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//pedidomesa1.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		Producto^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if(productoEncontrado->GetTipo() == 2){
			int cantidad = Convert::ToInt32(datos[1]);
			Plato^ objPlato = gcnew Plato(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), cantidad, productoEncontrado->GetId());
			listaPlatosEncontrados->Add(objPlato);
		}
	}
	return listaPlatosEncontrados;
}

List<Bebida^>^ AsistenteController::listarBebidasPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Bebida^>^ listabebidasEncontradas = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//pedidomesa1.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		Producto^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if (productoEncontrado->GetTipo() == 1) {
			int cantidad = Convert::ToInt32(datos[1]);
			Bebida^ objBebidas = gcnew Bebida(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), cantidad, productoEncontrado->GetId());
			listabebidasEncontradas->Add(objBebidas);
		}
	}
	return listabebidasEncontradas;
}

String^ AsistenteController::LeerArchivoEstadoAsistencia(int numeroMesa) {
	String^ direccion = "asistenciamesa" + Convert::ToString(numeroMesa) + ".txt";
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	String^ estado = lineas[0];
	return estado;
}

String^ AsistenteController::LeerArchivoEstadoCobranza(int numeroMesa) {
	String^ direccion = "cobranzamesa" + Convert::ToString(numeroMesa) + ".txt";
	array<String^>^ lineas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
	String^ estado = lineas[0];
	return estado;
}

void AsistenteController::ModificarEstadoAsistencia(int numeroDeMesaALeer, int estadoAsis) {
	String^ direccion = "asistenciamesa" + Convert::ToString(numeroDeMesaALeer) + ".txt";
	array<String^>^ lineasLeidas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
	String^ separadores = ";";/*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	List<String^>^ lineasEscribir = gcnew List<String^>();
	for each (String ^ linea in lineasLeidas)
	{
		array<String^>^ datos = linea->Split(separadores->ToCharArray());
		int estado = Convert::ToInt32(datos[0]);
		estado = estadoAsis;
		if (estadoAsis == 0) {
			datos[0] = Convert::ToString(1);
		}
		else {
			datos[0] = Convert::ToString(0);
		}
		String^ linea = datos[0];
		lineasEscribir->Add(linea);
	}
	File::WriteAllLines("Recursos//AsistenteChef//" + direccion, lineasEscribir);
};

void AsistenteController::ModificarEstadoCobranza(int numeroDeMesaALeer, int estadoCob) {
	String^ direccion = "cobranzamesa" + Convert::ToString(numeroDeMesaALeer) + ".txt";
	array<String^>^ lineasLeidas = File::ReadAllLines("Recursos//AsistenteChef//" + direccion);
	List<String^>^ lineasEscribir = gcnew List<String^>();
	for each (String ^ linea in lineasLeidas)
	{
		array<String^>^ datos = linea->Split(';');
		int estado = Convert::ToInt32(datos[0]);
		estado = estadoCob;
		if (estadoCob == 0) {
			datos[0] = Convert::ToString(1);
		}
		else {
			datos[0] = Convert::ToString(0);
		}
		String^ linea = datos[0];
		lineasEscribir->Add(linea);
	}
	File::WriteAllLines("Recursos//AsistenteChef//" + direccion, lineasEscribir);
};

