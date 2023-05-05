#pragma once
#include "Usuario.h"
namespace RAMFoodModel {
	public ref class Gerente : public Usuario {
	private:
		String^ Nombre;

	public:
		Gerente();
		Gerente(String^ Nombre);
		/*
		void AnhadirEmpleado();
		void EliminarEmplead0();
		Void ModificarEmpleado();
		*/

	};
}