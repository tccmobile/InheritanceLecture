//
// Created by William Smith on 4/14/20.
//

#ifndef INHERITANCELECTURE_PERSON_H
#define INHERITANCELECTURE_PERSON_H

#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
public:

    Person();

    Person(const string &name, int age);

    void printMe();

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);
};


#endif //INHERITANCELECTURE_PERSON_H
