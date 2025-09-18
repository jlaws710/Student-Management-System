#include "StudentManagementSystem.h"
#include <iostream>
using namespace std;

int main() {
    StudentManagementSystem sms;
    int choice;

    do {
        cout << "\n===== Student Management System =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Update Student\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: sms.addStudent(); break;
        case 2: sms.displayStudents(); break;
        case 3: sms.searchStudent(); break;
        case 4: sms.updateStudent(); break;
        case 5: cout << "Exiting...\n"; break;
        default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
