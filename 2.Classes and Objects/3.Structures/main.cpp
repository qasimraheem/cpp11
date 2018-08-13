#include <iostream>
#include <string>
using namespace std;

struct student{//structure
    string name;//structure attributes
    int age;
    float points;
};

void compareStudents(student x,student y){//function that takes structure as arguments
    char ch;
    cout<<x.name<<"\t\t"<<y.name<<endl;
    x.age>y.age?ch='>':ch='<';
    cout<<x.age<<"\t"<<ch<<"\t"<<y.age<<endl;
    x.points>y.points?ch='>':ch='<';
    cout<<x.points<<"\t"<<ch<<"\t"<<y.points<<endl;

}
int main() {
    student s1,s2;//objects of student s1 s2
    s1.name="qasim";//initializing s1
    s1.age=19;
    s1.points=99.99;

    s2.name="hamza";//initializing s2
    s2.age=25;
    s2.points=75.54;

    compareStudents(s1,s2);//comparing 2 students
    return 0;
}