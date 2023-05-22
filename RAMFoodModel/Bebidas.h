#pragma once
using namespace System;
namespace RAMFoodModel {
	public ref class Bebidas
	{
	public:
		Bebidas();
		Bebidas(String^ Nombre, double Precio, int IdImagen, int CantidadPedida, int Tamanho, int Id);

		String^ GetNombre();
		double GetPrecio();
		int GetCantidadPedida();
		int GetId();
		void SetCantidadPedida(int cantidad);
		void SetPrecio(double precio);
		/*
		void SetNombre();
	
		double GetPrecio();
		void SetId();
		int GetId();
		void SetIdImagen();
		int GetIdImagen();
		void SetCantidadPedida();
		int	GetCantidadPedida();
		void SetTamanho();
		int GetTamanho();
		*/

	private:
		String^ Nombre;
		double Precio;
		int IdImagen;
		int CantidadPedida;
		int Tamanho;
		int Id;
	};
}