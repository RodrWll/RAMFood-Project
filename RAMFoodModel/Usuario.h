#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class Usuario {
	private:
		int Id;
		int Tipo;
		String^ NombreUsuario;
		String^ Correo;
		String^ Contrasenha;
		
		

	public:
		Usuario();
		Usuario(String^ NombreUsuario, int Id, String^ Contrasenha, int Tipo);
		void SetNombreUsuario(String^ NombreUsuario);
		String^ GetNombreUsuario();
		void SetId(int Id);
		int GetId();
		void SetContrasenha(String^ Contrasenha);
		String^ GetContrasenha();
		void setTipo(int Tipo);
		int GetTipo();
		void SetCorreo(String^ Correo);
		String^ GetCorreo();
	};
}



