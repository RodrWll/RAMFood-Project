#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class Usuario {
	private:
		int Id;
		int Rol;
		int Status;
		String^ FechaContrato;
		String^ FechaDesactivacion;
		String^ Correo;
		String^ Contrasenha;
		String^ NombreUsuario;
		String^ ApellidoPat;
		String^ ApellidoMat;
		
		
		

		//array<String^>^ Puesto = gcnew array<String^>(3);
	public:
		array<String^>^ Puesto = gcnew array<String^>(3);
		Usuario();
		Usuario(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo,	String^ Contrasenha);
		Usuario(String^ NombreUsuario, String^ ApellidoPat, String^ ApellidoMat, int Id, String^ Correo, String^ Contrasenha, int Rol);
		
		void SetId(int Id);
		int GetId();
		void SetRol(int Rol);
		int GetRol();
		void SetStatus(int Status);
		int GetStatus();
		void SetFechaContrato(String^ FechaContrato);
		String^ GetFechaContrato();
		void SetFechaDesactivacion(String^ FechaDesactivacion);
		String^ GetFechaDesactivacion();

		void SetContrasenha(String^ Contrasenha);
		String^ GetContrasenha();
		
		void SetCorreo(String^ Correo);
		String^ GetCorreo();



		void SetNombreUsuario(String^ NombreUsuario);
		String^ GetNombreUsuario();
		void SetApellidoPat(String^ ApellidoPat);
		String^ GetApellidoPat();
		void SetApellidoMat(String^ ApellidoMat);
		String^ GetApellidoMat();
	};
}



