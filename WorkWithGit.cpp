#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Vehicle.h"
#include "CustomVector.h"
#include <vector>
#include <algorithm>

using namespace std;

int randInt(int minInclusiveValue, int maxInclusiveValue) {
    return (minInclusiveValue + (rand() % maxInclusiveValue - minInclusiveValue + 1));
}

int randIntOdd(int minInclusiveValue, int maxInclusiveValue) {
    int randOdd = 0;

    do {
        randOdd = randInt(minInclusiveValue, maxInclusiveValue);
    } while (randOdd % 2 == 0);

    return randOdd;
}

int main()
{
    srand(time(nullptr));

#pragma region lab5
    //Vehicle* vehicles[2];
    //int choice;

    //for (short x = 0; x < 2; x++) {
    //    cout << "1. Car\n2. Bus\nChoose what the object do you want to create: "; cin >> choice;

    //    if (choice == 1) {
    //        vehicles[x] = new Car;
    //        vehicles[x]->input();
    //    }
    //    else {
    //        vehicles[x] = new Bus;
    //        vehicles[x]->input();
    //    }

    //    cout << endl;
    //}

    //for (int x = 0; x < 2; x++) {
    //    vehicles[x]->beep();
    //}

    //cout << endl << endl;

#pragma endregion (done)

#pragma region lab6

    //CustomVector<Vehicle*> list;
    //
    //for (int x = 0; x < 2; x++) {
    //    list.push_back(vehicles[x]);
    //}

    //for (int x = 0; x < 2; x++) {
    //    list[x]->output();
    //    cout << endl;
    //}

    //for (int x = 0; x < list.getSize(); x++) {
    //    list[x]->output();
    //    cout << endl;
    //}

#pragma endregion (done)

#pragma region lab7

#pragma region task2

    vector<int> vector1(10);
    vector<int> vector2(10);

    int element;

    vector1[0] = randIntOdd(1, 100);
    for (int x = 1; x < vector1.size(); ++x) {
        do {
            element = randIntOdd(1, 100);
        } while (element == vector1[x - 1] + 1);
        vector1[x] = element;
    }

    for (int element : vector1) {
        cout << element << ", ";
    }

    cout << endl;

    vector2[0] = randIntOdd(1, 100);
    for (auto iterator = vector2.begin(); iterator < vector2.end(); iterator++) {
        do {
            element = randIntOdd(1, 100);
        } while (element == int()(iterator - 1));
        *iterator = element;
    }

    for (int element : vector2) {
        cout << element << ", ";
    }

#pragma endregion (error) Fixed!

#pragma region task3

    vector<int> vector3(vector1.size() + vector2.size());

    sort(vector1.begin(), vector1.end());
    sort(vector2.begin(), vector2.end());
    merge(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), vector3.begin());

    for (int element : vector1) {
        cout << element << ", ";
    }

    cout << endl;

    for (int element : vector2) {
        cout << element << ", ";
    }

    cout << endl;

    for (int element : vector3) {
        cout << element << ", ";
    }

    cout << endl;

#pragma endregion (error)

#pragma region task4

    cout << endl;

    vector<Vehicle*> vehicles;
    int choice;

    for (short x = 0; x < 2; x++) {
        cout << "1. Car\n2. Bus\nChoose what the object do you want to create: "; cin >> choice;
        if (choice == 1) {
            vehicles.push_back(new Car);
            vehicles[x]->input();
        }
        else {
            vehicles.push_back(new Bus);
            vehicles[x]->input();
        }
        cout << endl;
    }   

#pragma endregion (done)

#pragma region task5

    vector<Vehicle*> vehicles1(vehicles.size());

    for (int x = 0; x < vehicles1.size(); x++) {
        vehicles1[x] = vehicles[x];
    }

    for (int x = 0; x < vehicles.size(); x++) {
        if (dynamic_cast<Car*>(vehicles[x])) {
            vehicles.erase(vehicles.begin() + x);
        }
    }

    for (int x = 0; x < vehicles1.size(); x++) {
        if (dynamic_cast<Bus*>(vehicles1[x])) {
            vehicles1.erase(vehicles1.begin() + x);
        }
    }

    for (Vehicle* vehicle : vehicles) {
        vehicle->output();
    }

    cout << endl;

    for (Vehicle* vehicle : vehicles1) {
        vehicle->output();
    }

#pragma endregion (done)

#pragma endregion
}