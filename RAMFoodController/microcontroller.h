#pragma once
using namespace System;
#include <string>
namespace RAMFoodModel {
	public ref class microcontroller
	{
	private:
		int status;
	public:
		microcontroller();
		microcontroller(int status);
		void setStatus(int status);
		int getStatus();
		void sendBit(int bit);
	};
}