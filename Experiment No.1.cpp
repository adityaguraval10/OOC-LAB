

#include <iostream>

using namespace std;

class Student
{
private:
    char name[30];
    int rollNo;
    float marks;

public:
    void inputDetails()
    {
        cout << "Enter Student Name: ";
        cin >>  name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() const
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name     : " << name << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Marks    : " << marks << endl;
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}

