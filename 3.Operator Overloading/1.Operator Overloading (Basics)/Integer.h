//
// Created by qasim on 8/25/18.
//

#ifndef INC_8_COPY_CONSTRUCTOR_INTEGER_H
#define INC_8_COPY_CONSTRUCTOR_INTEGER_H


class Integer {
    int *pint;
public:
    Integer();//constructor
    Integer(int i);//parameterized constructor
    Integer(const Integer &obj);//copy constructor
    int getvalue()const;
    void setvalue(int i);
    ~Integer();//destructor
    Integer operator +(const Integer &);//add
    Integer & operator ++();//pre
    Integer operator ++(int);//post
};


#endif //INC_8_COPY_CONSTRUCTOR_INTEGER_H
