#include <iostream>
using namespace std;

int add(int x, int y){
    return x+y;
}
inline float multiply(int x,int y){//inline function goes to line where this function is used
    return x*y;
}
int main() {
    cout<<add(8+7,2*2);//jumps to add function
    cout<<"\n"<<multiply(8+2,2*2);//don't jumps to multiply function
    return 0;
}