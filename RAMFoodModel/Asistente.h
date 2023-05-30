#pragma once
#include "Usuario.h"

namespace RAMFoodModel {
	public ref class Asistente : public Usuario {
	private:
		String^ Nombre;
		String^ ApellidoPat;
		String^ ApellidoMat;

	public:
		Asistente();
		Asistente(int Id, int Rol, int Status, String^ FechaContrato, String^ FechaDesactivacion, String^ Correo, String^ Contrasenha, String^ Nombre, String^ ApellidoPat, String^ ApellidoMat);
		void SetNombre(String^ Nombre);
		String^ GetNombre();
		void SetApellidoPat(String^ ApellidoPat);
		String^ GetApellidoPat();
		void SetApellidoMat(String^ ApellidoMat);
		String^ GetApellidoMat();


		/*
		void ValidarPagoMesa();
		void SetNombre();
		String^ GetNombre();
		*/
	};
}