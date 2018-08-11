#include <iostream>


//two shapes have same function area but different formulas
namespace circle{//defines shape
    void area(float r){//area of circle
        const float PI=3.1415;
        std::cout<<"\narea of circle:"<<PI*r*r;
    }
}
namespace rectangle{//defines shape
    void area(float length,float width){//area of rectangle
        std::cout<<"\narea of rectangle:"<<length*width;
    }
}

//example of nested namespace
namespace drinks{//example of drinks
    void water(){//normal drink
        std::cout<<"\nthis is water";
    }

    namespace cold{//cold drinks
        void pepsi(){
            std::cout<<"\nthis is pepsi";
        }
        void water(){
            std::cout<<"\nthis is cold water";
        }
        namespace juice{//types of juices
            void mango(){
                std::cout<<"\nthis is mango juice";
            }
            void orange(){
                std::cout<<"\nthis is orange juice";
            }
        }
    }

    namespace hot{ //hot drinks
        void water(){
            std::cout<<"\nthis is hot water";
        }
        void tea(){
            std::cout<<"\nthis is tea";
        }
    }

}
int main() {

    using namespace circle;//access all in circle
    area(2);//this is from circle
    rectangle::area(2,3);//direct access to area of rectangle


    using namespace drinks;//access all in drinks
    water();
    hot::water();
    cold::water();
    drinks::hot::tea();
    drinks::cold::juice::orange();
    return 0;
}