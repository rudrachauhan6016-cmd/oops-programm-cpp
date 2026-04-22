// Write a program to demonstrate encapsulation using private data members.
#include<iostream>
using namespace std;

class Student {
private:
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    void getAge() {
        cout << "Age = " << age;
    }
};

int main() {
    Student s;
    s.setAge(18);
    s.getAge();
    return 0;
}