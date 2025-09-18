#ifndef STUDENT_MANAGEMENT_SYSTEM_H
#define STUDENT_MANAGEMENT_SYSTEM_H

#include "Student.h"
#include <vector>

class StudentManagementSystem {
private:
    std::vector<Student> students;

public:
    void addStudent();
    void displayStudents();
    void searchStudent();
    void updateStudent();
};

#endif
