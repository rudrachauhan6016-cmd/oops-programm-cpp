//Write a program to calculate average using class.
#include<iostream>
using namespace std;

class Average {
    int a,b,c;
public:
    void input() {
        cin >> a >> b >> c;
    }
    void avg() {
        cout << (a+b+c)/3.0;
    }
};

int main() {
    Average x;
    x.input();
    x.avg();
}
