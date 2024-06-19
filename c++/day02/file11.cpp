#include <iostream>
#include <stdlib.h>
#include <algorithm>
// using namespace std;
// Template
 
template<typename T>    // T is called as placeholder 
void swap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
 
int main()
{
   int a = 10;
   int b = 20;
   swap(a , b); // 2003
   char c = 'a', d = 'b';
   swap(c, d);
}