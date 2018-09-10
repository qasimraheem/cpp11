#include <iostream>
using namespace std;
int main() {
    int a=2;
    float b=5.5;
    b=(float)5/a;//c style cast, not use in cpp
    cout<<b;
    float f= static_cast<float>(a);//check the casting in valid or not
    char *p= reinterpret_cast<char*>(&a);//always convert force
    const int c=5;
    int *d=const_cast<int*>(&c);

    return 0;
}