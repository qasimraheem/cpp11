//
// Created by qasim on 8/12/18.
//
#include <string>
#include <iostream>

using namespace std;

#ifndef INC_1_CLASS_CAR_H
#define INC_1_CLASS_CAR_H

class Student {//class name should start with uppercase letter

private://access level
    //variables/attributes
    string name;
    int age;
    float points;

public://access level
    //declaring functions/behaviours
    Student();//constructor
    Student(string name);//constructor by arguments
    ~Student();//destructor
    void setname(string name);
    void setage(int age);
    void setpoints(float points);

    string getname()const ;//use const if function doesn't modifies,
    int getage()const ;//use const if function doesn't modifies,
    float getpoints()const ;//use const if function doesn't modifies,



};


#endif //INC_1_CLASS_CAR_H
