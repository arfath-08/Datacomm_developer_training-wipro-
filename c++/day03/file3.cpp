#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
	string str = "heeis a winner";
	char key;
	int counts =0;
	for(int i = 0; i < sizeof(str); i++)
	{
		int no_of_occ = count(begin(str),end(str), str[i]);
		if (no_of_occ > counts)
		{
			counts = no_of_occ;
			key = str[i];
		}
	}
	cout << "count is" << counts << "key is " << key << endl;
	
	return 0;

}
