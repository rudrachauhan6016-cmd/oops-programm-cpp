//Write a porgram to store and display imformation of a student using class
#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
public:
    void input() {
        cin >> roll >> name;
    }
    void display() {
        cout << "Roll: " << roll << "\nName: " << name;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
}