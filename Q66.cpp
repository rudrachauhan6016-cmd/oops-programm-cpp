// Write a program to create Mobile Recharge system.
#include<iostream>
using namespace std;

class Recharge {
private:
    float balance;

public:
    Recharge() {
        balance = 0;
    }

    void addMoney(float amt) {
        balance += amt;
    }

    void show() {
        cout << "Recharge Balance = " << balance;
    }
};

int main() {
    Recharge r;
    r.addMoney(299);
    r.show();
    return 0;
}