//
// Created by qasim on 8/25/18.
//

#ifndef INC_8_COPY_CONSTRUCTOR_INTEGER_H
#define INC_8_COPY_CONSTRUCTOR_INTEGER_H


class Integer {
    int pint;
public:
    Integer()= default;//default constructor C++11
    Integer(int i);//parameterized constructor integer
    Integer(float f)= delete;//C++11
    int getvalue()const;
    void setvalue(int i);
    ~Integer();//destructor
};


#endif //INC_8_COPY_CONSTRUCTOR_INTEGER_H
