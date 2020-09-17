//
// Created by William Smith on 4/14/20.
//

#include "Student.hpp"
#include <iostream>
using namespace std;

double Student::getGpa() const {
    return gpa;
}

void Student::setGpa(double gpa) {
    Student::gpa = gpa;
}

Student::Student() {
    Person();
    Student::gpa = 3.0;
}

Student::Student(const string &name, int age, double gpa) : Person(name, age), gpa(gpa) {}

void Student::printMe()  {
    Person::printMe();
    cout<<"   and my gpa is "<<gpa<<endl;
}