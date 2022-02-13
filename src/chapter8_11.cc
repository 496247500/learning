//funtemp.cc -- using a function temlate
#include <iostream>
template <typename T>
void Swap(T &a, T &b);
using namespace std;

int main(int argc, char **argv) {
  int i = 10;
  int j = 20;
  cout << "i, j = " << i << " , " << j << endl;
  cout << "Using compliler-generated int swapper:\n";
  Swap(i, j);
  cout << "Now i, j = " << i << " , " << j << endl;

  double x = 24.5;
  double y = 81.7;
  cout << "x, y = " << x << " , " << y << endl;
  cout << "Using compliler-generated double swapper:\n";
  Swap(x, y);
  cout << "Now x, y = " << x << " , " << y << endl;
  return 0;
}
template <typename T>
void Swap(T &a, T &b){
  T temp;
  temp = a;
  a = b;
  b = temp;
}
