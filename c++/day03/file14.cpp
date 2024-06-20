#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int arr[]= {12,34,32,43,45,65,3,55};
	int key;
	cin >> key;
	sort(begin(arr),end(arr));
	auto res = binary_search(begin(arr),end(arr),key);
	if(res == 1)
	{
		cout<< "ele  present";
	int *ptr = lower_bound(begin(arr),end(arr),key);
	cout<< "lower bound" << distance(arr,ptr) << endl;
	ptr = upper_bound(begin(arr),end(arr),key);
	cout << "upper bound" << distance(arr,ptr) << endl;
	}
	else
	{
		cout << "elememnt not present";
	}
	return 0;
}
