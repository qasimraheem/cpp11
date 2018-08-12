//
// Created by qasim on 8/12/18.
//

#include "Student.h"//linking Student.h


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
int Student::getage(){
    return age;
}
float Student::getpoints(){
    return points;
}