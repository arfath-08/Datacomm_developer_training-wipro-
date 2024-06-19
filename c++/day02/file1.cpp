/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int
main ()
{
  int arr[] = { 10, 20, 30 };

for (int ele:arr)
	{
	  std::cout << ele << endl;
	}

  char name[] = "arfath";
for (char ele:name)
	{
	  cout << ele << endl;
	}
  // std::cout<<"Hello World";

  return 0;
}
