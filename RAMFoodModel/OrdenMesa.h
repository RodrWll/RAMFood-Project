#pragma once
#include "ProductoPedido.h"
using namespace System::Collections::Generic;
using namespace System;

namespace RAMFoodModel {
	public ref class OrdenMesa
	{
	public:
		OrdenMesa();
		OrdenMesa(int id, int Mesa,int EstadoOrden, List<ProductoPedido^>^ listaProductosPedidos,String^ Fecha);
		OrdenMesa(int id, int Mesa, int EstadoOrden, double cuenta, String^ fecha);
		void SetId(int Id);
		int GetId();
		void SetMesa(int numeroMesa);
		int GetMesa();
		String^ GetFecha();
		void SetFecha(String^ fecha);
		void SetEstado(int EstadoOrden);
		int GetEstado();
		void SetCuenta(double numero);
		double GetCuenta();
		void SetListaProductosPedidos(List<ProductoPedido^>^ listaProductosPedidos);
		List<ProductoPedido^>^ GetListaProductosPedidos();

		//si el estado=1: significa que la orden no ha sido pagada
		//si el estado=2: significa que la orden ya ha sido pagada

	private:
		int id;		
		int mesa;
		List<ProductoPedido^>^ listaProductosPedidos;
		String^ fecha; //Formato dd/mm/aa	
		int Estado;
		double cuenta;

	};

};