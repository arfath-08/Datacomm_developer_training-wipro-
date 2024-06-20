#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void print(string a)
{
	cout << a << "" << a.length() << endl;
}
int main()
{
	string arr[] = {"shaikh","arfath","basha"};
	for_each(begin(arr),end(arr), print);
	return 0;
}
