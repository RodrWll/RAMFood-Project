#pragma once


#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
using namespace System::Data::SqlClient;
namespace RAMFoodController {
	public ref class OrdenController {	
	private:
		SqlConnection^ objConexion; /*Un atributo que nos permita hacer la conexion con la Base de Datos*/
	public:
		OrdenController();		
		/*
		//Metodos creados para poder los pedidos por fechas		
		OrdenMesa^ BuscarOrdenxDia(String^ Fecha);
		OrdenMesa^ BuscarOrdenxMes(String^ Fecha);
		//OrdenMesa^ BuscarOrdenxAnho(String^ Fecha);
		//Metodos creados para poder buscar los pedidos por Id
		OrdenMesa^ BuscarxId(int id);
		List <OrdenMesa^>^ BuscarOrdenes();
		//Método que nos ayuda a hallar la cuenta
		int CalCuenta();
		//Método que nos ayuda cambiar el estado del producto Pedido
		
		*/
		//metodos para abrir coneccion con el servidor de datos
		void abrirConexion();
		void cerrarConexion();

		void actualizarEstado(int idPedido, int idProductoPedido, int estado);
		void actualizarEstadoDelProductoPedido(int idProductoPedido, int estado);

		List<ProductoPedido^>^ ReadOrderDetailsFromFile(String^ filePath, int orderId);
		List<OrdenMesa^>^ ReadOrdersFromFile(String^ filePath);
		List<OrdenMesa^>^ ReadAllOrdersFromFile(String^ filePath);

		List<ProductoPedido^>^ buscarListaPlatosPedidos(String^ filePath,String^ usuario); //Esta funcion te devuelve una listaProductosPedidosActivos (Platos): es decir que no hayan sido pagados todavia
		List<ProductoPedido^>^ buscarListaBebidasPedidos(String^ filePath, String^ usuario);//Esta funcion te devuelve una listaProductosPedidosActivos (Bebidas): es decir que no hayan sido pagados todavia
		List<String^>^ OrdenController::buscarListaIdsPlatos(String^ filePath);
		List<String^>^ OrdenController::buscarListaIdsBebidas(String^ filePath);
		List<String^>^ OrdenController::ReadOrderIds(String^ filePath, int orderId);
		Producto^ buscarObjProducto(int idPedido,int idProductoPedido);
		ProductoPedido^ OrdenController::buscarProductoPedidoxId(int idPedido, int idProductoPedido);
		ProductoPedido^ OrdenController::queryRequestedProductById(int idProductoPedido);

		OrdenMesa^ ReadOrderDetailsxNroMesa(int mesa);
		String^ ReadEstadoDelProductoPedido(int estado);
		String^ ReadTipoDeProductoPedido(int tipo);

	};
}