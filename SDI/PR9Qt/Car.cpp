#include "Car.h"

int Car::getId() const
{
    return id;
}

string Car::getModel() const
{
    return model;
}

int Car::getReleaseDate() const
{
    return releaseDate;
}

int Car::getPrice() const
{
    return price;
}

string Car::getRegistrationNumber() const
{
    return registrationNumber;
}

string Car::getVinCode() const
{
    return vinCode;
}

int Car::getNumberOfSeats() const
{
    return numberOfSeats;
}

int Car::getNumberOfDoors() const
{
    return numberOfDoors;
}

Car::Car(
    int id,
    const string &model,
    int releaseDate,
    int price,
    const string &registrationNumber,
    const string &vinCode,
    int numberOfSeats,
    int numberOfDoors)
    :
    id(id),
    model(model),
    releaseDate(releaseDate),
    price(price),
    registrationNumber(registrationNumber),
    vinCode(vinCode),
    numberOfSeats(numberOfSeats),
    numberOfDoors(numberOfDoors)
{

}

Car::Car(const Car &car)
{
    this->id = car.id;
    this->model = car.model;
    this->releaseDate = car.releaseDate;
    this->price = car.price;
    this->registrationNumber = car.registrationNumber;
    this->vinCode = car.vinCode;
    this->numberOfSeats = car.numberOfSeats;
    this->numberOfDoors = car.numberOfDoors;
}

Car::~Car()
{

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
