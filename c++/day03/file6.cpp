#include<iostream>
#include<algorithm>
#include <string>

using namespace std;
bool compare(string a, string b)
{
	return a > b;
}

int main()
{ 
	int num = 3;
	string str[num] = {"shaikh","arfath","basha"};
	
	
	cout<< "before sorting" << endl;
	for(string ele : str)
	{
		cout << ele << " " << endl;
	}
	sort(str,str+num, compare);
	
	cout<< "after sort" << endl;
	for (string ele : str)
	{
	cout << ele << endl;
	}
	return 0;
}
