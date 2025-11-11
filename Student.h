#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class hclass Student : public Person {
private:
    int Yearlevel;
    string major;
public:
    Student(string n, int i, int y, string m) : Person(n, i) {
        Yearlevel = y;
        major = m;
    }

    void display() {
        Person::display();
        cout << "Year Level: " << Yearlevel << ", Major: " << major << endl;
    }
};ere













#endif
