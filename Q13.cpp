//Write a program to demonstrate default constructor.
#include<iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Default Constructor Called";
    }
};

int main() {
    Demo d;
    return 0;
}