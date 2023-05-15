#include "Plato.h"
using namespace RAMFoodModel;

Plato::Plato()
{
};

int Plato::GetCantidadPedida() {
	return this->CantidadPedida;
};
int Plato::GetId() {
	return this->Id;
};

Plato::Plato(String^ Nombre, double Precio, int IdImagen, int CantidadPedida, int Id)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->IdImagen = IdImagen;
	this->CantidadPedida = CantidadPedida;
	this->Id = Id;
};

String^ Plato::GetNombre() {
	return this->Nombre;
};
double Plato::GetPrecio() {
	return this->Precio;
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