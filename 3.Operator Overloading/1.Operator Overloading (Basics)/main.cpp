#include <iostream>
#include "Integer.h"
using namespace std;

Integer operator -(const Integer a,const Integer b){
    Integer temp;
    temp.setvalue(a.getvalue()+b.getvalue());
    return temp;
}
int main() {
    Integer x(10);
    Integer y(x+5);//default copy constructor

    std::cout<<x.getvalue()<<endl;
    std::cout<<y.getvalue()<<endl;

    Integer sum=x+y;
    std::cout<<sum.getvalue()<<endl;

    Integer add=x-y;
    std::cout<<sum.getvalue()<<endl;

    return 0;
}