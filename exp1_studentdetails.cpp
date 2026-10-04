#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollno;
    float marks;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student students[5];

    // Take input for all 5 students first
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].getDetails();
    }

    // Then print all 5 students, one by one
    cout << "\n----- Student Details -----\n";
    for (int i = 0; i < 5; i++) {
        cout << "Details for student " << i + 1 << ":" << endl;
        students[i].displayDetails();
        cout << "----------------------------" << endl;
    }

    return 0;
}