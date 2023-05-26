#pragma once
#include "Usuario.h"

namespace RAMFoodModel {
	public ref class Asistente : public Usuario {
	private:
		String^ Nombre;
	public:
		Asistente();
		Asistente(String^ Nombre);

		/*
		void ValidarPagoMesa();
		void SetNombre();
		String^ GetNombre();
		*/
	};
}