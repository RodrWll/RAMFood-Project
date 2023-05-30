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
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//pedidomesa1Asistente.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar la informacion de cada linea*/
	for each (String ^ lineaPedido in lineas) {
		array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
		int id = Convert::ToInt16(datos[0]);
		Producto^ productoEncontrado = objProductoController->buscarProductoxId(id);
		if(productoEncontrado->GetTipo() == 2){
			int cantidad = Convert::ToInt32(datos[1]);
			Plato^ objPlato = gcnew Plato(productoEncontrado->GetNombre(), productoEncontrado->GetPrecio(), productoEncontrado->GetId(), cantidad, productoEncontrado->GetId());
			listaPlatosEncontrados->Add(objPlato);
		}
	}
	return listaPlatosEncontrados;
}

List<Bebida^>^ AsistenteController::listarBebidasPedidosMesa()
{
	productoController^ objProductoController = gcnew productoController();
	List<Bebida^>^ listabebidasEncontradas = gcnew List<Bebida^>();
	array<String^>^ lineas = File::ReadAllLines("Recursos//Asistente//pedidomesa1Asistente.txt");
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
