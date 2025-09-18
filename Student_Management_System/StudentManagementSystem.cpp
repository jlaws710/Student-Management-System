#include "StudentManagementSystem.h"
#include <iostream>
#include <iomanip>
#include <limits> // for numeric_limits
using namespace std;

void StudentManagementSystem::addStudent() {
    int id, attendance;
    string name;
    float grade;

    cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    // Grade validation
    cout << "Enter Grade: ";
    while (!(cin >> grade)) {
        cout << "Invalid input. Please enter a numeric grade: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Attendance validation
    cout << "Enter Attendance: ";
    while (!(cin >> attendance)) {
        cout << "Invalid input. Please enter a numeric attendance: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    students.push_back(Student(id, name, grade, attendance));
    cout << "Student added successfully!\n";
}

void StudentManagementSystem::displayStudents() {
    if (students.empty()) {
        cout << "No student records found.\n";
        return;
    }

    cout << left << setw(5) << "ID"
        << setw(20) << "Name"
        << setw(10) << "Grade"
        << setw(10) << "Attendance" << endl;
    cout << string(50, '-') << endl;

    for (const auto& student : students) {
        student.display();
    }
}

void StudentManagementSystem::searchStudent() {
    int id;
    cout << "Enter Student ID to search: ";
    cin >> id;

    for (const auto& student : students) {
        if (student.getId() == id) {
            cout << "Student Found:\n";
            student.display();
            return;
        }
    }
    cout << "Student not found.\n";
}

void StudentManagementSystem::updateStudent() {
    int id;
    cout << "Enter Student ID to update: ";
    cin >> id;

    for (auto& student : students) {
        if (student.getId() == id) {
            float grade;
            int attendance;

            // Grade validation
            cout << "Enter new grade: ";
            while (!(cin >> grade)) {
                cout << "Invalid input. Please enter a numeric grade: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Attendance validation
            cout << "Enter new attendance: ";
            while (!(cin >> attendance)) {
                cout << "Invalid input. Please enter a numeric attendance: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            student.setGrade(grade);
            student.setAttendance(attendance);

            cout << "Student updated successfully!\n";
            return;
        }
    }
    cout << "Student not found.\n";
}
