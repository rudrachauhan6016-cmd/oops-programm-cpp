// Write a program to demonstrate hierarchical inheritance.
#include<iostream>
using namespace std;

class Parent {
public:
    void display() {
        cout << "Parent Class" << endl;
    }
};

class Child1 : public Parent {
};

class Child2 : public Parent {
};

int main() {
    Child1 a;
    Child2 b;
    a.display();
    b.display();
    return 0;
}