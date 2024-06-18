#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	
	cout << "enter two numbers";
	cin >> n1 >> n2;
	
	int largest = n1 > n2? n1 : n2;
	
	cout << "largest of "<< n1 << "and" << n2 "=" << largest;
}
