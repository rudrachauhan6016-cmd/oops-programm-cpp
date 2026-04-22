// Write a program to demonstrate copy constructor.
#include<iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
    }

    Demo(Demo &obj) {
        x = obj.x;
    }
};

int main() {
    Demo d1(10);
    Demo d2 = d1;

    cout << d2.x;
    return 0;
}