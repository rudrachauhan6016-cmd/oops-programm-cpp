#include<iostream>
using namespace std;

class Swap {
    int a,b;
public:
    void input() {
        cin >> a >> b;
    }
    void change() {
        int t=a;
        a=b;
        b=t;
    }
    void display() {
        cout << a << " " << b;
    }
};

int main() {
    Swap s;
    s.input();
    s.change();
    s.display();
}