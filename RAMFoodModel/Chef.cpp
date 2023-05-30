#include "Chef.h"
using namespace RAMFoodModel;

Chef::Chef() {}
Chef::Chef(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat) 
	: Usuario(Id, Rol, Status, FechaContrato, FechaDesactivacion, Correo, Contrasenha)
{
	this->Nombre = Nombre;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
}
void Chef::SetNombre(String^ Nombre) {
	this->Nombre = Nombre;
}
void Chef::SetApellidoPat(String^ ApellidoPat) {
	this->ApellidoPat = ApellidoPat;
}
void Chef::SetApellidoMat(String^ ApellidoMat) {
	this->ApellidoMat = ApellidoMat;
}
String^ Chef::GetNombre() {
	return this->Nombre;
}
String^ Chef::GetApellidoPat() {
	return this->ApellidoPat;
}
String^ Chef::GetApellidoMat() {
	return this->ApellidoMat;
}