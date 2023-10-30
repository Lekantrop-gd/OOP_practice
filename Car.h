#pragma once
#include<iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
private:
	int numberOfDoors;

public:
	Car() = default;
	Car(int id, const string& model, int price, const string& registrationNumber, const string& vinCode, int numberOfSeats, int numberOfDoors);
	Car(const Car &car);
	~Car();
	void input() override;
	void output() override;
	void beep() override;
	friend istream& operator >> (istream& in, Car& car);
	friend ostream& operator << (ostream& out, Car& car);
	bool operator==(const Car& other) const;
};