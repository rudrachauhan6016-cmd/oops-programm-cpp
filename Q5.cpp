// 5. Write a program to reverse a number
#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, rem;
    cin >> n;

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    cout << rev;

    return 0;
}