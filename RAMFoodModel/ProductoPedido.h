#pragma once
#include "Producto.h"

using namespace System;
namespace RAMFoodModel {
	public ref class ProductoPedido
	{
	private:

		int id;
		Producto^ objProducto;
		int cantidadPedida;
		int estado;
		//Ver el archivo plato.h para mayor contexto acerca del estado
	public:
		ProductoPedido();
		ProductoPedido(int id, Producto^ objProducto, int CantidadPedida, int estado);
		// id cant estado 
		int GetId();
		int GetCantidadPedida();
		int GetEstado();
		void SetId(int id);
		void SetCantidadPedida(int cantidad);
		void SetEstado(int Estado);
		Producto^ GetObjProducto();
		void SetProducto(Producto^ objProducto);

		//Metodos CRUD para la clase ProductoPedido
		//Producto^ BuscarProductoxId(int id);
	};
}