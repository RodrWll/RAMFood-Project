#pragma once
#include "Usuario.h"

namespace RAMFoodModel {
	public ref class Asistente : public Usuario {
	private:
		int NumeroMesa;
		String^ NombreComida;
		int Cantidad;
		double PrecioUnidad;
	public:
		Asistente();
		Asistente(int NumeroMesa, String^ NombreComida, int Cantidad, double PrecioUnidad);
		int getNumeroMesa();
		void setNumeroMesa(int NumeroMesa);
		String^ getNombreComida();
		void setNombreComida(String^ NombreComida);
		int getCantidad();
		void setCantidad(int Cantidad);
		double getPrecioUnidad();
		void setPrecioUnidad(double PrecioUnidad);
		
	};
}