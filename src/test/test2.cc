#include <iostream>

int main(int argc, char **argv) {
  using namespace std;
  unsigned u = 10,u2 =42;
  cout << u2 -u << endl;
  std::cout << u -u2 << std::endl;
  int i =10, i2 = 42;
  std::cout << i2 -i << std::endl;
  std::cout << i -i2 << std::endl;
  std::cout << i -u << std::endl;
  std::cout << u -i << std::endl;

  return 0;
}
