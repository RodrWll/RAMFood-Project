#pragma once
#include "Usuario.h"
namespace RAMFoodModel {
	public ref class Administrador : public Usuario {
	private:
		String^ Nombre;

	public:
		Administrador();
		Administrador(String^ Nombre);
		/*
		void AnhadirEmpleado();
		void EliminarEmplead0();
		Void ModificarEmpleado();
		*/

	};
}