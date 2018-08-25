//
// Created by qasim on 8/25/18.
//

#include "Student.h"//linking Student.h

Student::Student():Student(0){//constructor
    cout<<"\nStudent";
}
Student::Student(string name):Student(name,0,0.0) {//constructor by arguments://call to delegating constructor c++11

}
Student::Student(int age):Student("",age,0.0){//constructor by arguments://call to delegating constructor

}
Student::Student(float points):Student("",0,points) {//constructor by arguments://call to delegating constructor

}
Student::Student(string name, int age):Student(name,age,0) {//constructor by arguments://call to delegating constructor

}

Student::Student(string name, float points):Student(name,0,points){//constructor by arguments://call to delegating constructor

}

Student::Student(int age, float points):Student("",age,points) {//constructor by arguments://call to delegating constructor

}
Student::Student(string name,int age,float points){///delegating constructor
    this->name=name;
    this->age=age;
    this->points=points;
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
int Student::getage(){
    return age;
}
float Student::getpoints(){
    return points;
}




