//
// Created by qasim on 8/25/18.
//
#include <iostream>
#include "Integer.h"
using namespace std;


Integer::Integer() {
    pint=new int(0);
    cout<<"Integer()"<<endl;

}
Integer::Integer(int i) {
    cout<<"Integer(int)"<<endl;
    pint=new int(i);
}
int Integer::getvalue() const {
    return *pint;
}
void Integer::setvalue(int i) {
    *pint=i;
}
Integer::~Integer() {
    cout<<"~Integer()"<<endl;
    delete pint;
}

Integer::Integer(const Integer &obj) {//copy constructor
    cout<<"Integer(integer &)"<<endl;
    pint=new int (*obj.pint);
}

Integer::Integer(Integer &&obj) {
    cout<<"Integer(Integer &&)"<<endl;
    pint=obj.pint;
    obj.pint= nullptr;
}
