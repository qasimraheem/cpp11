#include <iostream>
#include <string>

int main() {
    //Initialize & assign
    std::string s="hello";
    s="word";
    //access
    s[0]='0';
    char c=s[0];

    std::cout<<s<<std::endl;
    std::cout<<s[0]<<std::endl;

    std::cin>>s;
    std::getline(std::cin,s);

    //size
    s.length();

    //Insert concatenate
    std::string s1{"hello"},s2{"word"};
    s = s1 + s2;
    s += s1;
    s.insert(6,s2);

    //comparison
    if(s == s1){//==, !=, <, >, <=, >=, ...

    }

    //clear
    s.erase();
    s.erase(6,5);
    s.clear();

    //search
    auto position=s.find("hello",0);
    if(position!=std::string::npos){
        //found
    }

    return 0;
}