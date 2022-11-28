#pragma once

#include "Transport.h"

using namespace std;

class Truck : private Transport{
	void Consumption() {
		cout << "3 литра дизельного топлива на каждую тонну на 100 км";
	}
};