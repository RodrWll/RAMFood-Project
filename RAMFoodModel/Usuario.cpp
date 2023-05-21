#include "Usuario.h"
using namespace RAMFoodModel;

Usuario::Usuario() {
	this->Puesto[0]= "Gerente";
	this->Puesto[1] = "Asistente";
	this->Puesto[2] = "Chef";
}
void Usuario::Usuario1(String^ NombreUsuario, String^ Contrasenha)
{
	this->NombreUsuario = NombreUsuario;
	this->Contrasenha = Contrasenha;
}
Usuario::Usuario(String^ NombreUsuario, String^ ApellidoPat, String^ ApellidoMat, int Id, String^ Correo, String^ Contrasenha, int Tipo) {
	this->NombreUsuario = NombreUsuario;
	this->ApellidoPat = ApellidoPat;
	this->ApellidoMat = ApellidoMat;
	this->Id = Id;
	this->Contrasenha = Contrasenha;
	this->Tipo = Tipo;
	this->Correo = Correo;
}

void Usuario::SetNombreUsuario(String^  NombreUsuario)
{
	this->NombreUsuario = NombreUsuario;
}
String^ Usuario::GetNombreUsuario()
{
	return this->NombreUsuario;
}
void Usuario::SetApellidoPat(String^ ApellidoPat)
{
	this->ApellidoPat = ApellidoPat;
}
String^ Usuario::GetApellidoPat()
{
	return this->ApellidoPat;
}

void RAMFoodModel::Usuario::SetApellidoMat(String^ ApellidoMat)
{
	this->ApellidoMat = ApellidoMat;
}
String^ RAMFoodModel::Usuario::GetApellidoMat()
{
	return this->ApellidoMat;
}


void RAMFoodModel::Usuario::SetId()
{
	static int contador = 0;
	this->Id = contador++;
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

void RAMFoodModel::Usuario::setTipo(int Tipo)
{
	this->Tipo = Tipo;
}

int RAMFoodModel::Usuario::GetTipo()
{
	return this->Tipo;
}

void RAMFoodModel::Usuario::SetCorreo(String^ Correo)
{
	this->Correo = Correo;
}

String^ RAMFoodModel::Usuario::GetCorreo()
{
	return this->Correo;
}

