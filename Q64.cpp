// Write a program to create Employee Salary system.
#include<iostream>
using namespace std;

class Employee {
private:
    float basic;

public:
    void input(float b) {
        basic = b;
    }

    void salary() {
        cout << "Net Salary = " << basic + (basic*0.2);
    }
};

int main() {
    Employee e;
    e.input(25000);
    e.salary();
    return 0;
}