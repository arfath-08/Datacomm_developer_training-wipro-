#include<iostream>
#include<typeinfo>

using namespace std;
int main()
{
	auto x= 5;
	//const auto y =8;
	auto p1 = &x;
	auto *p2 = &x;  //* is optional
	
	cout<< "type of px :" << typeid(p1).name() << endl; 
	cout<< "type of py :" << typeid(p2).name() << endl;
	return 0;
	
}
