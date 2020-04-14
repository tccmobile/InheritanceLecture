//
// Created by William Smith on 4/14/20.
//

#include "Person.h"
#include <iostream>
using namespace std;

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

Person::Person() {
    Person ::name = "none";
    Person :: age = 42;
}

Person::Person(const string &name, int age) : name(name), age(age) {}

void Person::printMe() {

    cout<<"My name is "<<name<<" and my age is "<<age<<endl;

}
