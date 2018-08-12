#include <iostream>
#include "Student.h"//Student Class header file
using namespace std;
int main() {
    Student s;//s is object of student
    s.setname("qasim raheem");//initializing name of s by passing through parameters
    s.setage(19);//set age
    s.setpoints(99.99);//set points

    cout<<"\nname:"<<s.getname();//get name of student
    cout<<"\nage:"<<s.getage();//get age
    cout<<"\npoints:"<<s.getpoints();//get points

    Student s2("Ali");
    cout<<"\nname:"<<s2.getname();//get name of student
    return 0;
}