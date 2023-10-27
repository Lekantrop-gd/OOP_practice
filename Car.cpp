#include "Car.h"

Car::Car(
	int id, 
	const string& model, 
	int price, 
	const string& registrationNumber, 
	const string& vinCode, 
	int numberOfSeats, 
	int numberOfDoors)
	: 
	id(id), 
	model(model), 
	price(price), 
	registrationNumber(registrationNumber), 
	vinCode(vinCode), 
	numberOfSeats(numberOfSeats), 
	numberOfDoors(numberOfDoors)
{
}

Car::Car(const Car& car)
{
	this->id = car.id;
	this->model = car.model;
	this->price = car.price;
	this->registrationNumber = car.registrationNumber;
	this->vinCode = car.vinCode;
	this->numberOfSeats = car.numberOfSeats;
	this->numberOfDoors = car.numberOfDoors;
}

Car::~Car()
{
}
