// 2. Write a program to find smallest number in user input
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if(a < b)
        cout << a;
    else
        cout << b;

    return 0;
}