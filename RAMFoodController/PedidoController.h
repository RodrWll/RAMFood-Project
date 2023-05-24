#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
namespace RAMFoodController {
	public ref class PedidoController{
	public:
		PedidoController();
		
	
		void escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebidas^>^ lBebidas, int numMesa);
		void escribirArchivoFormatoAsistente(List<Plato^>^ lPlato, List<Bebidas^>^ lBebidas, int numMesa);
		List<Plato^>^ LeerPedidosPlatoFinal(String^ nombre_archivo);
		List<Bebidas^>^ LeerPedidosBebidasFinal(String^ nombre_archivo);
		List<Plato^>^ LeerPedidosPlato(String^ nombre_archivo);
		List<Bebidas^>^ LeerPedidosBebidas(String^ nombre_archivo);
		void guardarPedido(int numeroMesa);
		/*El m�todo de abajo vacia los archivos y los guarda a otra carpeta donde se alamcenan los pedidos*/
		void CuentaPagada();
		/*m�todos migrados de bebidasController*/
		List<Bebidas^>^ obtenerInfoBebida();
		List<Plato^>^ obtenerInfoPlato();
		void escribirPedidos(List<Plato^>^ listaPlatosMesa, List<Bebidas^>^ listaBebidasMesa, String^ nombre_archivo,
		int cantidad_bebida[], int cantidad_platos[]);
		void escribirArchivo(String^ nombre_archivo, int valor);
		array<String^>^ leerArchivo(String^ nombre_archivo);

		int esNuevoPedido(String^ nombre_archivo);
		
	};
}