#include "Bus.h"

Bus::Bus(
	int id,
	const string& model,
	int price,
	const string& registrationNumber,
	const string& vinCode,
	int numberOfSeats,
	bool hasSeatsForDisabledPeople)
	:
	id(id),
	model(model),
	price(price),
	registrationNumber(registrationNumber),
	vinCode(vinCode),
	numberOfSeats(numberOfSeats),
	hasSeatsForDisabledPeople(hasSeatsForDisabledPeople)
{
}

Bus::Bus(const Bus& bus)
{
	this->id = bus.id;
	this->model = bus.model;
	this->price = bus.price;
	this->registrationNumber = bus.registrationNumber;
	this->vinCode = bus.vinCode;
	this->numberOfSeats = bus.numberOfSeats;
	this->hasSeatsForDisabledPeople = bus.hasSeatsForDisabledPeople;
}

Bus::~Bus()
{
}

void Bus::input()
{
	cout << "Input car id: "; cin >> this->id;
	cout << "Input car model: "; cin >> this->model;
	cout << "Input car price: "; cin >> this->price;
	cout << "Input car registration number: "; cin >> this->registrationNumber;
	cout << "Input car vin code: "; cin >> this->vinCode;
	cout << "Input car number of seats: "; cin >> this->numberOfSeats;
	cout << "Input if the bus has seats for disabled people(has - 1, not has - 0): "; cin >> this->hasSeatsForDisabledPeople;
}

void Bus::output()
{
	cout << "Bus id: " << this->id << endl;
	cout << "Bus model: " << this->model << endl;
	cout << "Bus price: " << this->price << endl;
	cout << "Bus registration number: " << this->registrationNumber << endl;
	cout << "Bus vin code: " << this->vinCode << endl;
	cout << "Bus number of seats: " << this->numberOfSeats << endl;
	cout << "Has the bus seats for disabled people: " << this->hasSeatsForDisabledPeople << endl;
}

bool Bus::operator==(const Bus& other) const
{
	return id == other.id && 
		model == other.model && 
		price == other.price && 
		registrationNumber == other.registrationNumber && 
		vinCode == other.vinCode && 
		numberOfSeats == other.numberOfSeats && 
		hasSeatsForDisabledPeople == other.hasSeatsForDisabledPeople;
}

istream& operator>>(istream& in, Bus& bus)
{
	bus.input();
	return in;
}

ostream& operator<<(ostream& out, Bus& bus)
{
	bus.output();
	return out;
}