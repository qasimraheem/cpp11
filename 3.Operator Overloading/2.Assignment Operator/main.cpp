#include <iostream>
#include "Integer.h"
using namespace std;
int main() {
    Integer a(2), b(3);
    a=b;
    cout<<"a:"<<a.getValue();
    cout<<"\nb:"<<b.getValue();

    return 0;
}