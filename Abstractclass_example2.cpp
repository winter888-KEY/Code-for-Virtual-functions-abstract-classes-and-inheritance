#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() = 0;
};

class Car : public Vehicle {
public:
    void start() {
        cout << "Car starts with key\n";
    }
};

class Bike : public Vehicle {
public:
    void start() {
        cout << "Bike starts with button\n";
    }
};

int main() {
    Car c;
    Bike b;
    c.start();
    b.start();
}
