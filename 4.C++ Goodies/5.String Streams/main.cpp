#include <iostream>
#include <sstream>

using namespace std;
int main() {
    int x=5,y=20;
    int sum=x+y;
    std::stringstream ss;//read and write
    std::istringstream is;//only-read
    std::ostringstream os;//only-write

    ss <<"sum of "<< x <<" and "<< y << " is:"<<sum<<std::endl;
    std::string s=ss.str();//converting to string
    cout<<s<<endl;
    ss.str("");//clear string-stream
    ss<<sum;    //
    s=ss.str();//  ← s=to_string(sum);

    cout<<s<<endl;

    //reading from string
    int a;
    string data="2 345 54 67 8 6 56";
    ss.str(data);

    while(ss >> a /*!ss.fail()*/){
        cout<<a<<endl;
    }

    int z=stoi("546");
    cout<<z;

    return 0;
}