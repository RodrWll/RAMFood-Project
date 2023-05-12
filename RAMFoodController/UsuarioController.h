#pragma once

namespace RAMFoodController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	public ref class UsuarioController {
		private:
			List<Usuario^>^ usuarios;
		public:
			UsuarioController();
			void AgregarUsuario(String^ nombreUsuario, String^ contrasena);
			bool VerificarCredenciales(String^ nombreUsuario, String^ contrasena);
	};
}