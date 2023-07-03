#include "Reportes.h"
using namespace RAMFoodModel;

Reportes::Reportes()
{
}

Reportes::Reportes(int Rol, int cantidadxRol)
{
this->Rol = Rol;
	this->cantidadxRol = cantidadxRol;
}

int Reportes::getRol()
{
	return this->Rol;
}
void Reportes::setRol(int Rol)
{
	this->Rol = Rol;
}
int Reportes::getCantidadxRol()
{
	return this->cantidadxRol;
}
void Reportes::setCantidadxRol(int cantidadxRol)
{
	this->cantidadxRol = cantidadxRol;
}

