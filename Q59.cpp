// Write a program to demonstrate base class pointer.
#include<iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base Class";
    }
};

int main() {
    Base b;
    Base *ptr = &b;
    ptr->show();
    return 0;
}