#include "microcontroller.h"
#include <string>
#include "../HTTPRequest-master/include/HTTPRequest.hpp"
#include <iostream>
#include <fstream>
#include <winsock2.h>
#include <windows.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <msclr\marshal_cppstd.h>
using namespace std;

#pragma comment(lib, "Ws2_32.lib")
#pragma warning(disable:4996)

using namespace RAMFoodModel;

//constructor
//Ver como poner el constructor, si se cierra la sesion del gerente, tal vez se apague la faja :,v
microcontroller::microcontroller() {
	this->URL = "http://192.168.18.60";
	//this->URL = "http://10.100.72.114";
	this->ROUTE_MOTOR = "/Motor";
	this->ROUTE_MESA = "/Mesa";
	this->ROUTE_ERROR = "/ErrorFaja";
	this->errorMessage = "";
	
	this->status = getStatusMotor();
}
microcontroller::microcontroller(int status) {
	this->status = status;
}
//setters
void microcontroller::setStatusMotor(int status) {
	this->status = status;
	//mandar el status al microcontrolador, es decir se manda el status al arduino usando el metodo sendBit
	//Se manda el status al arduino usando el metodo sendBit
	sendBit(status, "onMotor", this->ROUTE_MOTOR);
}
//Para verificar si el servidor está encendido
//getters

int microcontroller::getDato(String^ direction) {
	string url = msclr::interop::marshal_as<std::string>(direction);
	const std::chrono::milliseconds timeout{4500};
	http::Request request{url};
	const auto response = request.send("GET", "", {}, timeout);
	//Se obtiene el status del microcontrolador

	string dato = std::string{ response.body.begin(), response.body.end() };
	return std::stoi(dato);
}
int microcontroller::getStatusMotor() {
	//Se hace un HTTP get para obtener el status del microcontrolador
	try{
		this->status = getDato((this->URL) + (this->ROUTE_MOTOR));
		this->errorMessage = "";
	}
	catch (const std::exception& e) {
		this->errorMessage = "Hubo un error al obtener el status del microcontrolador.";
	}
	return this->status;
}
void microcontroller::setEnvio(int nroMesa)
{
	sendBit(nroMesa, "nroMesa", this->ROUTE_MESA);
}
int microcontroller::getError()
{
	//Se hace un HTTP get para obtener el status del microcontrolador
	try {
		this->sensor4 = getDato((this->URL) + (this->ROUTE_ERROR));
		this->errorMessage = "";
	}
	catch (const std::exception& e) {
		this->errorMessage = "Hubo un error al obtener el estado el sensor 4 del microcontrolador.";
	}
	return this->sensor4;
}
//metodos

//if we want send a bit to microcontroller
void microcontroller::sendBit(int bit, const std::string& variable, String^ route) {
	try{
		//aqui se envia el bit al microcontrolador, haciendo un HTTP post
		string url = msclr::interop::marshal_as<std::string>((this->URL) + route);
		http::Request request{ url };
		//Pasamos el bit a string
		std::string bitString = std::to_string(bit);
		//Mandamos el bit en el HTTP post
		const string body = variable +"=" + bitString;
		const std::chrono::milliseconds timeout{3500};
		const auto response = request.send("POST", body, {
			{"Content-Type", "application/x-www-form-urlencoded"}
			}, timeout);
		this->errorMessage = "";
	}
	catch (const std::exception& e) {
		this->errorMessage = "Hubo un error al enviar el bit al microcontrolador.";
	}
}
String^ microcontroller::getErrorMessage() {
	return this->errorMessage;
}