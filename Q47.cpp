// Write a program to demonstrate static member function.
#include<iostream>
using namespace std;

class Demo {
public:
    static void show() {
        cout << "Static Function";
    }
};

int main() {
    Demo::show();
    return 0;
}