#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  int &ref1=a;
  const int &ref2 =a;
  
  auto &ref3=a;
  const auto &ref4 =a;
  
  const int b =5;
 // int &ref5 = b;
  const int &ref6 =b;
  
  auto &ref7 = b;
  const auto &ref8 = b;
  return 0;
}