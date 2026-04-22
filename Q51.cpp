// Write a program to overload + operator.
#include<iostream>
using namespace std;

class Demo {
    int x;
public:
    void input(int a) {
        x = a;
    }

    Demo operator +(Demo obj) {
        Demo temp;
        temp.x = x + obj.x;
        return temp;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Demo d1, d2, d3;
    d1.input(10);
    d2.input(20);
    d3 = d1 + d2;
    d3.show();
    return 0;
}