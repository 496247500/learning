//suport.cc --using external variable
//complie with external.cc
#include <iostream>
extern double warming;
void update(double dt);
void local();
using std::cout;
void update(double dt) {
  extern double warming;
  warming += dt;
  cout << "update Global warming to " << warming;
  cout << " degree.\n";
}
void local() {
  double warming = 0.8;
  cout << "Local warming = " << warming << " degree.\n";
  cout << "But Global warming = " << ::warming << " degree.\n";
}
