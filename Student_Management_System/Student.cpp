#include "Student.h"
#include <iostream>
#include <iomanip>
using namespace std;

Student::Student(int id, string name, float grade, int attendance) {
    this->id = id;
    this->name = name;
    this->grade = grade;
    this->attendance = attendance;
}

int Student::getId() const { return id; }
string Student::getName() const { return name; }
float Student::getGrade() const { return grade; }
int Student::getAttendance() const { return attendance; }

void Student::setGrade(float g) { grade = g; }
void Student::setAttendance(int a) { attendance = a; }

void Student::display() const {
    cout << left << setw(5) << id
        << setw(20) << name
        << setw(10) << grade
        << setw(10) << attendance << endl;
}
