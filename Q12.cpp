// 12. Write a program to find the largest of four numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, max;
    cin >> a >> b >> c >> d;

    max = a;

    if(b > max) max = b;
    if(c > max) max = c;
    if(d > max) max = d;

    cout << max;

    return 0;
}