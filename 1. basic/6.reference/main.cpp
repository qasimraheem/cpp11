#include <iostream>
using namespace std;
int main() {

    //referent
    int a=10;
    //reference
    int &ref=a;//always initialize
    cout<<"a:"<<a<<"\n&a:"<<&a<<endl;
    cout<<"ref:"<<ref<<"\n&ref:"<<&ref<<endl;

    int y=30;
    ref=y;
    cout<<"\na:"<<a<<"\n&a:"<<&a<<endl;
    cout<<"ref:"<<ref<<"\n&ref:"<<&ref<<endl;

    return 0;
}