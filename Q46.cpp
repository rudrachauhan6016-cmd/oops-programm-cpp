// Write a program to demonstrate static data member.
#include<iostream>
using namespace std;

class Demo {
public:
    static int count;
};

int Demo::count = 10;

int main() {
    cout << Demo::count;
    return 0;
}