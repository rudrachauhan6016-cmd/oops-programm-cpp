// Write a program to overload - operator.
#include<iostream>
using namespace std;

class Demo {
    int x;
public:
    void input(int a) {
        x = a;
    }

    Demo operator -(Demo obj) {
        Demo temp;
        temp.x = x - obj.x;
        return temp;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Demo a, b, c;
    a.input(30);
    b.input(10);
    c = a - b;
    c.show();
    return 0;
}