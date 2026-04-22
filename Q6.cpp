// 6. Write a program to count digits in a number
#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while(n != 0) {
        n /= 10;
        count++;
    }

    cout << count;

    return 0;
}