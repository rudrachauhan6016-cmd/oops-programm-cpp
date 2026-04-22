// Write a program to create Hospital Patient Record system.
#include<iostream>
using namespace std;

class Patient {
private:
    string name;
    int age;

public:
    void input() {
        cin >> name >> age;
    }

    void show() {
        cout << name << endl << age;
    }
};

int main() {
    Patient p;
    p.input();
    p.show();
    return 0;
}