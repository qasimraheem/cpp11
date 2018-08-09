#include <iostream>

int main() {
    using namespace std;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++){  //using for loop incrementation
        cout<<arr[i];
    }
    std::cout << "\n-------------" << std::endl;
    for(const auto &x :arr){  //using range base for loop
      cout<<x;
    }
    std::cout << "\n-------------" << std::endl;
    for(auto x:{1,2,3,4,5}){  //using range base for loop
        cout<<x;
    }
    return 0;
}