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

void Car::input()
{
	cout << "Input car id: "; cin >> this->id;
	cout << "Input car model: "; cin >> this->model;
	cout << "Input car price: "; cin >> this->price;
	cout << "Input car registration number: "; cin >> this->registrationNumber;
	cout << "Input car vin code: "; cin >> this->vinCode;
	cout << "Input car number of seats: "; cin >> this->numberOfSeats;
	cout << "Input car number of doors: "; cin >> this->numberOfDoors;
}

istream& operator>>(istream& in, Car& car)
{
	car.input();
	return in;
}
