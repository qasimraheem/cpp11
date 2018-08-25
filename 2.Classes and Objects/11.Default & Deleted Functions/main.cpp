#include <iostream>
#include "Integer.h"

int main() {
    Integer x;
    Integer y(8);
    Integer z(9.9);//should not be allowed

//    //shallow copy
//    int *p1=new int(5);
//    int *p2=p1;
//
//    //deep copy
//    int *p3 = new int(*p1);
//    x=y;//also ca copy constructor
    std::cout<<x.getvalue()<<std::endl;//it prints the value but throw exception in debugging
    std::cout<<y.getvalue()<<std::endl;//it prints the value but throw exception in debugging
    std::cout<<z.getvalue()<<std::endl;//it prints the value but throw exception in debugging



    return 0;
}