// Write a program to demonstrate runtime polymorphism.
#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}