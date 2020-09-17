#include <iostream>
using namespace std;

#include "Student.hpp"
#include "Person.hpp"

int main() {

    Person one;

    cout<<one.getName()<<" "<<one.getAge()<<endl;
    one.setName("Bob");
    one.setAge(17);
    cout<<one.getName()<<" "<<one.getAge()<<endl;

    Person two("Sue",23);
    cout<<two.getName()<<" "<<two.getAge()<<endl;

    Student three;
    cout<<"\n"<<three.getName()<<" "<<three.getAge()<<" "<<three.getGpa()<<endl;
    three.setName("Carl");
    three.setAge(52);
    three.setGpa(3.5);
    
    cout<<"\n"<<three.getName()<<" "<<three.getAge()<<" "<<three.getGpa()<<endl;

    Student four("Mary", 32, 4.0);
    cout<<"\n"<<four.getName()<<" "<<four.getAge()<<" "<<four.getGpa()<<endl;

    cout<<endl<<endl<<endl;

    one.printMe();
    two.printMe();
    three.printMe();
    four.printMe();



    return 0;
}
