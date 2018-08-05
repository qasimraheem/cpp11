#include <iostream>
using namespace std;


int main() {
    float radius=0;
    cin>>radius;
    const float PI=3.14159f;//const can't changeable.
    float area=PI*radius*radius;
    cout<<"area:"<<area;



    return 0;
}