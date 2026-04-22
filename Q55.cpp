// Write a program to demonstrate pure virtual function.
#include<iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Circle Drawn";
    }
};

int main() {
    Circle c;
    c.draw();
    return 0;
}