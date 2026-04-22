// Write a program to overload == operator.
#include<iostream>
using namespace std;

class Demo {
    int x;
public:
    void input(int a) {
        x = a;
    }

    bool operator ==(Demo obj) {
        return x == obj.x;
    }
};

int main() {
    Demo a, b;
    a.input(10);
    b.input(10);

    if(a == b)
        cout << "Equal";
    else
        cout << "Not Equal";

    return 0;
}