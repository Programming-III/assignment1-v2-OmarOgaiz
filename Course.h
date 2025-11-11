#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here
class Course {
private:
    string coursename;
    string coursecode;
    int Maxstudents;
    Student* students;
    int currentstudent;
public:
    Course(string cn, string cc, int ms) {
        coursename = cn;
        coursecode = cc;
        Maxstudents = ms;
        students = new Student[Maxstudents];
        currentstudent = 0;
    }

    ~Course() {
        delete[] students;
    }
 bool addStudent(const Student& s) {
        if (currentstudent < Maxstudents) {
            students[currentstudent++] = s;
            return true;
        } else {
            return false;
        }
    }

    void display() {
        cout << "Course Name: " << coursename << ", Course Code: " << coursecode << endl;
        cout << "Enrolled Students:" << endl;
        for (int i = 0; i < currentstudent; i++) {
            students[i].display();
        }
    }













#endif
