#include<iostream>
using namespace std;
// pointers
/*
int main()
{
	int x= 5;
	int y = 10;
	
	std :: cout << "x =" << &x << endl;
	std :: cout << "&y =" << &y << endl;
	
	int *ptr =&x;
	std :: cout << ptr << "" << *ptr << endl;
	
	
	ptr = &y;
	std :: cout << ptr << "" << *ptr << endl;
	
	return 0;
}
*/
// references

int main()
{
	int x =5;
	int y=10;

	
	std :: cout << "&x " << &x << endl;
	std :: cout << "&y " << &y << endl;
	
	 const int &r = x;
	std :: cout << &r << r << endl;
	std :: cout << "r = "<< r << "x =" << x << endl;
	
	r=y;
	std :: cout << &r << x << endl;
	std :: cout << "&r =" << &r << "y =" << y << endl;

	return 0;
}
