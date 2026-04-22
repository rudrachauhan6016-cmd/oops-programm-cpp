// Write a program to store employee salary using encapsulation.
#include<iostream>
using namespace std;

class Employee {
private:
    float salary;

public:
    void setSalary(float s) {
        salary = s;
    }

    void show() {
        cout << "Salary = " << salary;
    }
};

int main() {
    Employee e;
    e.setSalary(25000);
    e.show();
    return 0;
}