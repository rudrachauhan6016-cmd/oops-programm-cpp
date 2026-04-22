// 9. Write a program to check the number is perfect
#include <iostream>
using namespace std;

int main() {
    int n, i, sum = 0;
    cin >> n;

    for(i = 1; i < n; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        cout << "Perfect Number";
    else
        cout << "Not Perfect Number";

    return 0;
}