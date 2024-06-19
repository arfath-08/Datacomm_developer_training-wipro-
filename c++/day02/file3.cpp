#include <iostream>
using namespace std;

int main ()
{
    const int arr[] = { 12, 23, 34, 45 };

    for (const  int &ele : arr)
	{
	  std::cout << ele << "," ;
	}
}