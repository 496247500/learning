//external.cc -- external variables
//compile with support.cc
#include <iostream>
  double warming = 0.3;
  void update(double dt);
  void local();
int main(int argc, char **argv) {
  using namespace std;
  cout << "Global warming is " << warming << " degree.\n";
  update (0.1);
  cout << "Global warming is " << warming << " degree.\n";
  local();
  cout << "Global warming is " << warming << " degree.\n";
  return 0;
}
