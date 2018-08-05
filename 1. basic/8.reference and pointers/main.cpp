#include <iostream>
using namespace std;
void print(int *ptr);
void print(int &ptr);


int main() {

    int x=5;
    print(x);
    print(&x);//for int * ptr


    int *px=&x;
    print(px);//for int * ptr

    int &refx=x;
    print(refx);
    print(nullptr);//for int * ptr




    return 0;
}
void print(int *ptr){
    if(ptr!= nullptr)//<- without access nullptr error
    cout<<"\n*ptr:"<<*ptr;
}
void print(int &ref){
    cout<<"\nref:"<<ref;
}
