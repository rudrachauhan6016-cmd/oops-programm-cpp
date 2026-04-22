// Write a program to demonstrate compile time polymorphism.
#include<iostream>
using namespace std;

class Demo {
public:
    void show(int x) {
        cout << x << endl;
    }

    void show(string y) {
        cout << y;
    }
};

int main() {
    Demo d;
    d.show(10);
    d.show("Hello");
    return 0;
}