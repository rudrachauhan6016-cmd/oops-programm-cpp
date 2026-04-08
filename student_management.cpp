#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ================= CLASS =================
class Student {
private:
    int id;
    string name;
    float marks;

public:
    Student() {
        id = 0;
        name = "Unknown";
        marks = 0;
    }

    Student(int i, string n, float m) {
        id = i;
        name = n;
        marks = m;
    }

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << " Marks: " << marks << endl;
    }

    // Operator Overloading
    bool operator>(Student s) {
        return marks > s.marks;
    }

    int getId() { return id; }
};

// ================= INHERITANCE =================
class Graduate : public Student {
private:
    string degree;

public:
    void inputGraduate() {
        input();
        cout << "Enter Degree: ";
        cin >> degree;
    }

    void displayGraduate() {
        display();
        cout << "Degree: " << degree << endl;
    }
};

// ================= LINKED LIST =================
struct Node {
    Student data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insert(Student s) {
        Node* newNode = new Node;
        newNode->data = s;
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            temp->data.display();
            temp = temp->next;
        }
    }

    void deleteById(int id) {
        Node *temp = head, *prev = NULL;

        while (temp != NULL && temp->data.getId() != id) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Not found\n";
            return;
        }

        if (prev == NULL)
            head = temp->next;
        else
            prev->next = temp->next;

        delete temp;
        cout << "Deleted\n";
    }
};

// ================= FILE HANDLING =================
void saveToFile(Student s) {
    ofstream file("students.txt", ios::app);
    file << s.getId() << " Saved\n";
    file.close();
}

// ================= MAIN MENU =================
int main() {
    LinkedList list;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Delete Student\n";
        cout << "4. Save Dummy Student to File\n";
        cout << "5. Graduate Student\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Student s;
            s.input();
            list.insert(s);
            break;
        }
        case 2:
            list.display();
            break;

        case 3: {
            int id;
            cout << "Enter ID to delete: ";
            cin >> id;
            list.deleteById(id);
            break;
        }

        case 4: {
            Student s(1, "Test", 90);
            saveToFile(s);
            break;
        }

        case 5: {
            Graduate g;
            g.inputGraduate();
            g.displayGraduate();
            break;
        }

        case 0:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 0);

    return 0;
}