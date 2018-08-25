#include <iostream>
#include "Integer.h"
using namespace std;
Integer add(const Integer &a, const Integer &b){
    Integer temp;
    temp.setvalue(a.getvalue()+b.getvalue());
    return temp;
}
int main() {
    Integer x(1);
    std::cout<<x.getvalue()<<std::endl;//it prints the value but throw exception in debugging

    Integer y(3);//default copy constructor
    std::cout<<y.getvalue()<<endl;//it prints the value but throw exception in debugging

    x.setvalue(add(x,y).getvalue());
    std::cout<<x.getvalue()<<std::endl;//it prints the value but throw exception in debugging

    return 0;
}