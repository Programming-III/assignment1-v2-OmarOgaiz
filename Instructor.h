#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
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












#endif
