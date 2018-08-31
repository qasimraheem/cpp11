//
// Created by qasim on 8/31/18.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef INC_3_GLOBAL_OVERLOADS_INTEGER_H
#define INC_3_GLOBAL_OVERLOADS_INTEGER_H

class Integer {
private:
    int *pint;
public:
    Integer();
    Integer(int i);
    Integer(const Integer &obj);
    Integer(Integer &&obj);
    ~Integer();
    int getvalue()const;
    void setvalue(int i);

    Integer operator+(const Integer &obj);
    friend std::istream &operator >>(std::istream &input,Integer &obj);//friend keyword
    friend class printer;//friend class

};
class Printer{
private:string text;
public:
    void printtext(string text){
        this->text=text;
        cout<<this->text;
    };
};


#endif //INC_3_GLOBAL_OVERLOADS_INTEGER_H
