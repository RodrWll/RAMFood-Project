#pragma once
using namespace System;
namespace RAMFoodModel {
	public ref class Bebida
	{
	private:
		String^ Nombre;
		double Precio;
		
		int CantidadPedida;
		//int Tamanho;
		int Id;
		int estado;
		//Ver el archivo plato.h para mayor contexto acerca del estado
	public:
		Bebida();
		Bebida(String^ Nombre, double Precio, int CantidadPedida, int Id);
		Bebida(String^ Nombre, double Precio, int CantidadPedida, int Id,int estado);

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

	
	};
}