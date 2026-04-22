// Write a program to create ATM system.
#include<iostream>
using namespace std;

class ATM {
private:
    int pin;
    float balance;

public:
    ATM() {
        pin = 1234;
        balance = 10000;
    }

    void checkPin(int p) {
        if(p == pin)
            cout << "Access Granted\n";
        else
            cout << "Wrong PIN\n";
    }

    void showBalance() {
        cout << "Balance = " << balance;
    }
};

int main() {
    ATM a;
    a.checkPin(1234);
    a.showBalance();
    return 0;
}