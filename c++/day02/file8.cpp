#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
	int n;
	cout<< "ente the val of n" << endl;
	cin >> n;
	
	int * ptr = new int [n];
	cout<< sizeof(ptr);
	
	return 0;
}
