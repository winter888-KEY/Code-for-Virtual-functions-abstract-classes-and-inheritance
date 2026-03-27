#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of shape\n";
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = length × breadth\n";
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = π × r × r\n";
    }
};

int main() {
    Shape* s;
    Rectangle r;
    Circle c;

    s = &r;
    s->area();   // calls Rectangle function

    s = &c;
    s->area();   // calls Circle function

    return 0;
}
