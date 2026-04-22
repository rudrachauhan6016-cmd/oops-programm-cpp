// Write a program to demonstrate friend function.
#include<iostream>
using namespace std;

class Demo {
private:
    int num = 50;

public:
    friend void show(Demo);
};

void show(Demo d) {
    cout << d.num;
}

int main() {
    Demo d;
    show(d);
    return 0;
}