#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	int x = 5;
	
	int &y = x;
	
	std ::cout << "x =" << x << endl;
	std ::cout << "y = " << y << endl;
	
	y=9;
	std ::cout << "x =" << x << endl;
	std ::cout << "y = " << y << endl;
	
	x=12;
	std ::cout << "x =" << x << endl;
	std ::cout << "y = " << y << endl;
}
