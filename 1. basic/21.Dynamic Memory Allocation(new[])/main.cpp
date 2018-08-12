#include <iostream>
using namespace std;
void New(){
    int *p=new int(5);//dynamic array
    for(int i=0;i<5;i++){
        p[i]=i;
        cout<<"\n"<<p[i];
    }
    delete(p);
    p= nullptr;
}
int main() {
    New();

    int *p=new int[5];//real dynamic array by c++
    int *ptr=new int[7]{1,2,3,4,5,6,7};//initializing
    delete[](p);
    delete[](ptr);//remember to use delete[] for array
    return 0;
}