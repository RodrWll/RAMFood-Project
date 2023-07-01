#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class LogueoController {
	private:
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/

		//List<Logueo^>^ Logueos;
	public:
		LogueoController();
		void abrirConexion();
		void cerrarConexion();
		List<array<String^>^>^ LogueoController::leerArchivo();
		bool VerificarCredenciales(String^ CorreoUsuario, String^ Contrasenha);
		Usuario^ ObtenerUsuario(String^ CorreoUsuario, String^ Contrasenha);
	};
}