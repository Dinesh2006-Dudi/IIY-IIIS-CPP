#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    // Virtual function
    virtual void start() {
        cout << "Starting a generic vehicle..." << endl;
    }
};

// Derived class 1
class Car : public Vehicle {
public:
    void start() override {
        cout << "Starting the car..." << endl;
    }
};

// Derived class 2
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Starting the bike..." << endl;
    }
};

int main() {
    Vehicle* v;   // Base class pointer

    Car c;
    Bike b;

    v = &c;
    v->start();   // Calls Car's version (runtime binding)

    v = &b;
    v->start();   // Calls Bike's version (runtime binding)

    return 0;
}

