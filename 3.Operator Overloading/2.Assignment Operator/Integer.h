//
// Created by qasim on 8/30/18.
//

#ifndef INC_2_ASSIGNMENT_OPERATOR_INTEGER_H
#define INC_2_ASSIGNMENT_OPERATOR_INTEGER_H


class Integer {
private:
    int *pint;
public:
    Integer();
    Integer(int i);
    Integer(const Integer& obj);
    Integer(Integer &&obj);
    ~Integer();
    int getValue()const;
    void setValue(int i);
    bool operator ==(const Integer &obj)const;
    Integer &operator =(Integer &obj);
    Integer &operator =(Integer &&obj);
};


#endif //INC_2_ASSIGNMENT_OPERATOR_INTEGER_H
