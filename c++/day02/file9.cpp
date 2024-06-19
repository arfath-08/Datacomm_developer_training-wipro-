#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "enter the val";
  cin >> n;
  //int *ptr = (int *)malloc (n);
  int *ptr = new int[n] {12,23,45,56,67}; //-> to allocate memory
  for(int i =0;i<n; i++)
  {
      cout<< *(ptr + i) << endl;
  }
  
  //delete ptr; -> for single object or variable to deallocate
 delete [] ptr; // -> for a array of char to deallocate memory
  return 0;
}