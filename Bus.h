#pragma once
#include<iostream>
#include "Vehicle.h"
using namespace std;

class Bus : public Vehicle
{
private:
	bool hasSeatsForDisabledPeople;

public:
	Bus() = default;
	Bus(int id, const string& model, int price, const string& registrationNumber, const string& vinCode, int numberOfSeats, bool hasSeatsForDisabledPeople);
	Bus(const Bus& bus);
	~Bus();
	void input() override;
	void output() override;
	friend istream& operator >> (istream& in, Bus& bus);
	friend ostream& operator << (ostream& out, Bus& bus);
	bool operator==(const Bus& other) const;
};