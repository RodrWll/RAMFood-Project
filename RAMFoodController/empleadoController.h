namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class UsuarioController {
	public:
		UsuarioController();
		List<Usuario^>^ ObtenerInfoUsuario();
		void escribirArchivo(List<Usuario^>^ ListaUsuarios);
		List<Usuario^>^ leerArchivo();
		void AddUsuario(Usuario^ objUsuario);
		void deleteUsuario(int Id);
		void UpdateUsuario(Usuario^ UsuarioModificar);
		Usuario^ QueryUsuarioById(int Id);
		List<Usuario^>^ QueryUsuarioByNombre(String^ Nombre);
		List<Usuario^>^ QueryUsuarioByApellido(String^ Apellido);
		void generarContrasenha(Usuario^ objUsuario);
		void generarCorreo(Usuario^ objUsuario);
		List<Usuario^>^ QueryUsuarioByTipo(int Tipo);
		List<Usuario^>^ QuerryUsuarioByNombrexTipo(String^ Nombre, int Tipo);
	};
}