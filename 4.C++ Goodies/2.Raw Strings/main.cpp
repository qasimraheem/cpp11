#include <iostream>

const char * combine(const char *pfirst,const char *plast){
   // char name[20];
    char *name=new char[strlen(pfirst)+strlen(plast)+1];
    strcpy(name,pfirst);
    strcat(name,plast);
    return name;
}
int main() {
    char first[10];
    char last[10];
    std::cin.getline(first,10);
    std::cin.getline(last,10);
    const char * fullname=combine(first,last);
    std::cout << fullname << std::endl;
    delete[] fullname;
    return 0;
}