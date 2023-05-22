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

int PedidoMesa::getReiniciarPedido() {
	return this->reiniciarPedido;
};
void PedidoMesa::setReiniciarPedido(int estado) {
	this->reiniciarPedido = estado;
};
/*
void PedidoMesa::EnviarPedido() {};
void PedidoMesa::LlamarAsistente() {};
*/