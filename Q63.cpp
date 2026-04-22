// Write a program to create Student Report Card system.
#include<iostream>
using namespace std;

class ReportCard {
private:
    int m1,m2,m3;

public:
    void input() {
        cin >> m1 >> m2 >> m3;
    }

    void result() {
        cout << "Total = " << m1+m2+m3 << endl;
        cout << "Average = " << (m1+m2+m3)/3.0;
    }
};

int main() {
    ReportCard r;
    r.input();
    r.result();
    return 0;
}