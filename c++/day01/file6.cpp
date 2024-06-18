#include<iostream>
using namespace std;

//---------pointers----------------

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

//----------references------------------

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
