#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
using namespace System::Data::SqlClient;
namespace RAMFoodController {
	public ref class PedidoController{

	private: 
		SqlConnection^ objConexion;

	public:
		PedidoController();
		
		void escribirArchivoFormatoChef(List<Plato^>^ lPlato, List<Bebida^>^ lBebidas, List<Plato^>^ lPlatoExt, List<Bebida^>^ lBebidasExt,OrdenMesa^ objOrdenMesa);
		List<Plato^>^ LeerPedidosPlatoFinal(int mesa);
		List<Bebida^>^ LeerPedidosBebidasFinal(int mesa);
		List<Plato^>^ LeerPedidosPlato(String^ nombre_archivo);
		List<Bebida^>^ LeerPedidosBebidas(String^ nombre_archivo);
		void guardarPedidotxt(OrdenMesa^ objOrdenMesa);
		void guardarPedido(OrdenMesa^ objOrdenMesa);
		/*El método de abajo vacia los archivos y los guarda a otra carpeta donde se alamcenan los pedidos*/
		void CuentaPagada(OrdenMesa^ mesa);
		void CuentaPagadaTxt(OrdenMesa^ mesa);
		/*métodos migrados de bebidasController*/
		List<Bebida^>^ obtenerInfoBebida();
		List<Plato^>^ obtenerInfoPlato();
		void escribirPedidos(List<Plato^>^ listaPlatosMesa, List<Bebida^>^ listaBebidasMesa, String^ nombre_archivo,
		List<String^>^ cantidad_bebida, List<String^>^ cantidad_platos);
		void escribirArchivo(String^ nombre_archivo, int valor);
		array<String^>^ leerArchivo(String^ nombre_archivo);
		int esNuevoPedido(String^ nombre_archivo);
		//Funciones que usaran Franco y Misael
		void ListarPedidosMesa(int numeroDeMesaALeer, List<Plato^>^ listaPlatos, List<Bebida^>^ listaBebidas);
		void ModificarEstadoPedido(int idProducto, int cantidadPedida, int estadoDelPedido, int numeroDeMesaALeer);
		void conectarBD();
		void cerrarConexionBD();
		List<Plato^>^ obtenerPedidoComensal(int numMesa);
		int obtenerIdPedidoGeneralxNmesa(int numMesa);
		void insertarProductosTablaDetallePedido(List<Plato^>^ lPlato, List<Bebida^>^ lBebida, OrdenMesa^ objOrdenMesa);
		List<OrdenMesa^>^ BuscarPedidoGeneralxnumMesa(int numMesa);
		void actualizarCuenta( OrdenMesa^ objOrdenMesaBD, OrdenMesa^ objOrdenMesaLocal);
		void agregarNuevoPedidoGeneral(OrdenMesa^ objOrdenMesa);

		void notificarAsistente(int nmesa, int tipoAsistencia);

		//List<Bebida^>^ obtenerPedidoDetalleBebidas(int nMesa);
		//List<Plato^>^ obtenerPedidoDetallePlato(int nMesa);
		//void actualizarCantidadPlato(OrdenMesa^ objOrdenMesa, Plato^ objPlato);
		//void actualizarCantidadBebida(OrdenMesa^ objOrdenMesa, Bebida^ objBebida);

	};
}