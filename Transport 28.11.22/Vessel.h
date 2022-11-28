#pragma once

#include "Transport.h"

using namespace std;

class Vessel : private Transport {
public:
	void Consumption() {
		cout << "30 литров на 100 км";
	}
}; 