#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

int main()
{ 
	string str = "he is a winner";
	char key;
	cout << "enter the key";
	cin >> key;
	int n_occ = count(begin(str), end(str),key);
	if(n_occ == 0)
	{
		cout<< "ele not found";
	}
	else
	{
		cout<< "ele found" << n_occ << endl;
	}
	return 0;
}
