#include "Usuario.h"
using namespace RAMFoodModel;

Usuario::Usuario() {
	this->Puesto[0]= "Gerente";
	this->Puesto[1] = "Asistente";
	this->Puesto[2] = "Chef";
}

RAMFoodModel::Usuario::Usuario(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha)
{
	this->Id = Id;
	this->Rol = Rol;
	this->Status = Status;
	this->FechaContrato = FechaContrato;
	this->FechaDesactivacion = FechaDesactivacion;
	this->Correo = Correo;
	this->Contrasenha = Contrasenha;
	this->Puesto[0] = "Gerente";
	this->Puesto[1] = "Asistente";
	this->Puesto[2] = "Chef";
}

RAMFoodModel::Usuario::Usuario(int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha)
{
	this->Rol = Rol;
	this->Status = Status;
	this->FechaContrato = FechaContrato;
	this->FechaDesactivacion = FechaDesactivacion;
	this->Correo = Correo;
	this->Contrasenha = Contrasenha;
	this->Puesto[0] = "Gerente";
	this->Puesto[1] = "Asistente";
	this->Puesto[2] = "Chef";
}

void RAMFoodModel::Usuario::SetId(int Id)
{
	this->Id = Id;
}

int RAMFoodModel::Usuario::GetId()
{
	return this->Id;
}
void RAMFoodModel::Usuario::SetContrasenha(String^ Contrasenha)
{
	this->Contrasenha = Contrasenha;
}
String^ RAMFoodModel::Usuario::GetContrasenha()
{
	return this->Contrasenha;
}

void RAMFoodModel::Usuario::SetRol(int Rol)
{
	this->Rol = Rol;
}

int RAMFoodModel::Usuario::GetRol()
{
	return this->Rol;
}

void Usuario::SetStatus(int Status)
{
	this->Status = Status;
}
int Usuario::GetStatus()
{
	return this->Status;
}

void Usuario::SetFechaContrato(String^ FechaContrato)
{
	this->FechaContrato = FechaContrato;
}
String^ Usuario::GetFechaContrato()
{
	return this->FechaContrato;
}

void Usuario::SetFechaDesactivacion(String^ FechaDesactivacion)
{
	this->FechaDesactivacion = FechaDesactivacion;
}
String^ Usuario::GetFechaDesactivacion()
{
	return this->FechaDesactivacion;
}

void RAMFoodModel::Usuario::SetCorreo(String^ Correo)
{
	this->Correo = Correo;
}

String^ RAMFoodModel::Usuario::GetCorreo()
{
	return this->Correo;
}

