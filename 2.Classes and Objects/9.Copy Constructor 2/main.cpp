#include <iostream>
#include "Integer.h"

int main() {
    Integer x(10);
    Integer y(x);//default copy constructor

//    //shallow copy
//    int *p1=new int(5);
//    int *p2=p1;
//
//    //deep copy
//    int *p3 = new int(*p1);
//    x=y;//also ca copy constructor
    std::cout<<x.getvalue();//it prints the value but throw exception in debugging
    std::cout<<y.getvalue();//it prints the value but throw exception in debugging



    return 0;
}