#include <iostream>
#include <cstring>

using namespace std;
std::string ToUpper(const std::string &str) ;
std::string ToLower(const std::string &str) ;

int main() {
    string string1="Qasim Raheem";
    cout<<"to lower:"<<ToLower(string1)<<endl;
    cout<<"to upper:"<<ToUpper(string1)<<endl;
    return 0;
}
std::string ToUpper(const std::string &str){
    string upper="";
    for(const auto i:str){
        upper+=toupper(i);
    }
    return upper;
}

std::string ToLower(const std::string &str){
    string lower="";
    for(const auto i:str){
        lower+=tolower(i);
    }
    return lower;
}