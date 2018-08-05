#include <iostream>
using namespace std;
//dec
int add(int *a,int *b);
void addval(int *a, int *b, int *result);
void swap(int *a, int *b);
void factorial(int *a, int *result);



int main() {

    int a=10;
    int b=20;
    int* pa=&a,* pb=&b;
    int result=0;
    int * presult=&result;


    *presult=add(pa,pb);
    cout<<"\na+b:"<<*presult;


    addval(pa,pb,presult);
    cout<<"\na+b:"<<*presult;

    factorial(pa,presult);
    cout<<"\nfactorial:"<<*presult;

    pa= nullptr,pb= nullptr,presult=nullptr;
    return 0;
}

//defination
int add(int *a,int *b){

    int result{0};
    int *ptr_result=&result;
    *ptr_result=*a+*b;
    return result;
}
void addval(int *a, int *b, int *result){
    *result=*a+*b;
}
void swap(int *a, int *b){
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
void factorial(int *a,int *result){
    *result=1;
    for(int i = 1; i <=*a; ++i)
    {
        *result *= i;
    }
}