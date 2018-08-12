#include <iostream>

using namespace std;
int main() {
    int *a=new int[3]{1,2,3};//single dynamic array 1
    int *b=new int[3]{4,5,6};//single dynamic array 2
    int **p=new int *[2];//single dynamic pointer array (**)
    p[0]=a;//initializing to array 1 at index 0
    p[1]=b;//initializing to array 2 at index 1

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<"\n["<<i<<"]["<<j<<"]:"<<p[i][j];
        }
    }
    delete[](a);
    delete[](b);
    delete[](p);

    return 0;
}