#include "ReporteController.h"
#include "PedidoController.h"
using namespace RAMFoodController;
using namespace RAMFoodModel;

using namespace System::Collections::Generic;
using namespace System;
using namespace System::IO;

ReporteController::ReporteController() {};

void ReporteController::obtenerTopPlatos(List<String^>^ listaId, List<String^>^ listaValor) {
	PedidoController^ objController = gcnew PedidoController();
	List<Plato^>^ listaPlatos = gcnew List<Plato^>();
	listaPlatos = objController->obtenerInfoPlato();
	
	array<String^>^ listaPlatosLeidos = File::ReadAllLines("NewComensal/DetallePedidoMesaGeneral.txt");

	String^ separadores = ";";

	for each (Plato ^ platoI in listaPlatos)
	{
		int id = platoI->GetId();
		int conteo = 0;
		listaId->Add(Convert::ToString(id));
		for each (String ^ lineaPedido in listaPlatosLeidos)
		{
			array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
			int idLeido = Convert::ToInt32(datos[2]);
			if (id == idLeido) {
				conteo = conteo + Convert::ToInt32(datos[3]);
			}

		}
		listaValor->Add(Convert::ToString(conteo));

	};
	//ordenar lista de valor
	int i, j, aux;
	String^ auxiliarId;
	for (i = 0; i < listaValor->Count; i++) {
		for (j = 0; j < listaValor->Count; j++) {
			int valorJ = Convert::ToInt32(listaValor[j]);
			int valorJsgte = 0;
			if (j <listaValor->Count-1) {
				valorJsgte = Convert::ToInt32(listaValor[j + 1]);
			}
			if (j<listaValor->Count - 1 && valorJ > valorJsgte) {
				//id
				auxiliarId = listaId[j];
				listaId[j] = listaId[j + 1];
				listaId[j + 1] = auxiliarId;
				//valor
				aux = valorJ;
				listaValor[j] = listaValor[j + 1];
				listaValor[j + 1] = Convert::ToString(aux);
			}
		}
	}


};

void ReporteController::obtenerTopBebidas(List<String^>^ listaId, List<String^>^ listaValor) {
	PedidoController^ objController = gcnew PedidoController();
	List<Bebida^>^ listaBebida = gcnew List<Bebida^>();
	listaBebida = objController->obtenerInfoBebida();

	array<String^>^ listaPlatosLeidos = File::ReadAllLines("NewComensal/DetallePedidoMesaGeneral.txt");

	String^ separadores = ";";

	for each (Bebida^ platoI in listaBebida)
	{
		int id = platoI->GetId();
		int conteo = 0;
		listaId->Add(Convert::ToString(id));
		for each (String ^ lineaPedido in listaPlatosLeidos)
		{
			array<String^>^ datos = lineaPedido->Split(separadores->ToCharArray());
			int idLeido = Convert::ToInt32(datos[2]);
			if (id == idLeido) {
				conteo = conteo + Convert::ToInt32(datos[3]);
			}

		}
		listaValor->Add(Convert::ToString(conteo));

	};
	//ordenar lista de valor
	int i, j, aux;
	String^ auxiliarId;
	for (i = 0; i < listaValor->Count; i++) {
		for (j = 0; j < listaValor->Count; j++) {
			int valorJ = Convert::ToInt32(listaValor[j]);
			int valorJsgte=0;
			if (j < listaValor->Count-1) {
				valorJsgte = Convert::ToInt32(listaValor[j + 1]);
			}
			
			if (j<listaValor->Count - 1 && valorJ > valorJsgte) {
				//id
				auxiliarId = listaId[j];
				listaId[j] = listaId[j + 1];
				listaId[j + 1] = auxiliarId;
				//valor
				aux = valorJ;
				listaValor[j] = listaValor[j + 1];
				listaValor[j + 1] = Convert::ToString(aux);
			}
		}
	}


};
void ReporteController::obtenerVentasTotal(List<String^>^ listaFechas, List<String^>^ listaCuenta) {
	array<String^>^ lineasLeidas = File::ReadAllLines("NewComensal//pedidoMesaGeneral.txt");
	String^ separador = ";";
	
	for each (String^ linea in lineasLeidas)
	{
		int agregar = 1;
		array<String^>^ datos = linea->Split(separador->ToCharArray());
		//ver si la nueva fecha es nueva, si es asi agregarla
		for each (String^ fechas in listaFechas)
		{
			if (fechas->Contains(datos[4])) {
				agregar = 0;
				break;
			}
		}
		if (agregar) {
			listaFechas->Add(datos[4]);
		}

	}
	for each (String^ fechaRegistrada in listaFechas)
	{
		int monto = 0;
		for each (String^ linea in lineasLeidas) {
			array<String^>^ datos = linea->Split(separador->ToCharArray());
			
			if (datos[4]->Contains(fechaRegistrada)) {
				monto = monto + Convert::ToInt32(datos[3]);
						
			}
		
		}
		listaCuenta->Add(Convert::ToString(monto));

	}

};