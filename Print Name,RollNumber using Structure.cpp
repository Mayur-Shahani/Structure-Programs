#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    Student student1;
    cout << "Enter name: ";
    cin >> student1.name;
    cout << "Enter roll number: ";
    cin >> student1.rollNumber;
    cout << "Enter marks: ";
    cin >> student1.marks;

    cout << "\nStudent Details:\n";
    cout << "Name: " << student1.name << endl;
    cout << "Roll Number: " << student1.rollNumber << endl;
    cout << "Marks: " << student1.marks << endl;

    return 0;
}

