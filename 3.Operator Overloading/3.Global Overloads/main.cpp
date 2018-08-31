#include <iostream>
#include "Integer.h"
using namespace std;

Integer operator +(int x,const Integer &obj){
    Integer temp;
    temp.setvalue(x+obj.getvalue());
    return temp;
}
std::ostream & operator << (std::ostream &out,const Integer &obj){
    out<<obj.getvalue();
    return out;
}
std::istream &operator >>(std::istream &input,Integer &obj){
    int x;
    cout<<"Enter value:";
    input>>x;
    obj.setvalue(x);
    return input;
}
int main() {
    Integer a(3), b(4);
    Integer sum=4+a;// + operator overloading
    std::cout<<sum<<std::endl;//<< operator overloading
    cin>>b;//>> operator overloading
    std::cout<<b<<std::endl;


    return 0;
}