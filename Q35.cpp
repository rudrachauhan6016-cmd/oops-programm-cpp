// Write a program to demonstrate parameterized constructor.
#include<iostream>
using namespace std;

class Number {
public:
    Number(int x) {
        cout << "Value = " << x;
    }
};

int main() {
    Number n(100);
    return 0;
}