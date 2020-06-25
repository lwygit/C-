//
// Created by jyh12 on 2020/6/25.
//

#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H


class Person {
private:
    int id;
    int age;
public:
    Person();
    Person(int id);
    int getId() const;
    void setId(int);
    int getAge() const;
    void setAge(int);
    void printInfo() const;
};


#endif //UNTITLED2_PERSON_H
