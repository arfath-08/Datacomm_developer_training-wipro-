#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
bool isuppercase(char ch)
{
	return isupper(ch);
}
int main()
{
	string str = "Arfath BasHa";
	int upp_count = count_if(begin(str),end(str),isuppercase);
	cout << "no of upper count" << upp_count << endl;
	return 0;
}
