#include <iostream>
#include "Integer.h"

int main() {
    Integer x(10);
    Integer y(x);//default copy constructor
    std::cout<<x.getvalue();//it prints the value but throw exception in debugging
    std::cout<<y.getvalue();//it prints the value but throw exception in debugging



    return 0;
}