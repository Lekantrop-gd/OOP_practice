#pragma once
#include<iostream>
using namespace std;

class Car
{
private:
	int id;
	string model;
	int price;
	string registrationNumber;
	string vinCode;
	int numberOfSeats;
	int numberOfDoors;

public:
	Car() = default;
	Car(int id, const string& model, int price, const string& registrationNumber, const string& vinCode, int numberOfSeats, int numberOfDoors);
	Car(const Car &car);
	~Car();
	void input();
	void output();
	friend istream& operator >> (istream& in, Car& car);
	friend ostream& operator << (ostream& out, Car& car);
};