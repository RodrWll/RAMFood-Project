#include "PlatoBebidaMenu.h"

using namespace RAMFoodModel;

PlatoBebidaMenu::PlatoBebidaMenu() {

}
PlatoBebidaMenu::PlatoBebidaMenu(int Id, String^ Nombre, double Precio, int Tipo) {
	this->Nombre = Nombre;
	this->Precio = Precio;
	this->Tipo = Tipo;
	this->Id = Id;
}
String^ PlatoBebidaMenu::GetNombre() {
	return this->Nombre;
}
void PlatoBebidaMenu::SetNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
int PlatoBebidaMenu::GetId() {
	return this->Id;
}
void PlatoBebidaMenu::SetId(int Id) {
	this->Id = Id;
}
double PlatoBebidaMenu::GetPrecio() {
	return this->Precio;
}
void PlatoBebidaMenu::SetPrecio(double Precio) {
	this->Precio = Precio;
}
int PlatoBebidaMenu::GetTipo() {
	return this->Tipo;
}
void PlatoBebidaMenu::SetTipo(int Tipo) {
	this->Tipo = Tipo;
}