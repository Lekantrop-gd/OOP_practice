#pragma once
#include "Car.h"
#include "Bus.h"
#include "Vehicle.h"
#include "CustomVector.h"

Vehicle* lab5() {
    Vehicle* vehicles[2];
    int choice;

    for (short x = 0; x < 2; x++) {
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

    for (int x = 0; x < 2; x++) {
        vehicles[x]->beep();
    }

    cout << endl << endl;

    return *vehicles;
}

void lab6() {
    Vehicle *vehicles = lab5();

    CustomVector<Vehicle*> list;

    for (int x = 0; x < 2; x++) {
        list.push_back(vehicles[x]);
    }

    for (int x = 0; x < 2; x++) {
        list[x]->output();
        cout << endl;
    }

    for (int x = 0; x < list.getSize(); x++) {
        list[x]->output();
        cout << endl;
    }
}