#include "Producto.h"

using namespace RAMFoodModel;

Producto::Producto() {

}
Producto::Producto(int Id, String^ Nombre, double Precio, int Tipo) {
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->Tipo = Tipo;
	this->Id = Id;
}
RAMFoodModel::Producto::Producto(String^ Nombre, double Precio, int Tipo)
{
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->Tipo = Tipo;
}
String^ Producto::GetNombre() {
	return this->Nombre;
}
void Producto::SetNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
int Producto::GetId() {
	return this->Id;
}
void Producto::SetId(int Id) {
	this->Id = Id;
}
double Producto::GetPrecio() {
	return this->Precio;
}
void Producto::SetPrecio(double Precio) {
	this->Precio = Precio;
}
int Producto::GetTipo() {
	return this->Tipo;
}
void Producto::SetTipo(int Tipo) {
	this->Tipo = Tipo;
}