//
// Created by qasim on 8/30/18.
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
Integer::~Integer() {
    delete pint;
    pint= nullptr;
}

int Integer::getValue() const {
    return *pint;
}
void Integer::setValue(int i) {
    *pint=i;
}
Integer::Integer(Integer &&obj) {
    pint=obj.pint;
    obj.pint= nullptr;
}


bool Integer::operator==(const Integer &obj)const {
    return *pint==*obj.pint;
}
Integer &Integer::operator =(Integer &obj) {
    if(this != &obj){
        delete pint;
        pint=new int(*obj.pint);
    }
    return *this;
}
Integer &Integer::operator =(Integer &&obj) {
    if(this != &obj){
        delete pint;
        pint=obj.pint;
        obj.pint= nullptr;
    }
    return *this;
}

