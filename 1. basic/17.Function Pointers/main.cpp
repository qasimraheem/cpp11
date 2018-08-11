#include <iostream>
using namespace std;

void display(char ch,int x){
    for(int i=0;i<x;i++){
        cout<<ch;
    } std::cout <<std::endl;
}
int main() {
    display('#',5);//real function
    void (*print)(char,int)=display;//function pointer initialize to display
    (*print)('@',3);//calling function pointer
    print('4',4);//calling function pointer
    return 0;
}