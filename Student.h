//
// Created by William Smith on 4/14/20.
//

#ifndef INHERITANCELECTURE_STUDENT_H
#define INHERITANCELECTURE_STUDENT_H


#include "Person.h"

class Student: public Person {
private:
    double gpa;
public:
    Student();

    Student(const string &name, int age, double gpa);

    double getGpa() const;

    void setGpa(double gpa);

    void printMe();
};


#endif //INHERITANCELECTURE_STUDENT_H
