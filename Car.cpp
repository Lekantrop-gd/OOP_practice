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
	Vehicle(id, model, price, registrationNumber, vinCode, numberOfSeats),
	numberOfDoors(numberOfDoors)
{
}

Car::Car(const Car& car) : Vehicle(car), numberOfDoors(car.numberOfDoors)
{
}

Car::~Car()
{
}

void Car::input()
{
	Vehicle::input();
	cout << "Input number of doors: "; cin >> this->numberOfDoors;
}

void Car::output()
{
	Vehicle::output();
	cout << "Number of doors: " << this->numberOfDoors << endl;
}

istream& operator>>(istream& in, Car& car)
{
	car.input();
	return in;
}

ostream& operator<<(ostream& out, Car& car)
{
	car.output();
	return out;
}

bool Car::operator==(const Car& other) const
{
	return id == other.id &&
		model == other.model &&
		price == other.price &&
		registrationNumber == other.registrationNumber &&
		vinCode == other.vinCode &&
		numberOfSeats == other.numberOfSeats &&
		numberOfDoors == other.numberOfDoors;
}
