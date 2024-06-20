#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = {12,21,23,32,34,43};
	int n = sizeof(arr) / sizeof(int);
	
	int key;
	
	cout << "enter the element to serach";
	cin >> key;
	int *ptr = find(begin(arr),end(arr),key);
	if(ptr == end(arr))
		cout << "ele not found";
	else
	{
		int index = distance(arr,ptr);  //or we can use int index = ptr -arr;
		cout<< "ele found at index" << index << endl;
	}
	return 0;	
}
