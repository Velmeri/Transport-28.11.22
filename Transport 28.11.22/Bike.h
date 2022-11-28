#pragma once

#include "Transport.h"

class Bike : private Transport
{
public:
	void Consumption() {
		cout << "Не нужно топливо";
	}
};