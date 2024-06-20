#include<iostream>
#include<algorithm>
#include <string>

using namespace std;

bool isPrime(int num)
{
	for(int i = 2; i <=num/2; i++)
	
		if(num % i == 0)
			return false;
	
	return true;
}
int main()
{
	int arr[] = {12,21,34,32,5,65,34,23,43};
	int *ptr = find_if(begin(arr), end(arr), isPrime);
	if(ptr == end(arr))
		cout<< "there's no prime no";
	else
		cout<< "prime no is" << *ptr << endl;
	return 0;
}
