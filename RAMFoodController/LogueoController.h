#pragma once

namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class LogueoController {
	private:
		//List<Logueo^>^ Logueos;
	public:
		LogueoController();
		List<array<String^>^>^ LogueoController::leerArchivo();
		bool VerificarCredenciales(String^ CorreoUsuario, String^ Contrasenha);
		Usuario^ ObtenerUsuario(String^ CorreoUsuario, String^ Contrasenha);
	};
}