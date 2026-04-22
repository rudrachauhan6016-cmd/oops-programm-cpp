// Write a program to create a Bank Account system for deposit and withdrawal.
#include<iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount() {
        balance = 0;
    }

    void deposit(float amt) {
        balance += amt;
    }

    void withdraw(float amt) {
        if(amt <= balance)
            balance -= amt;
        else
            cout << "Insufficient Balance\n";
    }

    void showBalance() {
        cout << "Balance = " << balance;
    }
};

int main() {
    BankAccount b;
    b.deposit(5000);
    b.withdraw(2000);
    b.showBalance();
    return 0;
}