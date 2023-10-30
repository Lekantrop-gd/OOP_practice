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
	Vehicle(id, model, price, registrationNumber, vinCode, numberOfSeats),
	hasSeatsForDisabledPeople(hasSeatsForDisabledPeople)
{
}

Bus::Bus(const Bus& bus) : Vehicle(bus), hasSeatsForDisabledPeople(bus.hasSeatsForDisabledPeople)
{
	
}

Bus::~Bus()
{
}

void Bus::input()
{
	Vehicle::input();
	cout << "Input if the bus has seats for disabled people(has - 1, not has - 0): "; cin >> this->hasSeatsForDisabledPeople;
}

void Bus::output()
{
	Vehicle::output();
	cout << "Has the bus seats for disabled people: " << (this->hasSeatsForDisabledPeople ? "Yes" : "No") << endl;
}

void Bus::beep()
{
	cout << "Bus beeps!";
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