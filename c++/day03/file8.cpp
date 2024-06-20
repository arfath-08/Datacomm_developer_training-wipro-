#include<iostream>
#include<algorithm>


using namespace std;
bool compare(int n)
{
	for(int i =2; i < n; i++)
	{
		if(n%i == 0)
		{
			return 1;
		}
	}
	return 0;
}
int count_prime(int arr[] , int n)
{

	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(!compare(arr[i]) && arr[i] > 1)
		{
			count++;
		}
	}
	return count;
}
int main()
{ 
	int arr[] = {12,21,34,32,5,65,34,23,43};
	int n = sizeof(arr) / sizeof(int);
	int p_count = count_prime(arr,n);
	cout<< "no of prime no" << p_count << endl;
	return 0;
}
