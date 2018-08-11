#include <iostream>

int main() {
    int *p=new int;//dynamic pointer
    *p=10;
    std::cout<<*p;
    delete(p);


    int *pa=new int(5);//dynamic array
    for(int i=0;i<5;i++){
        pa[i]=i;
        std::cout<<pa[i];
    }
    std::cout<<*pa;
    delete(pa);
    return 0;
}