// Write a program to overload ++ operator.
#include<iostream>
using namespace std;

class Demo {
    int x;
public:
    void input(int a) {
        x = a;
    }

    void operator ++() {
        ++x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Demo d;
    d.input(5);
    ++d;
    d.show();
    return 0;
}