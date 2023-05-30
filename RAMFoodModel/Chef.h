#pragma once
#include "Usuario.h"
namespace RAMFoodModel {
	public ref class Chef : public Usuario {
	private:
		String^ Nombre;
		String^ ApellidoPat;
		String^ ApellidoMat;
	public:
		Chef();
		Chef(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat);
		void SetNombre(String^ Nombre);
		String^ GetNombre();
		void SetApellidoPat(String^ ApellidoPat);
		String^ GetApellidoPat();
		void SetApellidoMat(String^ ApellidoMat);
		String^ GetApellidoMat();
	
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