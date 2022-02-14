//static.cc -- using a static local variable
#include <iostream>
constexpr int ar_size = 10;
void strcount(const char * str);
int main(int argc, char **argv) {
  using namespace std;
  char input[ar_size];
  char next;
  cout << "Enter a line:\n";
  cin.get(input,ar_size);
  while(cin) {
    cin.get(next);
    while(next != '\n')
      cin.get(next);
    strcount(input);
    cout << "Enter next line (empty line to quit):\n";
    cin.get(input,ar_size);
  }
  cout << "Bye!.\n";
  return 0;
}
void strcount(const char* str) {
  using namespace std;
  static int total = 0;
  int count = 0;
  cout << "\"" << str << "\" contains ";
  while(*str++) {
    count++;
  }
  total +=count;
  cout << "count = " << count << endl;
  cout << "total = " << total << endl;
}
