#include "Asistente.h"

using namespace RAMFoodModel;

Asistente::Asistente() {

}
Asistente::Asistente(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat)
	: Usuario(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha)
{
	this->Nombre = Nombre;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
}

void Asistente::SetNombre(String^ Nombre)
{
	this->Nombre = Nombre;
}
void Asistente::SetApellidoPat(String^ ApellidoPat)
{
	this->ApellidoPat = ApellidoPat;
}
void Asistente::SetApellidoMat(String^ ApellidoMat)
{
	this->ApellidoMat = ApellidoMat;
}

String^ Asistente::GetNombre()
{
	return this->Nombre;
}
String^ Asistente::GetApellidoPat()
{
	return this->ApellidoPat;
}
String^ Asistente::GetApellidoMat()
{
	return this->ApellidoMat;
}