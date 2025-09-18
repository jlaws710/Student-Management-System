#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float grade;
    int attendance;

public:
    Student(int id, string name, float grade, int attendance);

    int getId() const;
    string getName() const;
    float getGrade() const;
    int getAttendance() const;

    void setGrade(float g);
    void setAttendance(int a);

    void display() const;
};

#endif
