#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class Usuario {
	private:
		String^ NombreUsuario;
		String^ Contrasenha;

	public:
		Usuario();
		Usuario(String^ NombreUsuario, String^ Contrasenha);
		void SetNombreUsuario(String^ NombreUsuario);
		String^ GetNombreUsuario();
		void SetContrasenha(String^ Contrasenha);
		String^ GetContrasenha();
	};
}