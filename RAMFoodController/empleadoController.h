namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class empleadoController {
	public:
		empleadoController();
		void escribirArchivo(List<Usuario^>^ ListaUsuarios);
		List<Usuario^>^ leerArchivo();
		void AddUsuario(Usuario^ objUsuario);
		void deleteUsuario(int Id);
		void UpdateUsuario(Usuario^ UsuarioModificar);
		Usuario^ QueryUsuarioById(int Id);
		List<Usuario^>^ QueryUsuarioByNombre(String^ Nombre);
		void generarContrasenha(Usuario^ objUsuario);
		String^ generarCorreo(String^ apellido1, String^ apellido2);
		void generarId(Usuario^ objUsuario);
		List<Usuario^>^ QueryUsuarioByTipo(int Rol);
		List<Usuario^>^ QuerryUsuarioByNombrexRol(String^ Nombre, int Rol);
		List<int>^ ListaIdUsuarios(List<Usuario^>^ ListaUsuarios);
		int VerificaExistenciaUsuario(int Id );
	};
}