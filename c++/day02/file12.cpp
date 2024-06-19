#include<algorithm>
#include<iostream>
#include<string>
//using namespace std;

int main() {
  int arr[]={5,1,8,2,6};
  //------------max_element---------
 // int *ptr_i = std::max_element(arr , arr+5);
 // int *ptr_i = std :: max_element(std :: begin(arr), std :: end(arr));
 // std :: cout<< " max element is" << *ptr_i <<std :: endl;
  //std :: cout<< "max element at index" << ptr_i - arr << std:: endl;
  
 
  
=============min_element===============
  int *ptr_i = std :: min_element(std :: begin(arr), std :: end(arr));
  std :: cout<< " min element is" << *ptr_i <<std :: endl;
  std :: cout<< "min element at index" << ptr_i - arr << std:: endl;

  return 0;
}
