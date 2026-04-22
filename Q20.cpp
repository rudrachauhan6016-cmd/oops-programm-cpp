#include<iostream>
using namespace std;

class Rectangle {
    int l,b;
public:
    void input() {
        cin >> l >> b;
    }
    void area() {
        cout << "Area = " << l*b;
    }
};

int main() {
    Rectangle r;
    r.input();
    r.area();
}