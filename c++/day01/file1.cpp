#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	float n = 0;
//	printf("enter the number");
	cout << "enter a number";
	
//	scanf("%f",&n);
	cout >> n;
	
	float res = abs(n);
//	printf("res = %f \n",res);
	cout << res;
}
