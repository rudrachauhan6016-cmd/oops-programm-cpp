//Write a program to check even or odd using class.
#include<iostream>
using namespace std;

class Number {
    int n;
public:
    void input() {
        cin >> n;
    }
    void check() {
        if(n%2==0)
            cout << "Even";
        else
            cout << "Odd";
    }
};

int main() {
    Number n;
    n.input();
    n.check();
    return 0;
}