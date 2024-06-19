#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
//	int arr[] = {5,1,1,2,6};
	int arr[10];
	int num;
	
	cout<< "enter the value of array";
	for(int i =0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout<< "enter the no offf ele in arr:";
	cin >> num;

	int n = sizeof(arr) / sizeof(int);
	
	int *ptr_i = max_element(begin(arr), end(arr));
	cout<< " max element is" << *ptr_i << endl;
	int res = count(begin (arr), end(arr) , num);
	cout<< res << endl;
	return 0;
}
