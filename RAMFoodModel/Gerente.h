#pragma once
#include "Usuario.h"
namespace RAMFoodModel {
	public ref class Gerente : public Usuario {
	private:
		String^ Nombre;
		String^ ApellidoPat;
		String^ ApellidoMat;

	public:
		Gerente();
		Gerente(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat);
		void SetNombre(String^ Nombre);
		String^ GetNombre();
		void SetApellidoPat(String^ ApellidoPat);
		String^ GetApellidoPat();
		void SetApellidoMat(String^ ApellidoMat);
		String^ GetApellidoMat();
		
		/*
		void AnhadirEmpleado();
		void EliminarEmplead0();
		Void ModificarEmpleado();
		*/

	};
}