#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
namespace RAMFoodController {
	public ref class ChefController {
	public:
		ChefController();
		/*métodos migrados de bebidasController*/
		void escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebidas^>^ lBebidas, int numMesa);
		List<Bebidas^>^ LeerPedidosBebidasChef(String^ nombre_archivo);
		List<Plato^>^ LeerPedidosPlatoChef(String^ nombre_archivo);
		void EliminarPedidoxNombre(String^ Producto);
		int LeerNroDeMesa(String^ nombre_archivo);
	};
}