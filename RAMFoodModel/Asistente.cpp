#include "Asistente.h"

using namespace RAMFoodModel;

Asistente::Asistente() {

}
Asistente::Asistente(int NumeroMesa, String^ NombreComida, int Cantidad, double PrecioUnidad) {
	this->NumeroMesa = NumeroMesa;
	this->NombreComida = NombreComida;
	this->Cantidad = Cantidad;
	this->PrecioUnidad = PrecioUnidad;
}
int Asistente::getNumeroMesa() {
	return this->NumeroMesa;
}
void Asistente::setNumeroMesa(int NumeroMesa) {
	this->NumeroMesa = NumeroMesa;
}
String^ Asistente::getNombreComida() {
	return this->NombreComida;
}
void Asistente::setNombreComida(String^ NombreComida) {
	this->NombreComida = NombreComida;
}
int Asistente::getCantidad() {
	return this->Cantidad;
}
void Asistente::setCantidad(int Cantidad) {
	this->Cantidad = Cantidad;
}
double Asistente::getPrecioUnidad() {
	return this->PrecioUnidad;
}
void Asistente::setPrecioUnidad(double PrecioUnidad) {
	this->PrecioUnidad = PrecioUnidad;
}