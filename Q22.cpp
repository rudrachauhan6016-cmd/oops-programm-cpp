#include<iostream>
using namespace std;

class Largest {
    int a,b,c;
public:
    void input() {
        cin >> a >> b >> c;
    }
    void find() {
        if(a>b && a>c)
            cout << a;
        else if(b>c)
            cout << b;
        else
            cout << c;
    }
};

int main() {
    Largest l;
    l.input();
    l.find();
}