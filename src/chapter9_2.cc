//file1.cc -- example of a three-file program
#include <iostream>
#include "chapter9_1.h"
int main(int argc, char **argv) {
  using namespace std;
  rect rplace;
  polar pplace;
  cout << "Enter the x and y value: ";
  while(cin >> rplace.x >> rplace.y) {
    pplace = rect_to_polar(rplace);
    show_polar(pplace);
    cout << "next two numbers (q to quit): ";
  }
  cout << "bye!\n";
  return 0;
}
