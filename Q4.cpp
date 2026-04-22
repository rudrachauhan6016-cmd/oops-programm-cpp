// 4. Write a program to find sum of first n natural numbers
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, i;
    cin >> n;

    for(i = 1; i <= n; i++)
        sum += i;

    cout << sum;

    return 0;
}