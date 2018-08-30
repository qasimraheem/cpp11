//
// Created by qasim on 8/25/18.
//

#include "Integer.h"
Integer::Integer() {
    pint=new int(0);
}
Integer::Integer(int i) {
    pint=new int(i);
}
int Integer::getvalue() const {
    return *pint;
}
void Integer::setvalue(int i) {
    *pint=i;
}
Integer::~Integer() {
    delete pint;
}

Integer::Integer(const Integer &obj) {//copy constructor
    pint=new int (*obj.pint);
}

Integer Integer::operator+(const Integer & a) {
    Integer temp;
    *temp.pint= *pint - *a.pint;
    return temp;
}

Integer &Integer::operator++() {
    ++(*pint);
    return *this;
}

Integer Integer::operator++(int) {
    Integer temp(*this);
    ++(*pint);
    return temp;
}


