namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	using namespace System::Data::SqlClient;
	public ref class productoController
	{
	private: 

		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		void abrirConexion();
		void cerrarConexion();
		productoController();
		List<Producto^>^ listarProductos();
		void abrirConexion();
		void cerrarConexion();
		void escribirProductos(List<Producto^>^ listaProductos);
		void addProducto(Producto^ obj);
		void updateProducto(Producto^ obj);
		void deleteProducto(int id);
		Producto^ buscarProductoxId(int id);
		List<Producto^>^ buscarProductoxNombre(String^ nombre);
		List<int>^ listarIdProductos(List<Producto^>^ listaProductos);
		double obtenerPrecioXId(int id);
		void generarIdProductos(Producto^ objProducto);
		//Para el menu
		List<Producto^>^ listarMenu();
		void escribirMenu (List<Producto^>^ listaMenu);
		//Para prevenir que se agregue un plato ya agregado
		int existeProductoMenuxId(int id);
		void addProductToDailyMenu(Producto^ obj);
		void removeDailyMenuProduct(int id);
		void generarMenu();

		/*nuevo*/
		int buscarIdxNombre(String^ nombre);
	};
}