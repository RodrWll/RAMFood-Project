#pragma once
#include "Usuario.h"

namespace RAMFoodModel {
	public ref class AsistenteChef : public Usuario {
	private:
		String^ Nombre;
	public:
		AsistenteChef();
		AsistenteChef(String^ Nombre);

		/*
		void ValidarPagoMesa();
		void SetNombre();
		String^ GetNombre();
		*/
	};
}