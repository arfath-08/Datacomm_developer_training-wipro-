#include<stdio.h>
#include<math.h>
#define PI  3.142

using namespace  std;

double  area(int  r)
{
	return PI *r*r;
}
int  area(int length , int breadth)
{
	return length * breadth;
	}
int main()
{

	//std :: cout<<"area  is "area(5) << endl;
	//std :: cout<<"area is" << area(5,3) << endl;
	return 0;  
}
