// Write a program to demonstrate this pointer.
#include<iostream>
using namespace std;

class Demo {
    int x;
public:
    void setValue(int x) {
        this->x = x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Demo d;
    d.setValue(25);
    d.show();
    return 0;
}