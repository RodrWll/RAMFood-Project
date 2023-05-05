#pragma once
#include "Usuario.h"
namespace RAMFoodModel {
	public ref class Cocinero : public Usuario {
	private:
		String^ Nombre;
	public:
		Cocinero();
		Cocinero(String^ Nombre);
		/*
		void SetNombre();
		String^ GetNombre();
		void ModificaPlato();
		void AnhadirPlato();
		void EliminarPlato();
		void ModificarBebida();
		void AnhadirBebida();
		Void EliminarBebida();
		*/

	};
}