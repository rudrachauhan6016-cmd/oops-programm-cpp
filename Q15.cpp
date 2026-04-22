//Write a program to display marks of student using class.
#include<iostream>
using namespace std;

class Marks {
    int m1,m2,m3;
public:
    void input() {
        cin >> m1 >> m2 >> m3;
    }
    void total() {
        cout << "Total = " << m1+m2+m3;
    }
};

int main() {
    Marks m;
    m.input();
    m.total();

    return 0;
}