//
// Created by qasim on 8/12/18.
//

#include "Student.h"//linking Student.h

Student::Student() {//constructor
    cout<<"\nStudent";
    name="";
    age=0;
    points=0;
}
Student::Student(string name) {//constructor by arguments
    this->name=name;
    age=0;
    points=0;
}
Student::~Student() {//destructor
    cout<<"\n~Student";
}
//defining functions of Student class
void Student::setname(string name){
    this->name=name;
}
void Student::setage(int age){
    this->age=age;
}
void Student::setpoints(float points){
    this->points=points;
}
string Student::getname()const {//use const if function doesn't modifies, also remember const in header file
    return name;
}
int Student::getage()const {//use const if function doesn't modifies
    return age;
}
float Student::getpoints()const {//use const if function doesn't modifies
    return points;
}


