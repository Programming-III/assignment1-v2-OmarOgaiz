#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int id;
public:
Person (){
    name = "null";
    id = 0;
}
    Person(string n, int i) {
        name = n;
        id = i;
    }
    // destructor 
    ~Person () {}


    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Student : public Person {
private:
    int Yearlevel;
    string major;
public:
 Student (){
    Yearlevel = 1 ; 
    major = "Not Found";
 }
    Student(string n, int i, int y, string m) : Person(n, i) {
        Yearlevel = y;
        major = m;
    }
    ~Student {}


    void display() {
        Person::display();
        cout << "Year Level: " << Yearlevel << ", Major: " << major << endl;
    }
};

class Instructor : public Person {
private:
    string department;
    int experienceyears;
public:
Instructor (){
    department = "Unknown";
    experienceyears = 0 ;
}
    Instructor(string n, int i, string d, int e) : Person(n, i) {
        department = d;
        experienceyears = e;
    }
    // destructor 
    ~Instructor {}

    void display() {
        Person::display();
        cout << "Department: " << department << ", Experience Years: " << experienceyears << endl;
    }
};

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
};

int main() {
    Course course("Introduction to Programming", "CS101", 3);
    Student s("Omar Nabil", 2202, 2, "Informatics");
    Instructor inst("Dr. Lina Khaled", 1001, "Computer Science", 5);

    course.addStudent(s);
    course.display();

    cout << endl;
    inst.display();
    s.display();

    return 0;
}











// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
