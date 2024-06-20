#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool print(int &ele)
{
	return ele = ele* 2;
}
int main()
{
	int arr[] = {12,23,44,32,34,32};
	for_each(begin(arr),end(arr),print);
	cout << arr<< endl;
	return 0;
}
