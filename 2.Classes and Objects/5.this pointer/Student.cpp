//
// Created by qasim on 8/12/18.
//

#include "Student.h"//linking Student.h

Student::Student() {//constructor
    cout<<"\nStudent";
}
Student::Student(string name) {//constructor by arguments
    this->name=name;
}
Student::~Student() {//destructor
    cout<<"\n~Student";
}
//defining functions of Student class
void Student::setname(string name){
    this->name=name;//this is known as this pointer, which points to the class variables
}
void Student::setage(int age){
    this->age=age;//this is known as this pointer, which points to the class variables
}
void Student::setpoints(float points){
    this->points=points;//this is known as this pointer, which points to the class variables
}
string Student::getname(){
    return name;
}
int Student::getage(){
    return age;
}
float Student::getpoints(){
    return points;
}


