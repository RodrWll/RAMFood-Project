namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class UsuarioController {
	public:
		UsuarioController();
		List<Usuario^>^ ObtenerInfoUsuario();
		List<Usuario^>^ ListaUsuarios = gcnew List<Usuario^>();
		void escribirArchivo(List<Usuario^>^ ListaUsuarios);
		void leerArchivo();
		void AddUsuario(Usuario^);
		void registrarUsuario(Usuario^);
		void deleteUsuario(int Id);
		void UpdateUsuario(Usuario^);
		Usuario^ QueryUsuarioById(int Id);
		List<Usuario^>^ BuscarUsuarioPorNombre(String^ Nombre);
		Usuario^ QueryUsuarioByNombre(String^ Nombre);
		void generarContrasenha(Usuario^);
		void generarCorreo(Usuario^);
	};
}