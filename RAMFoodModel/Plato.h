#pragma once
using namespace System;
namespace RAMFoodModel {
	public ref class Plato
	{
	private:
		String^ Nombre;
		double Precio;
		int CantidadPedida;
		int Id;
		int estado;
		//0-> el plato no ha sido aceptado por el chef
		//1-> el plato est'a siendo preparado por el chef
		//2-> el plato est'a listo para ser entregado
		//3-> el platp ha sido entregado
		//Informacion de interes para el chef (solo le interesa si esta en 0 o 1)
		//Si est'a en 0 el plato aun no ha sido aceptado por el chef por lo que un chef puede aceptarlo.
		//Si est'a en 1 el plato est'a siendo preparado por el chef por lo que otro chef no puede aceptarlo.
		//Cuando el plato est'e listo el estado es 2 y se elimina de la lista de platos en preparacion.--->interfaz del chef.
		//Informacion de interes para el asistente (le interesa si esta si se esta preparando, si esta listo para enviar o si fue enviado)
		//Si est'a es diferente <2 el plato todavia no est'a listo para ser entregado.
		//Si est'a en 2 el plato est'a listo para ser entregado.
		//Si est'a en 3 el plato ya ha sido enviado.
		//Informacion para el comensal.
		//Si esta en 0, el plato ha sido "enviado" al chef.
		//Si esta en 1, el plato ha sido aceptado por el chef. "en preparacion"
		//Si esta en 2, el plato esta listo para ser entregado. "preparado"
		//Si esta en 3, el plato ha sido entregado. "entregado"
	public:
		Plato();
		Plato(String^ Nombre, double Precio,  int CantidadPedida, int Id);
		Plato(String^ Nombre, double Precio,  int CantidadPedida, int Id, int estado);
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