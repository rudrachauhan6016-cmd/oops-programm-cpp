// Write a program to demonstrate multiple inheritance.
#include<iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "B" << endl;
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}