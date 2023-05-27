#pragma once
#include "Plato.h"
#include "Bebida.h"
using namespace System::Collections::Generic;

namespace RAMFoodModel {

	public ref class PedidoMesa
	{
	public:
		PedidoMesa();
		PedidoMesa(int Fila, int Mesa, List<Plato^>^ ListaPlatos, List<Bebida^>^ ListaBebidas);
		void SetCuenta(double Cuenta);
		double GetCuenta();
		int getReiniciarPedido();
		void setReiniciarPedido(int estado);
				/*
		void EnviarPedido();
		void LlamarMozo();

		*/
	private:
		int Fila;
		double Cuenta;
		int Mesa;
		List<Plato^>^ ListaPlatos;
		List<Bebida^>^ ListaBebidas;
		int reiniciarPedido;
		/* valores para reiniciarPedido:
		* vale 1: se reinicia los numeros de la interfaz de comnesal
		* vale 0:  no se reinicia
		
		
		*/
	};

};