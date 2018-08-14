//
// Created by qasim on 8/12/18.
//

#include "Student.h"//linking Student.h
int Student::studentcount=0;//initilizing static as global
Student::Student() {//constructor
    cout<<"\nStudent";
    name="";
    age=0;
    points=0;
    studentcount++;//increment to student when constructed
}
Student::Student(string name) {//constructor by arguments
    studentcount++;//increment to student when constructed
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
string Student::getname(){
    return name;
}
int Student::getstudentcount(){
    return studentcount;
}
int Student::getage(){
    return age;
}
float Student::getpoints(){
    return points;
}


