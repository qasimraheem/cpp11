//
// Created by qasim on 8/14/18.
//

#ifndef INC_8_COPY_CONSTRUCTOR_INTEGER_H
#define INC_8_COPY_CONSTRUCTOR_INTEGER_H


class Integer {
    int *pint;
public:
    Integer();//constructor
    Integer(int i);//parameterized constructor
    int getvalue()const;
    void setvalue(int i);
    ~Integer();//destructor
};


#endif //INC_8_COPY_CONSTRUCTOR_INTEGER_H
