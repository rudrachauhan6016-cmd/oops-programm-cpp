// Write a program to demonstrate dynamic binding.
#include<iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A";
    }
};

class B : public A {
public:
    void show() {
        cout << "Class B";
    }
};

int main() {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->show();
    return 0;
}