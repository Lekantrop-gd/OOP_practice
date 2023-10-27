#pragma once
#include<iostream>
using namespace std;

class Bus
{
private:
	int id;
	string model;
	int price;
	string registrationNumber;
	string vinCode;
	int numberOfSeats;
	bool hasSeatsForDisabledPeople;

public:
	Bus() = default;
	Bus(int id, const string& model, int price, const string& registrationNumber, const string& vinCode, int numberOfSeats, bool hasSeatsForDisabledPeople);
	Bus(const Bus& bus);
	~Bus();
	void input();
	void output();
	friend istream& operator >> (istream& in, Bus& bus);
	friend ostream& operator << (ostream& out, Bus& bus);
	bool operator==(const Bus& other) const;
};