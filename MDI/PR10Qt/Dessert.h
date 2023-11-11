#pragma once
#include "Food.h"
class Dessert : public Food
{
private:
	int sugarContent;
	string ingredients;
public:
	Dessert();
	Dessert(const string& type, int calories, int sugarContent, const string& ingredients);
	void input() override;
    void const print() override;
    ~Dessert();
    int getSugarContent() const;
    string getIngredients() const;
};
