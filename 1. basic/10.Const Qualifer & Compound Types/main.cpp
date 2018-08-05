#include <iostream>
using namespace std;

void changeValue(const float * ptr){
//    *ptr=700;//can't change value
}
void changeAddress(const float *const ptr,float *new_ptr){
    std::cout << "\nptr:" << ptr<<std::endl;
//    ptr=new_ptr;//can't change address
    std::cout << "ptr:" << ptr<<std::endl;

}
void getref( float &ref){

}
void const_getref(const float &ref){

}
int main() {
    const float PI =3.14159;
    const float *value_const_ptr=&PI;//cannot change pointer value
    const float *const total_const_ptr=&PI;//cannot change pointer value & pointer address

    float x=12;
    float *const address_const_ptr=&x;//cannot change pointer address

    float new_x=45;
    float &new_xref=new_x;
    float * new_ptr=&new_x;

    std::cout << "\n*address_const_ptr:" << *address_const_ptr<<std::endl;
    std::cout << "address_const_ptr:" << address_const_ptr<<std::endl;
    std::cout << "*value_const_ptr:" << *value_const_ptr <<std::endl;
    std::cout << "value_const_ptr:" << value_const_ptr <<std::endl;
    std::cout << "PI:" << PI <<std::endl;
    std::cout << "x:" << x <<std::endl;


//    address_const_ptr=new_ptr;//cannot change address
    *address_const_ptr=*new_ptr;//change value

    value_const_ptr=new_ptr;//change address
//    *value_const_ptr=*new_ptr;//cannot change value

//    total_const_ptr=new_ptr;//can't change address
//    *total_const_ptr=*new_ptr;//can't change value

    std::cout << "\n*address_const_ptr:" << *address_const_ptr<<std::endl;
    std::cout << "address_const_ptr:" << address_const_ptr<<std::endl;
    std::cout << "*value_const_ptr:" << *value_const_ptr <<std::endl;
    std::cout << "value_const_ptr:" << value_const_ptr <<std::endl;
    std::cout << "PI:" << PI <<std::endl;
    std::cout << "x:" << x <<std::endl;


    changeValue(value_const_ptr);
    changeAddress(value_const_ptr,new_ptr);

    changeValue(address_const_ptr);
    changeAddress(address_const_ptr,new_ptr);

    getref(x);
//    getref(1);//can't pass l-values
    const_getref(x);
    const_getref(1);



    std::cout << "\n*address_const_ptr:" << *address_const_ptr<<std::endl;
    std::cout << "address_const_ptr:" << address_const_ptr<<std::endl;
    std::cout << "*value_const_ptr:" << *value_const_ptr <<std::endl;
    std::cout << "value_const_ptr:" << value_const_ptr <<std::endl;
    std::cout << "PI:" << PI <<std::endl;
    std::cout << "x:" << x <<std::endl;


    return 0;
}