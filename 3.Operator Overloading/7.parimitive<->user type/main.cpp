#include <iostream>
#include "Integer.h"

int main() {
    Integer x(5);
    x=3;//cannot use because of explicit
    int a=x;//convert implicit, not good, makes confusion
    std::cout<<x.getvalue();
    std::cout<<a;



    return 0;
}