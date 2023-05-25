#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class Usuario {
	private:
		int Id;
		int Tipo;
		String^ NombreUsuario;
		String^ ApellidoPat;
		String^ ApellidoMat;
		String^ Correo;
		String^ Contrasenha;
		//array<String^>^ Puesto = gcnew array<String^>(3);
	public:
		array<String^>^ Puesto = gcnew array<String^>(3);
		Usuario();
		void Usuario1(String^ NombreUsuario, String^ Contrasenha);
		Usuario(String^ NombreUsuario, String^ ApellidoPat, String^ ApellidoMat, int Id, String^ Correo, String^ Contrasenha, int Tipo);
		void SetNombreUsuario(String^ NombreUsuario);
		String^ GetNombreUsuario();
		void SetApellidoPat(String^ ApellidoPat);
		String^ GetApellidoPat();
		void SetApellidoMat(String^ ApellidoMat);
		String^ GetApellidoMat();
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



