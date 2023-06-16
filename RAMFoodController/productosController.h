namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class productoController
	{
	public:
		productoController();
		List<Producto^>^ listarProductos();
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
		void generarArchivosMenu();

		/*nuevo*/
		int buscarIdxNombre(String^ nombre);
	};
}