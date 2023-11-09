#include "Dessert.h"

Dessert::Dessert()
{
}

Dessert::Dessert(const string& type, int calories, int sugarContent, const string& ingredients) :
	Food(type, calories), sugarContent(sugarContent), ingredients(ingredients)
{
}

void Dessert::input()
{
	Food::input();
	cout << "Input sugar content: ";
	cin >> this->sugarContent;
	cout << "Input ingridients: ";
	cin >> this->ingredients;
}

void const Dessert::print()
{
	Food::print();
    cout << "Sugar content: " << this->sugarContent << endl;
    cout << "Ingridients: " << this->ingredients << endl;
}

Dessert::~Dessert()
{

}
