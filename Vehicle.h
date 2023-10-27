#pragma once
#include<iostream>
using namespace std;

class Vehicle
{
protected:
	int id;
	string model;
	int price;
	string registrationNumber;
	string vinCode;
	int numberOfSeats;
public:
	Vehicle() = default;
	Vehicle(int id, const string& model, int price, const string& registrationNumber, const string& vinCode, int numberOfSeats);
	Vehicle(const Vehicle& bus);
	~Vehicle();
	virtual void input();
	virtual void output();
	friend istream& operator >> (istream& in, Vehicle& bus);
	friend ostream& operator << (ostream& out, Vehicle& bus);
	virtual bool operator==(const Vehicle& other) const;
};