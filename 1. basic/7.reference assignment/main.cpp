#include <iostream>

using namespace std;

void add(int a, int b, int &result);
void factorial(int a,int &result);
void swap(int &a,int &b);

int main() {

    int a=10;
    int b=20;
    int result{0};
    int &ref_a=a,&ref_b=b;
    int &ref_result=result;

    add(a, b, ref_result);
    cout<<a<<"+"<<b<<":"<<ref_result<<endl;


    factorial(a,ref_result);
    cout<<a<<"!"<<":"<<result<<endl;

    swap(ref_a,ref_b);
    cout<<a<<"<->"<<b<<endl;
    return 0;
}
void add(int a, int b, int &result){
    result=a+b;
}
void factorial(int a,int &result){
    result=1;
    for(int i=1;i<=a;i++){
        result*=i;
    }
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}