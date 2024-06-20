#include<iostream>
#include<algorithm>
#include <string>

using namespace std;
bool compare(string a, string b)
{
	return a.length() < b.length();
}

int main()
{ 
	
	string str[] = {"shaikh","arfath","basha_arfath"};
	
	
	cout<< "before sorting" << endl;
	for(string ele : str)
	{
		cout << ele << " " << endl;
	}
	sort(begin(str),end(str), compare);
	
	cout<< "after sort" << endl;
	for (string ele : str)
	{
	cout << ele << endl;
	}
	return 0;
}
