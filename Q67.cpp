// Write a program to create Electricity Bill system.
#include<iostream>
using namespace std;

class Bill {
private:
    int units;

public:
    void input(int u) {
        units = u;
    }

    void calculate() {
        cout << "Bill = " << units * 6;
    }
};

int main() {
    Bill b;
    b.input(120);
    b.calculate();
    return 0;
}