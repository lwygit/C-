//
// Created by jyh12 on 2020/6/25.
//

#include "Person.h"

using namespace std;

Person::Person() {
    id = 0;
}

Person::Person(int id) : age(0) {
    this->id = id;
}

void Person::setId(int id) {
    this->id = id;
}

int Person::getId() const {
    return id;
}

void Person::setAge(int age) {
    this->age = age;
}

int Person::getAge() const {
    return age;
}

void Person::printInfo() const {
    cout << "id: " << id << endl;
    cout << "age: " << age << endl;

}


