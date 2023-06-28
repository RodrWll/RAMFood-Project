#pragma once
#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class ReporteController {
	private:
		//List<Logueo^>^ Logueos;
		SqlConnection^ objConexion;
	public:
		ReporteController();
		void obtenerTopPlatos(List<String^>^ listaId, List<String^>^ listaValor, String^ fechaInicio, String^ FechaFin);
		void obtenerTopBebidas(List<String^>^ listaId, List<String^>^ listaValor, String^ fechaInicio, String^ FechaFin);
		void obtenerTopPlatosTxt(List<String^>^ listaId, List<String^>^ listaValor);
		void obtenerVentasTotal(List<String^>^ listaFechas, List<String^>^ listaCuenta,String^ fechaInicio, String^ FechaFin);
		void obtenerVentasTotalTxt(List<String^>^ listaFechas, List<String^>^ listaCuenta);
		void conectarBD();
		void cerrarConexionBD();
	};
}