#pragma once
#include "Food.h"
class Fruit : public Food
{
private:
	string vitamins;
	string taste;
public:
	Fruit();
	Fruit(const string& type, int calories, const string& vitamins, const string& taste);
	void input() override;
    void const print() override;
    ~Fruit();
    string getVitamins() const;
    string getTaste() const;
    void setVitamins(const string &newVitamins);
};

