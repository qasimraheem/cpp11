//
// Created by qasim on 8/31/18.
//

#include "Integer.h"
Integer::Integer() {
    pint=new int(0);
}
Integer::Integer(int i) {
    pint=new int(i);
}
Integer::Integer(const Integer &obj) {
    pint=new int(*obj.pint);
}

Integer::Integer(Integer &&obj) {
    pint=obj.pint;
    obj.pint= nullptr;
}
Integer::~Integer() {
    delete pint;
}

int Integer::getvalue() const {
    return *pint;
}
void Integer::setvalue(int i) {
    *this->pint = i;
}

Integer Integer::operator+(const Integer &obj) {
    Integer temp;
    *temp.pint=*pint-*obj.pint;
    return temp;
}
