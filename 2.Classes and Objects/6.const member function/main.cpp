#include <iostream>
#include "Student.h"//Student Class header file
using namespace std;
int main() {
    const Student s;//s is object of student
//    s.setname("qasim raheem");//not allowed because this is const, anything that modify object not allowed for const
//    s.setage(19);//set age//not allowed because this is const, anything that modify object not allowed for const
//    s.setpoints(99.99);//set points//not allowed because this is const, anything that modify object not allowed for const

    cout<<"\nname:"<<s.getname();//get name of student
    cout<<"\nage:"<<s.getage();//get age
    cout<<"\npoints:"<<s.getpoints();//get points

    Student s2("Ali");
    cout<<"\nname:"<<s2.getname();//get name of student
    return 0;
}