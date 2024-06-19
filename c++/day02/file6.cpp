#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;
int main()
{
	//int *ptr = (int *) malloc(20);
	//auto p = new int (10);
	//cout << sizeof(p) << "  " << typeid(p).name() << endl;
	int x =5;
	int &y = x;
	auto z = y;
	
	cout<< x << y << z << endl;
	x=190;
	cout<< x << y << z;
	/*cout << x << sizeof(x) << "  " << typeid(x).name() << endl;
	cout << y << sizeof(y) << "  " << typeid(y).name() << endl;
	cout << z<<  sizeof(z) << "  " << typeid(z).name() << endl;*/
	return 0;
}
