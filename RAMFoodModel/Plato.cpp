#include "Plato.h"
using namespace RAMFoodModel;

Plato::Plato()
{
};
void Plato::SetPrecio(double precio) {
	this->Precio = precio;
}
int Plato::GetCantidadPedida() {
	return this->CantidadPedida;
};
int Plato::GetId() {
	return this->Id;
};
void Plato::SetCantidadPedida(int cantidad) {
	this->CantidadPedida = cantidad;
};
Plato::Plato(String^ Nombre, double Precio, int CantidadPedida, int Id)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	
	this->CantidadPedida = CantidadPedida;
	this->Id = Id;
	this->estado = 0;//se setea el estado en 0 por defecto
}
Plato::Plato(String^ Nombre, double Precio, int CantidadPedida, int Id, int estado)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	
	this->CantidadPedida = CantidadPedida;
	this->Id = Id;
	this->estado = estado;
}
;

String^ Plato::GetNombre() {
	return this->Nombre;
};
double Plato::GetPrecio() {
	return this->Precio;
};

int Plato::GetEstado() {
	return this->estado;
};

void Plato::SetEstado(int estado) {
	this->estado = estado;
};
//Estos Metodos no estan definidos todavia

/*
void Plato::SetNombre() {};
String^ Plato::GetNombre() {};
void Plato::SetPrecio() {};
double Plato::GetPrecio() {};
void Plato::SetId() {};
int Plato::GetId() {};
void Plato::SetIdImagen() {};
int Plato::GetIdImagen() {};
void Plato::SetCantidadPedida() {};
int	Plato::GetCantidadPedida() {};
*/