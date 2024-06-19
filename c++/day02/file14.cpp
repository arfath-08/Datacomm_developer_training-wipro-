#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = {5,1,8,2,6};
	int n = sizeof(arr) / sizeof(int);
	int *ptr_i = max_element(begin(arr), end(arr));
	
	swap(*ptr_i,arr[n-1]);
	cout<<  arr << ptr_i;
}
