#include "Bebida.h"
using namespace RAMFoodModel;
Bebida::Bebida()
{
}
int Bebida::GetCantidadPedida() {
	return this->CantidadPedida;
};
Bebida::Bebida(String^ Nombre, double Precio, int IdImagen, int CantidadPedida, int Tamanho, int Id)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->IdImagen = IdImagen;
	this->CantidadPedida = CantidadPedida;
	this->Tamanho = Tamanho;
	this->Id = Id;

}
Bebida::Bebida(String^ Nombre, double Precio, int IdImagen, int CantidadPedida, int Tamanho, int Id, int estado)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->IdImagen = IdImagen;
	this->CantidadPedida = CantidadPedida;
	this->Tamanho = Tamanho;
	this->Id = Id;
	this->estado = estado;
}
;

int Bebida::GetId() {
	return this->Id;
};

void Bebida::SetCantidadPedida(int cantidad) {
	this->CantidadPedida = cantidad;

};
void Bebida::SetPrecio(double precio) {
	this->Precio = precio;
};
String^ Bebida::GetNombre() {
	return this->Nombre;
}
double Bebida::GetPrecio() {
	return this->Precio;
}
/*

void Bebida::SetNombre() {};
String^ Bebida::GetNombre() {};
void Bebida::SetPrecio() {};
double Bebida::GetPrecio() {};
void Bebida::SetId() {};
int Bebida::GetId() {};
void Bebida::SetIdImagen() {};
int Bebida::GetIdImagen() {};
void Bebida::SetCantidadPedida() {};
int	Bebida::GetCantidadPedida() {};
void Bebida::SetTamanho() {};
int Bebida::GetTamanho() {};
*/
