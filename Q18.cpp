// Write a program to calculate cube of a number using class.
#include<iostream>
using namespace std;

class Cube {
    int n;
public:
    void input() {
        cin >> n;
    }
    void show() {
        cout << n*n*n;
    }
};

int main() {
    Cube c;
    c.input();
    c.show();
    return 0;
}