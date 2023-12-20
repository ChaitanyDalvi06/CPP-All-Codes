#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int Rollno;
    string Name;
    string Class;
    char Division;
    float Marks;

public:
    void getStudentData() {
        cout << "Enter Roll Number: ";
        cin >> Rollno;

        cout << "Enter Class: ";
        cin >> Class;

        cout << "Enter Division: ";
        cin >> Division;

        cout << "Enter Marks: ";
        cin >> Marks;
    }

    void displayStudentData() {
        cout << "Roll Number: " << Rollno << endl;
        cout << "Name: " << Name << endl;
        cout << "Class: " << Class << endl;
        cout << "Division: " << Division << endl;
        cout << "Marks: " << Marks << endl;
    }
};

int main() {
    Student student;

    cout << "Enter Student Details:" << endl;
    student.getStudentData();

    cout << "\nStudent Details:" << endl;
    student.displayStudentData();

    return 0;
}
