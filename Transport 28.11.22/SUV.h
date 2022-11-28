#pragma once

#include "Transport.h"

class SUV : private Transport {
public:
	void Consumption() {
		cout << "10 л на 100 км";
	}
};