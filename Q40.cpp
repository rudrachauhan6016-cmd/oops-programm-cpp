// Write a program to display student name using getter and setter methods.
#include<iostream>
using namespace std;

class Student {
private:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    void getName() {
        cout << "Name = " << name;
    }
};

int main() {
    Student s;
    s.setName("Rahul");
    s.getName();
    return 0;
}