#pragma once
using namespace System;

namespace RAMFoodModel {
	public ref class Producto {
	private:
		String^ Nombre;
		double Precio;
		int Tipo;
		int Id;
		int menu;
		int status;
		//Tipo 1: bebida
		//TIpo 2: plato
	public:
		Producto();
		Producto(int Id, String^ Nombre, double Precio, int Tipo);
		Producto(int Id, String^ Nombre, double Precio, int Tipo, int menu, int status);
		Producto(String^ Nombre, double Precio, int Tipo);
		String^ GetNombre();
		void SetNombre(String^ Nombre);
		int GetId();
		void SetId(int Id);
		double GetPrecio();
		void SetPrecio(double Precio);
		int GetTipo();
		void SetTipo(int Tipo);
		int GetMenu();
		void SetMenu(int menu);
		int GetStatus();
		void SetStatus(int status);
	};
}