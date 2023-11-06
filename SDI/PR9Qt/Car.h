#pragma once
#include<iostream>
using namespace std;

class Car
{
private:
    int id;
    string model;
    int releaseDate;
    int price;
    string registrationNumber;
    string vinCode;
    int numberOfSeats;
	int numberOfDoors;

public:
	Car() = default;
    Car(int id, const string& model, int releaseDate, int price, const string& registrationNumber, const string& vinCode, int numberOfSeats, int numberOfDoors);
	Car(const Car &car);
    ~Car();
    bool operator==(const Car& other) const;
    int getId() const;
    string getModel() const;
    int getReleaseDate() const;
    int getPrice() const;
    string getRegistrationNumber() const;
    string getVinCode() const;
    int getNumberOfSeats() const;
    int getNumberOfDoors() const;
};
