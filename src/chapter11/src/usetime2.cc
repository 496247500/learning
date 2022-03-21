//usetime2.cc -- using the third draft of the time class
//compile usetime2.cc and mytime2.cc together
#include <iostream>
#include "mytime2.h"

int main(int argc, char **argv) {
  using std::cout;
  using std::endl;
  Time planning;
  Time weeding(4,35);
  Time waxing(2,47);
  Time total;
  Time diff;
  Time adjusted;

  cout << "planning time = ";
  planning.show();
  cout << endl;

  cout << "weeding time = ";
  weeding.show();
  cout << endl;

  cout << "waxing time = ";
  waxing.show();
  cout << endl;

  total = weeding + waxing;
  cout << "weeding + waxing = ";
  total.show();
  cout << endl;

  diff = weeding - waxing;
  cout << "weeding time - waxing time = ";
  diff.show();
  cout << endl;

  adjusted = total * 1.5;
  cout << "adjusted work time = ";
  adjusted.show();
  cout << endl;

  return 0;
}
