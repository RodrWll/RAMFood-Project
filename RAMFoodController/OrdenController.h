#pragma once


#pragma once
using namespace System::Collections::Generic;
using namespace RAMFoodModel;
using namespace System;
namespace RAMFoodController {
	public ref class OrdenController {
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
		//void actualizarEstado(int idProductoPedido,int estado);
		List<ProductoPedido^>^ ReadOrderDetailsFromFile(String^ filePath, int orderId);
		List<OrdenMesa^>^ ReadOrdersFromFile(String^ filePath);

		List<ProductoPedido^>^ buscarListaPlatosPedidos(String^ filePath,String^ usuario); //Esta funcion te devuelve una listaProductosPedidosActivos (Platos): es decir que no hayan sido pagados todavia

		List<ProductoPedido^>^ buscarListaBebidasPedidos(String^ filePath, String^ usuario);//Esta funcion te devuelve una listaProductosPedidosActivos (Bebidas): es decir que no hayan sido pagados todavia
	};
}