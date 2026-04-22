#include<iostream>
using namespace std;

class Sum {
public:
    Sum(int a,int b) {
        cout << "Sum = " << a+b;
    }
};

int main() {
    Sum s(5,7);
}