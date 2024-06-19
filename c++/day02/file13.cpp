#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "enter the no of array";
	cin>> n;
	
	int arr[10];
	cout<< "enter the array values";
	for(int i=0;i< n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i=0;i<n; i++)
	{
		if(arr[0]< arr[i])
			arr[0] = arr [i];
	}
	cout<< "largest ele is =" << arr[0] << endl;
	for(int i=0;i<n;i++)
	{
		cout<< arr[i];
	}
	
	return 0;
} 
