#include <iostream>
using namespace std;
enum class Color : int{RED = 2,BLUE=4,GREEN=7};
void fillcolor(Color color){
    if(color==Color::RED)
    {
        cout<<"red"<<endl;
    }else if(color==Color::BLUE)
    {
        cout<<"blue"<<endl;
    }else if(color==Color::GREEN)
    {
        cout<<"green"<<endl;
    }else{}
}
enum class TrafficLights: char{RED='r',YELLOW='y',GREEN};
int main() {
    fillcolor(Color::GREEN);
    Color c=Color::BLUE;
    fillcolor(c);
    fillcolor(static_cast<Color>(2));
    return 0;
}