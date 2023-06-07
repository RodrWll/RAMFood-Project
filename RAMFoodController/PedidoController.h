#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
namespace RAMFoodController {
	public ref class PedidoController{
	public:
		PedidoController();
		
		void escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, List<Plato^>^ lPlatoExt, List<Bebida^>^ lBebidasExt,OrdenMesa^ objOrdenMesa);
		List<Plato^>^ LeerPedidosPlatoFinal(String^ nombre_archivo);
		List<Bebida^>^ LeerPedidosBebidasFinal(String^ nombre_archivo);
		List<Plato^>^ LeerPedidosPlato(String^ nombre_archivo);
		List<Bebida^>^ LeerPedidosBebidas(String^ nombre_archivo);
		void guardarPedido(OrdenMesa^ objOrdenMesa);
		/*El m�todo de abajo vacia los archivos y los guarda a otra carpeta donde se alamcenan los pedidos*/
		void CuentaPagada(OrdenMesa^ mesa);
		/*m�todos migrados de bebidasController*/
		List<Bebida^>^ obtenerInfoBebida();
		List<Plato^>^ obtenerInfoPlato();
		void escribirPedidos(List<Plato^>^ listaPlatosMesa, List<Bebida^>^ listaBebidasMesa, String^ nombre_archivo,
		int cantidad_bebida[], int cantidad_platos[]);
		void escribirArchivo(String^ nombre_archivo, int valor);
		array<String^>^ leerArchivo(String^ nombre_archivo);
		int esNuevoPedido(String^ nombre_archivo);
		//Funciones que usaran Franco y Misael
		void ListarPedidosMesa(int numeroDeMesaALeer, List<Plato^>^ listaPlatos, List<Bebida^>^ listaBebidas);
		void ModificarEstadoPedido(int idProducto, int cantidadPedida, int estadoDelPedido, int numeroDeMesaALeer);


	};
}