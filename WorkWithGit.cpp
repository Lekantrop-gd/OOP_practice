#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Vehicle.h"

int main()
{
    Vehicle* vehicles[5];
    int choice;

    for (short x = 0; x < 5; x++) {
        cout << "1. Car\n2. Bus\nChoose what the object do you want to create: "; cin >> choice;

        if (choice == 1) {
            vehicles[x] = new Car;
            vehicles[x]->input();
        }
        else {
            vehicles[x] = new Bus;
            vehicles[x]->input();
        }

        cout << endl;
    }

    for (int x = 0; x < 5; x++) {
        vehicles[x]->output();
    }

    for (int x = 0; x < 5; x++) {
        vehicles[x]->beep();
    }
}