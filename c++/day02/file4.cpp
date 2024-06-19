#include<iostream>
using namespace std;

int main()
{
	auto x =10;
	auto b = 5.5f;
	auto c = 5.5l;
	//auto ptr =&x;
	
	cout << sizeof(x) << "  " << typeid(x).name() << endl;
	cout << sizeof(b) << "  " << typeid(b).name() << endl;
	cout << sizeof(c) << "  " << typeid(c).name() << endl;
}

