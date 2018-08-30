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
    Integer y(x+5);//class member add operator overloading

    std::cout<<x.getvalue()<<endl;
    std::cout<<y.getvalue()<<endl;

    Integer sum=x+y;//class member add operator overloading
    std::cout<<sum.getvalue()<<endl;
    ++sum;//pre incrementation operator overloading
    std::cout<<sum.getvalue()<<endl;
    sum++;//post incrementation operator overloading
    std::cout<<sum.getvalue()<<endl;

    Integer add=x-y;//global subtract operator overloading
    std::cout<<sum.getvalue()<<endl;

    return 0;
}