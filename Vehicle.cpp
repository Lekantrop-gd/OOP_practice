#include "Vehicle.h"

Vehicle::Vehicle(
	int id,
	const string& model,
	int price,
	const string& registrationNumber,
	const string& vinCode,
	int numberOfSeats)
	:
	id(id),
	model(model),
	price(price),
	registrationNumber(registrationNumber),
	vinCode(vinCode),
	numberOfSeats(numberOfSeats)
{
}

Vehicle::Vehicle(const Vehicle& vehicle)
{
	this->id = vehicle.id;
	this->model = vehicle.model;
	this->price = vehicle.price;
	this->registrationNumber = vehicle.registrationNumber;
	this->vinCode = vehicle.vinCode;
	this->numberOfSeats = vehicle.numberOfSeats;
}

Vehicle::~Vehicle()
{
}

void Vehicle::input()
{
	cout << "Input id: "; cin >> this->id;
	cout << "Input model: "; cin >> this->model;
	cout << "Input price: "; cin >> this->price;
	cout << "Input registration number: "; cin >> this->registrationNumber;
	cout << "Input vin code: "; cin >> this->vinCode;
	cout << "Input number of seats: "; cin >> this->numberOfSeats;
}

void Vehicle::output()
{
	cout << "Id: " << this->id << endl;
	cout << "Model: " << this->model << endl;
	cout << "Price: " << this->price << endl;
	cout << "Registration number: " << this->registrationNumber << endl;
	cout << "Vin code: " << this->vinCode << endl;
	cout << "Number of seats: " << this->numberOfSeats << endl;
}

bool Vehicle::operator==(const Vehicle& other) const
{
	return id == other.id &&
		model == other.model &&
		price == other.price &&
		registrationNumber == other.registrationNumber &&
		vinCode == other.vinCode &&
		numberOfSeats == other.numberOfSeats;
}

istream& operator>>(istream& in, Vehicle& vehicle)
{
	vehicle.input();
	return in;
}

ostream& operator<<(ostream& out, Vehicle& vehicle)
{
	vehicle.output();
	return out;
}