#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person {
private:
    string name;
    int id;
public:
    Person(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};
//#write Person class here












#endif
