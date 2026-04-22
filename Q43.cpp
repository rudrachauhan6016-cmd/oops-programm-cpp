// Write a program to demonstrate function overriding.
#include<iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "Child Class";
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}