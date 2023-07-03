#pragma once
using namespace System;
namespace  RAMFoodModel
{
	public ref class Reportes
	{
	private:
		int Rol;
		int cantidadxRol;

	public:
		Reportes ();
		Reportes(int Rol, int cantidadxRol);
		int getRol();
		void setRol(int Rol);
		int getCantidadxRol();
		void setCantidadxRol(int cantidadxRol);
	};

}