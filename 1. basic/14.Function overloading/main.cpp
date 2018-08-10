#include <iostream>
using namespace std;

int Add(int a, int b)//same name function with different data types
{
	return a + b;
}
double Add(double a, double b) {//same name function with different data types
	return a + b;
}
extern "C" void Print(int *x) {//extern c is used for C lang
    cout<<"extern c";
}
void Print(const int* x) {//same name
cout<<*x;
}
int main() {

	int result = Add(3, 5);
	cout << result << endl;
	Add(3.1, 6.2);
	 int x = 1;
	Print(&x);
	return 0;
}
