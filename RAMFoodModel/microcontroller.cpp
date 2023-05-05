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
using namespace std;

#pragma comment(lib, "Ws2_32.lib")
#pragma warning(disable:4996)

using namespace RAMFoodModel;

//constructor
microcontroller::microcontroller() {
	this->status = 0;
}
microcontroller::microcontroller(int status) {
	this->status = status;
}
//setters
void microcontroller::setStatus(int status) {
	this->status = status;
	//mandar el status al microcontrolador, es decir se manda el status al arduino usando el metodo sendBit
	//Se manda el status al arduino usando el metodo sendBit

	//sendBit(status);
}
//getters
int microcontroller::getStatus() {
	return this->status;
}
//metodos

//if we want send a bit to icrocontroller
void microcontroller::sendBit(int bit) {
	//aqui se envia el bit al microcontrolador, haciendo un HTTP post
	//http::Request request{ "http://192.168.18.60/app" };
	http::Request request{ "http://10.101.43.148/app" };
	//Pasamos el bit a string;;
	std::string bitString = std::to_string(bit);
	//Mandamos el bit en el HTTP post
	const string body = "dato=" + bitString;
	const auto response = request.send("POST", body, {
		{"Content-Type", "application/x-www-form-urlencoded"}
		});
}