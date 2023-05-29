#include "ChefController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;
using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;


ChefController::ChefController() {};


/*Funciones para leer los archivos del chef*/
List<Plato^>^ ChefController::LeerPedidosPlatoChef(String^ nombre_archivo) {
	/*Leyendo lineas del archivo*/
	List<Plato^>^ LPlatosEncontrados = gcnew List<Plato^>();
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);

	String^ separador = ";";
	int key = 1;
	int activo = 0;
	for each (String ^ linea_plato in lineas) {
		array<String^>^ datos = linea_plato->Split(separador->ToCharArray());

		if (activo) {
			if (key == 1) {

				if (datos[0]->Contains("Bebida")) { key = 0; }
				else {
					String^ nombre_plato = datos[0];
					int cpedida = Convert::ToInt32(datos[1]);
					Plato^ objPlato = gcnew Plato(nombre_plato, 0, 0, cpedida, 0);
					LPlatosEncontrados->Add(objPlato);
				};

			};
		}
		if (datos[0]->Contains("Platos")) {
			activo = 1;

		};
	};
	return LPlatosEncontrados;
};
List<Bebida^>^ ChefController::LeerPedidosBebidasChef(String^ nombre_archivo) {
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
				Bebida^ objBebida = gcnew Bebida(nombre_bebida, 0, cpedida, 0, 0);
				LBebidasEncontrados->Add(objBebida);
			};
		};

	};
	return LBebidasEncontrados;
}

int ChefController::LeerNroDeMesa(String^ nombre_archivo) {
	array<String^>^ lineas = File::ReadAllLines(nombre_archivo);
	return Convert::ToInt32(lineas[0]);
}
void ChefController::escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, int numMesa) {
	int numeroLinea = 3 + lPlato->Count + lBebidas->Count;
	List<String^>^ lineasEscribir = gcnew List<String^>(numeroLinea);
	lineasEscribir->Add(Convert::ToString(numMesa));
	lineasEscribir->Add("Platos");
	for each (Plato ^ objPlato in lPlato)
	{
		String^ lineaIt = objPlato->GetNombre() + ";" + objPlato->GetCantidadPedida();
		lineasEscribir->Add(lineaIt);
	}
	lineasEscribir->Add("Bebida");
	for each (Bebida ^ objBebida in lBebidas)
	{
		String^ lineaIt = objBebida->GetNombre() + ";" + objBebida->GetCantidadPedida();
		lineasEscribir->Add(lineaIt);
	}
	File::WriteAllLines("pedidototal//pedidomesa.txt", lineasEscribir);
};

void ChefController::EliminarPedidoxNombre(String^ Producto) {
	List<Plato^>^ listaPlatos = LeerPedidosPlatoChef("pedidototal//pedidomesa.txt");
	List<Bebida^>^ LBebidasEncontrados = LeerPedidosBebidasChef("pedidototal//pedidomesa.txt");
	for (int i = 0; i < (listaPlatos->Count); i++) {
		Plato^ objPlato = listaPlatos[i];
		if (objPlato->GetNombre() == Producto) {
			listaPlatos->RemoveAt(i);
			break;
		}
	}
	for (int i = 0; i < (LBebidasEncontrados->Count); i++) {
		Bebida^ objBebida = LBebidasEncontrados[i];
		if (objBebida->GetNombre() == Producto) {
			LBebidasEncontrados->RemoveAt(i);
			break;
		}
	}
	int numMesa = this->LeerNroDeMesa("pedidototal//pedidomesa.txt");
	escribirArchivoFormatoChef(listaPlatos, LBebidasEncontrados, numMesa);
}
