#include <iostream>
using namespace std;
int main() {
    int a=10;
    cout<<"a:"<<a<<endl<<"&a:"<<&a<<endl;
    int *ptr=&a;
    cout<<"\nptr:"<<ptr<<"\n*ptr:"<<*ptr<<"\n&ptr:"<<&ptr<<endl;
    ptr=nullptr;
    cout<<"\nptr:"<<ptr<<"\n*ptr:"<<*ptr<<"\n&ptr:"<<&ptr;//exception bad access
    *ptr=5;//error because ptr in null_ptr
    return 0;
}