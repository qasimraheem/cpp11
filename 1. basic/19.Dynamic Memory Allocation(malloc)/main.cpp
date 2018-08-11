#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main() {
    int *p = (int *)malloc(sizeof(int));//dynamic memory allocation to pointer (one dynamic pointer)
    *p=10;//initializing pointer
    cout<<*p;
    free(p);//always remember to free dynamic pointer

    //p contains invalid memory address
//    free(p);//gives error because trying to free invalid memory address
    p=NULL;//remember to initialize null to pointer
    free(p);//no error

    int *parray=(int *)malloc(5* sizeof(int));//(pointer of dynamic array)
    for(int i=0;i<5;i++){
        parray[i]=i;
        cout<<"\nparray:"<<parray[i];
    }
    free(parray);
    parray=NULL;


    int *co_arr=(int *)calloc(5/*number of items*/, sizeof(int));//(pointer of dynamic array) auto initialize to 0
    for(int i=0;i<5;i++){
        cout<<"\nco_arr"<<co_arr[i];//all are 0
    }
    for(int i=0;i<5;i++){
        co_arr[i]=i;//reinitializing
        cout<<"\nco_arr"<<co_arr[i];
    }
    free(co_arr);
    co_arr=NULL;

    return 0;
}