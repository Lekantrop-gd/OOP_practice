#include "Fruit.h"

Fruit::Fruit()
{
}

Fruit::Fruit(const string& type, int calories, const string& vitamins, const string& taste) : 
	Food(type, calories), vitamins(vitamins), taste(taste)
{
}

void Fruit::input()
{
	Food::input();
	cout << "Input vitamins: ";
	cin >> this->vitamins;
	cout << "Input taste: ";
	cin >> this->taste;
}

void const Fruit::print()
{
	Food::print();
	cout << "Vitamins: " << this->vitamins << endl;
	cout << "Taste: " << this->taste << endl;
}

Fruit::~Fruit()
{
}
