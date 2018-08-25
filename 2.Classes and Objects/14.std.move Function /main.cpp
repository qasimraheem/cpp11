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
    std::cout<<x.getvalue()<<std::endl;

    Integer y(std::move(x));//std move
    std::cout<<y.getvalue()<<endl;

//    x.setvalue(add(x,y).getvalue());
//    std::cout<<x.getvalue()<<std::endl;

    return 0;
}