#include<iostream>
using namespace std;

void swap (int &a, int &b)
{
	a= a ^ b;
	b = a ^ b;
	a = a ^ b;
}
int main()
{
	int x=10;
	int y=20;
	
	std :: cout << "before swap" << x << y << endl;
	
	swap(x,y);
	std :: cout << "after swap"  << x << y << endl;
	
	}
