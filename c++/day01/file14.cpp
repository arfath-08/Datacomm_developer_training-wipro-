#include<iostream>
using namespace std;
int main()
{
	char name[50];
	cout << "enter the name ";
	cin.getline(name, 50, '?');
	
	cout << "name =" << name;
	
	return 0;
}
