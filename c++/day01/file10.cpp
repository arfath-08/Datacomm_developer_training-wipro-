#include<iostream>
using namespace std;

int main()
{
	int x= 5;
	
	int &l_r1 =x;
	
	int &&r_r2 = 5;
	
	int &&r_r3 = x+ x;
	
	return 0;
	
}
