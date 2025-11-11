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














#endif
