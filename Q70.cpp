// Write a program to create Bus Ticket Booking system.
#include<iostream>
using namespace std;

class Ticket {
private:
    int seats;

public:
    Ticket() {
        seats = 40;
    }

    void book(int n) {
        if(n <= seats) {
            seats -= n;
            cout << "Booked\n";
        }
    }

    void left() {
        cout << "Seats Left = " << seats;
    }
};

int main() {
    Ticket t;
    t.book(5);
    t.left();
    return 0;
}