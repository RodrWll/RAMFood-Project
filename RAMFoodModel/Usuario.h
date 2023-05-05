#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class Usuario {
	private:
		int NombreUsuario;
		int Id;
		String^ Contrasenha;
		int Tipo;

	public:
		Usuario();
		Usuario(int NombreUsuario, int Id, String^ Contrasenha, int Tipo);
		/*
		void SetNombreUsuario();
		String^ GetNombreUsuario();
		void SetId();
		int GetId();
		void SetContrasenha();
		String^ GetContrasenha();
		void setTipo();
		int GetTipo();
		*/
	};
}