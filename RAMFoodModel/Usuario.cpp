#include "Usuario.h"
using namespace RAMFoodModel;

Usuario::Usuario() {

}
Usuario::Usuario(String^ NombreUsuario, int Id, String^ Contrasenha, int Tipo) {
	this->NombreUsuario = NombreUsuario;
	this->Id = Id;
	this->Contrasenha = Contrasenha;
	this->Tipo = Tipo;
	this->Correo = Correo;
}

void RAMFoodModel::Usuario::SetNombreUsuario(String^  NombreUsuario)
{
	this->NombreUsuario = NombreUsuario;
}

String^ RAMFoodModel::Usuario::GetNombreUsuario()
{
	return this->NombreUsuario;
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

