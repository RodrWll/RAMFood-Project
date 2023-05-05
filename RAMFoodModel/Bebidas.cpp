#include "Bebidas.h"
using namespace RAMFoodModel;
Bebidas::Bebidas()
{
}
int Bebidas::GetCantidadPedida() {
	return this->CantidadPedida;
};
Bebidas::Bebidas(String^ Nombre, double Precio, int IdImagen, int CantidadPedida, int Tamanho, int Id)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->IdImagen = IdImagen;
	this->CantidadPedida = CantidadPedida;
	this->Tamanho = Tamanho;
	this->Id = Id;

};

int Bebidas::GetId() {
	return this->Id;
};

String^ Bebidas::GetNombre() {
	return this->Nombre;
}
double Bebidas::GetPrecio() {
	return this->Precio;
}
/*

void Bebidas::SetNombre() {};
String^ Bebidas::GetNombre() {};
void Bebidas::SetPrecio() {};
double Bebidas::GetPrecio() {};
void Bebidas::SetId() {};
int Bebidas::GetId() {};
void Bebidas::SetIdImagen() {};
int Bebidas::GetIdImagen() {};
void Bebidas::SetCantidadPedida() {};
int	Bebidas::GetCantidadPedida() {};
void Bebidas::SetTamanho() {};
int Bebidas::GetTamanho() {};
*/
