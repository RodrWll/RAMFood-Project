#pragma once

namespace RAMFoodController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	public ref class LogueoController {
	private:
		//List<Logueo^>^ Logueos;
	public:
		LogueoController();
		List<array<String^>^>^ LogueoController::leerArchivo();
		void AgregarUsuario(String^ CorreoUsuario, String^ Contrasenha);
		bool VerificarCredenciales(String^ CorreoUsuario, String^ Contrasenha);
	};
}