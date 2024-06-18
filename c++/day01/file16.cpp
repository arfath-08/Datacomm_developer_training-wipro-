#include <iostream>
using namespace std;

int max(int a, int b , int c=0);


int main()
{
	cout<< max(5,10) << endl;
	cout<< max(5,10,15) << endl;
	return 0;
}


int max(int a, int b , int c)
{

	cout<<"max func" << a << " " << b << " " << c << endl;
	return a > b && a > c ? a : (b > c ? b : c);
}
