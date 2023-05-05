#include "Usuario.h"
using namespace RAMFoodModel;

Usuario::Usuario() {

}
Usuario::Usuario(int NombreUsuario, int Id, String^ Contrasenha, int Tipo) {
	this->NombreUsuario = NombreUsuario;
	this->Id = Id;
	this->Contrasenha = Contrasenha;
	this->Tipo = Tipo;
}