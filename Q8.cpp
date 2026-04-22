// 8. Write a program to print table of a number
#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;

    for(i = 1; i <= 10; i++)
        cout << n << " x " << i << " = " << n * i << endl;

    return 0;
}