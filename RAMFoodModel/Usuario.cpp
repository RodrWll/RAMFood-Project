#include "Usuario.h"
using namespace RAMFoodModel;

Usuario::Usuario() {

}
Usuario::Usuario(String^ NombreUsuario, String^ Contrasenha) {
	this->NombreUsuario = NombreUsuario;
	this->Contrasenha = Contrasenha;
}

void Usuario::SetNombreUsuario(String^ NombreUsuario) {
	this->NombreUsuario = NombreUsuario;
}

String^ Usuario::GetNombreUsuario() {
	return this->NombreUsuario;
}

void Usuario::SetContrasenha(String^ Contrasenha) {
	this->Contrasenha = Contrasenha;
}

String^ Usuario::GetContrasenha() {
	return this->Contrasenha;
}