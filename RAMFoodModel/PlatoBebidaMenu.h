#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class PlatoBebidaMenu {
	private:
		String^ Nombre;
		double Precio;
		int Tipo;
		int Id;
	public:
		PlatoBebidaMenu();
		PlatoBebidaMenu(int Id, String^ Nombre, double Precio, int Tipo);

		String^ GetNombre();
		void SetNombre(String^ Nombre);
		int GetId();
		void SetId(int Id);
		double GetPrecio();
		void SetPrecio(double Precio);
		int GetTipo();
		void SetTipo(int Tipo);

	};
}