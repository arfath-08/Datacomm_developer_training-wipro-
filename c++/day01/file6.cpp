#include<iostream>
using namespace std;

/*
void update(int *ptr)
{
	//std :: cout<< "ptr =" << 
	(*ptr)++;
}

int main()
{
	int x = 5;
	update( &x);
	
	std :: cout << "main x =" << x;
	
	return 0;
}
*/

void update(int &y)
{
	//std :: cout<< "ptr =" << 
	y++;
}

int main()
{
	int x = 5;
	update(x);
	
	std :: cout << "main x =" << x;
	
	return 0;
}
