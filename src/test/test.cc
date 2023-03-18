// this is a test file
#include <iostream>
template <typename T>
 T CallwithMax(const T& a, const T & b) {
  return a > b ? a : b;
}
int main () {
  std::cout <<  CallwithMax('a','b') << std::endl;
  return 0;
}
