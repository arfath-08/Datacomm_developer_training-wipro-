#include<iostream>
using namespace std;

int main()
{
	const int x = 5;
	
	int &r = x;
	
	const int &cr = x;
	std :: cout << x << "" << cr << endl;
	
	cr =10;
	x =20;
	
	std :: cout << x << "" << cr << endl;
	
	
	return 0;
}
