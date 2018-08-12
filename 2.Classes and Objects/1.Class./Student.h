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
    void setname(string name);
    void setage(int age);
    void setpoints(float points);

    string getname();
    int getage();
    float getpoints();



};


#endif //INC_1_CLASS_CAR_H
