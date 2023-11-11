#include "Food.h"

Food::Food()
{
	
}

Food::Food(const string& type, int calories)
	: type(type), calories(calories)
{
}

string Food::getType() const
{
    return type;
}

int Food::getCalories() const
{
    return calories;
}

void Food::input()
{
	cout << endl;
	cout << "Input food type: ";
	cin >> this->type;
	cout << "Input food calories: ";
	cin >> this->calories;
}

void const Food::print()
{
	cout << endl;
	cout << "=== " << this->type << " ===\n";
	cout << "Calories: " << this->calories << endl;
}

Food::~Food()
{
	
}
