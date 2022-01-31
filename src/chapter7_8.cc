//arrfun2.cc --functions with at array argument
#include <iostream>
const int arr_size = 8;
int sum_arr(const int* begin,const int* end);
int main(){
  int cookies[arr_size] = {1, 2, 4, 8, 16, 32, 64, 128};
  std::cout << cookies << " = array address, ";
  std::cout << sizeof(cookies) << " = sizeof cookies\n";
  int sum = sum_arr(cookies, cookies + arr_size);
  std::cout << "Total cookies eaten: " << sum << std::endl;
  sum =sum_arr(cookies,cookies + 3);
  std::cout << "First three eaters ate " << sum << " cookies.\n";
  sum = sum_arr(cookies + 4, cookies + 8);
  std::cout << "Last four eaters ate " << sum << " cookies.\n";
  return 0;
}
int sum_arr(const int* begin, const int* end){
  int total = 0;
  const int* pt = nullptr;
  for(pt = begin; pt != end; pt++){
    total += *pt;
  }
  return total;
}
