#include<iostream>

using namespace std;

void func(int x)
{
	cout << "integer" <<endl;
}
void func(float x)
{
	cout << "float" << endl;
}
int main()
{
	int a = 5;
	float f = 6.7;
	double d = 6.5;
	func(a);
	func(f);
	func(float(d));
}
