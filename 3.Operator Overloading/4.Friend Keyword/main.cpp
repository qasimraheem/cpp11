#include <iostream>
#include "Integer.h"
using namespace std;

Integer operator +(int x,const Integer &obj){ //int + Integer
    Integer temp;
    temp.setvalue(x+obj.getvalue());
    return temp;
}
std::ostream & operator << (std::ostream &out,const Integer &obj){//cout <<
    out<<obj.getvalue();
    return out;
}
std::istream &operator >>(std::istream &input,Integer &obj){//cin >>
    int x;
    cout<<"Enter value:";
    input>>x;
    *obj.pint=x;
    return input;
}
int main() {
    Integer a(3), b(4);
    Integer sum=4+a;
    std::cout<<sum<<std::endl;
    cin>>b;
    cout<<b<<endl;
    Printer p;
    p.printtext("hello");
    return 0;
}