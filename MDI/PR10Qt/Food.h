#pragma once
#include <iostream>
using namespace std;

class Food
{
private:
	string type;
	int calories;
public:
	Food();
	Food(const string& type, int calories);
	virtual void input();
    virtual const void print();
    ~Food();
    string getType() const;
    int getCalories() const;
};

