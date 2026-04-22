#include<iostream>
using namespace std;

class Employee {
    int id;
    string name;
public:
    void input() {
        cin >> id >> name;
    }
    void display() {
        cout << id << endl << name;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
}