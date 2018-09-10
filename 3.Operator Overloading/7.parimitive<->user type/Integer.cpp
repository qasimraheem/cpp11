//
// Created by qasim on 8/14/18.
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

Integer::operator int() {
    return *pint;
}
