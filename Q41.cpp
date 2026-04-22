// Write a program to demonstrate function overloading.
#include<iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) {
        cout << "Sum = " << a + b << endl;
    }

    void add(int a, int b, int c) {
        cout << "Sum = " << a + b + c;
    }
};

int main() {
    Demo d;
    d.add(5, 6);
    d.add(2, 3, 4);
    return 0;
}