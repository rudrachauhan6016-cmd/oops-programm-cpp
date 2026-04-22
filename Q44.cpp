// Write a program to demonstrate virtual function.
#include<iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base Class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived Class";
    }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}