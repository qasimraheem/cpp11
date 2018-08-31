//
// Created by qasim on 8/31/18.
//

#ifndef INC_5_SMART_POINTERS_INTEGER_H
#define INC_5_SMART_POINTERS_INTEGER_H


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
};


#endif //INC_5_SMART_POINTERS_INTEGER_H
