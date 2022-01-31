//arrfun1.cc --function with array argument
#include <iostream>
const int arr_size = 8;
int sum_arr(int arr[],int n);
int main(){
  using namespace std;
  int cookies[arr_size] = {1, 2, 4, 8, 16, 32, 64, 128};
  int sum =sum_arr(cookies,arr_size);
  cout << "Total cookies eaten: " << sum << ".\n";
  return 0;
}
int sum_arr(int arr[], int n){
  int total = 0;
  for(int i = 0; i != n; i++){
    total += arr[i];
//    std::cout << &arr[i] << std::endl;
  }
  return total;
}
