#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a person\n";
    }
};

class Student : public Person {
public:
    void study() {
        cout << "I study C++\n";
    }
};

int main() {
    Student s;
    s.show();
    s.study();
}
