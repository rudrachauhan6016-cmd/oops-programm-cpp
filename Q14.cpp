 //Write a program to demonstrate parameterized constructor.
#include<iostream>
using namespace std;

class Demo {
public:
    Demo(int x) {
        cout << "Value = " << x;
    }
};

int main() {
    Demo d(10);
}