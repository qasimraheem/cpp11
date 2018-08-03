#include <iostream>

int main() {
    //scalar types
    int i{2};
    //float flo{i}; //cannot mix two datatypes
    int num{};
    float f{2};
    double d{};
    bool flag{};
    char ch{};
    unsigned int ui{};

    std::cout << "int i:" << i<<"\n int num:"<<num <<"\n float f:"<<f<<"\n double d:"<<d<<std::endl;

    //vector types

    int array[5]={1,2,3,4,5};

    return 0;
}