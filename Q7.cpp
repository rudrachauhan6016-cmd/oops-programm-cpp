// 7. Write a program to find the power of a number
#include <iostream>
using namespace std;

int main() {
    int base, exp, i, power = 1;
    cin >> base >> exp;

    for(i = 1; i <= exp; i++)
        power *= base;

    cout << power;

    return 0;
}
