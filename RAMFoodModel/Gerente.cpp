#include "Gerente.h"

using namespace RAMFoodModel;

Gerente::Gerente() {
}
Gerente::Gerente(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat)
	: Usuario(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha)
{
	this->Nombre = Nombre;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
}

void Gerente::SetNombre(String^ Nombre)
{
	this->Nombre = Nombre;
}
String^ Gerente::GetNombre()
{
	return this->Nombre;
}
void Gerente::SetApellidoPat(String^ ApellidoPat)
{
	this->ApellidoPat = ApellidoPat;
}
String^ Gerente::GetApellidoPat()
{
	return this->ApellidoPat;
}
void Gerente::SetApellidoMat(String^ ApellidoMat)
{
	this->ApellidoMat = ApellidoMat;
}
String^ Gerente::GetApellidoMat()
{
	return this->ApellidoMat;
}
