namespace RAMFoodController {
	using namespace System::Collections::Generic;
	using namespace RAMFoodModel;
	using namespace System;
	public ref class productoController
	{
	public:
		productoController();
		List<PlatoBebidaMenu^>^ listarProductos();
		void escribirProductos(List<PlatoBebidaMenu^>^ listaProductos);
		void addProducto(PlatoBebidaMenu^ obj);
		void updateProducto(PlatoBebidaMenu^ obj);
		void deleteProducto(int id);
		PlatoBebidaMenu^ buscarProductoxId(int id);
		List<PlatoBebidaMenu^>^ buscarProductoxNombre(String^ nombre);
		List<int>^ listarIdProductos(List<PlatoBebidaMenu^>^ listaProductos);
		void generarIdProductos(PlatoBebidaMenu^ objProducto);
		//Para el menu
		List<PlatoBebidaMenu^>^ listarMenu();
		void escribirMenu (List<PlatoBebidaMenu^>^ listaMenu);
		void addProductToDailyMenu(PlatoBebidaMenu^ obj);
		void removeDailyMenuProduct(int id);
	};
}