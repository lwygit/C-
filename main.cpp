#include <iostream>
#include "Person.h"
#include "Person.cpp"
using namespace std;

int main() {
    Person person;
    person.setId(1);
    Person person1;
    person1.getId();
    Person person2(11);
    person2.printInfo();
    Person person3;
    int id,age;
    cout<<"ÇëÊäÈëid:";
    cin>>id;
    person3.setId(id);
    cout<<"ÇëÊäÈëage:";
    cin>>age;
    person3.setAge(age);;
    person3.printInfo();
    return 0;
}
