#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    void input() {
        cout << "Enter student name: ";
        cin.ignore(); // To clear the input buffer
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Information:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nEntering details for student " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\nDisplaying student information:\n";
    for (int i = 0; i < n; ++i) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].display();
    }

    delete[] students;
    return 0;
}