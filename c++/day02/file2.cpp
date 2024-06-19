#include <iostream>
using namespace std;

void printArray(int arry[]) 
{
    for ( int ele : arry)
	{
	   ele = ele+2;
	  std::cout << ele << "," ;
	}
}

int main ()
{
  int arr[] = { 12, 23, 34, 45 };
  printArray(arr);
  
  return 0;
}

