// Write a program to calculate area of circle using constructor.
#include<iostream>
using namespace std;

class Circle {
public:
    Circle(float r) {
        cout << "Area = " << 3.14 * r * r;
    }
};

int main() {
    Circle c(5);
    return 0;
}