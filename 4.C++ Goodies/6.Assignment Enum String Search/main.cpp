#include <iostream>
#include <string>

enum class Case{SENSITIVE, INSENSITIVE};

size_t Find(
        const std::string &source,         //Source string to be searched
        const std::string &search_string,  //The string to search for
        Case searchCase = Case::INSENSITIVE,//Choose case sensitive/insensitive search
        size_t offset=0);
int main() {
    int offset=Find("helloword","Owo",Case::INSENSITIVE);
    if(offset!=std::string::npos){
        std::cout<<"Found at index:"<<offset;
    }else{
        std::cout<<"not Found";
    }


    return 0;
}

size_t Find(const std::string &source,const std::string &search_string, Case searchCase, size_t offset){
    if(searchCase==Case::SENSITIVE){
        offset=source.find(search_string,offset);
    } else if(searchCase==Case::INSENSITIVE){
        std::string uppersource="",uppersearch="";
        for (const auto i:source) {
            uppersource+=toupper(i);
        }
        for (const auto i:search_string) {
            uppersearch+=toupper(i);
        }
        offset=uppersource.find(uppersearch,offset);

    }else{
        //invalid
    }
    return  offset;
}