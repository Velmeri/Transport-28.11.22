#pragma once
#include <string>
#include <iostream>

using namespace std;

class Transport
{
	string name;
	double V;	//	объём бака
public:
	Transport();
	~Transport();

	void Init() {
		cout << "Name?: ";
		cin >> name;
		cout << "\nV?: ";
		cin >> V;
	}
	void Show() {
		cout << "Name: " << name;
		cout << "\nV: " << V;
	}
	virtual void Consumption() = 0;
};

Transport::Transport()
{
}

inline Transport::~Transport()
{
}