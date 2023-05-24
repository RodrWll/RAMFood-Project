#pragma once
using namespace System;
namespace RAMFoodModel {
	public ref class Plato
	{
	private:
		String^ Nombre;
		double Precio;
		int IdImagen;
		int CantidadPedida;
		int Id;
	public:
		Plato();
		Plato(String^ Nombre, double Precio, int IdImagen, int CantidadPedida, int Id);
		String^ GetNombre();
		double GetPrecio();
		int GetCantidadPedida();
		int GetId();

		void SetCantidadPedida(int cantidad);
		void SetPrecio(double precio);

		/*
		void SetNombre();

		void SetId();
		int GetId();
		void SetIdImagen();
		int GetIdImagen();
	
		*/
	};
}