#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
namespace RAMFoodController {
	public ref class ChefController {
	public:
		ChefController();
		/*m�todos migrados de bebidasController*/
		void escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, int numMesa);
		List<Bebida^>^ LeerPedidosBebidasChef(String^ nombre_archivo);
		List<Plato^>^ LeerPedidosPlatoChef(String^ nombre_archivo);
		void EliminarPedidoxNombre(String^ Producto);
		int LeerNroDeMesa(String^ nombre_archivo);
	};
}