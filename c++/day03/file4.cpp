#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

int main()
{ 
	int arr[] = {2,4,6,0,1,8,3};
	int n = sizeof(arr) / sizeof(int);
	
	cout<< "before sorting";
	for(int ele : arr)
	{
		cout << ele << " " << endl;
	}
	sort(arr,arr + n);
	
	cout<< "after sort" << endl;
	for (int ele : arr)
	{
	cout << ele;
	}
	return 0;
}
