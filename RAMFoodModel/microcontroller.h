#pragma once
#include <string>
using namespace System;
namespace RAMFoodModel {
	public ref class microcontroller
	{

	private:
		String^ URL;
		String^ ROUTE_MOTOR;
		String^ ROUTE_MESA;
		String^ ROUTE_ERROR;
		int status;
		int sensor4;
		String^ errorMessage;
	public:
		microcontroller();
		microcontroller(int status);
		void setStatusMotor(int status);
		int getStatusMotor();
		void setEnvio(int nroMesa);
		int getError();
		void sendBit(int bit, const std::string& variable, String^ route);
		int getDato(String^ direction);
		String^ getErrorMessage();
	};
}