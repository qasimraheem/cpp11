#include <iostream>
#include <memory>
#include "Integer.h"
using namespace std;

int main() {
    //unique pointer
    unique_ptr<Integer> p(new Integer);//unique pointer can"t copy
    (*p).setvalue(3);
    unique_ptr<Integer> a(new Integer);
    //a=p;
    a=move(p);//can only move
    cout<<(*a).getvalue()<<endl;

    //shared pointer
    shared_ptr<Integer> x(new Integer);//shared pointers pass by copy
    (*x).setvalue(4);
    cout<<(*x).getvalue()<<endl;
    shared_ptr<Integer> y(new Integer);
    y=x;
    cout<<(*y).getvalue()<<endl;

    return 0;
}