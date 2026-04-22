// Write a program to create Shopping Cart system.
#include<iostream>
using namespace std;

class Cart {
private:
    int qty;
    float price;

public:
    void input() {
        cin >> qty >> price;
    }

    void total() {
        cout << "Total = " << qty * price;
    }
};

int main() {
    Cart c;
    c.input();
    c.total();
    return 0;
}