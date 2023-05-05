#include "PedidoMesa.h"
using namespace RAMFoodModel;

PedidoMesa::PedidoMesa(int Fila, int Mesa, List<Plato^>^ ListaPlatos, List<Bebidas^>^ ListaBebidas)
{
	this->Fila = Fila;
	this->Cuenta = 0;
	this->ListaPlatos = ListaPlatos;
	this->ListaBebidas = ListaBebidas;
}

PedidoMesa::PedidoMesa()
{
}

void PedidoMesa::SetCuenta(double Cuenta) {
	this->Cuenta = Cuenta;
}
double PedidoMesa::GetCuenta() {
	return this->Cuenta;
}

/*
void PedidoMesa::EnviarPedido() {};
void PedidoMesa::LlamarAsistente() {};
*/