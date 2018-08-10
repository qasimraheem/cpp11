#include <iostream>
using namespace std;
void CreateWindow(const char * title, int x, int y, int width, int height);


void createBox(const char * color="black", int length = 1, int width = 1, int height = 1) {//if you not pass arguments in function it takes its predefined values

    cout << "Color : " << color << endl;
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Height : " << height << endl;
}
int main() {
    createBox("red", 100, 200);

    cout<<"\nnewbox:\n";
    createBox();
    return 0;
}
