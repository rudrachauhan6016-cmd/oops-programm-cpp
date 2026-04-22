// Write a program to create Library Book issue system.
#include<iostream>
using namespace std;

class Library {
private:
    int books;

public:
    Library() {
        books = 10;
    }

    void issueBook() {
        if(books > 0) {
            books--;
            cout << "Book Issued\n";
        }
    }

    void available() {
        cout << "Books Left = " << books;
    }
};

int main() {
    Library l;
    l.issueBook();
    l.available();
    return 0;
}