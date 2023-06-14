#pragma once
#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class ReporteController {
	private:
		//List<Logueo^>^ Logueos;
	public:
		ReporteController();
		void obtenerTopPlatos(List<String^>^ listaId, List<String^>^ listaValor);
		void obtenerTopBebidas(List<String^>^ listaId, List<String^>^ listaValor);
		void obtenerVentasTotal(List<String^>^ listaFechas, List<String^>^ listaCuenta);
	};
}