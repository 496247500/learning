//calling.cc --defining,prototyping,and call a function
#include <iostream>
void simple();
int main() {
  using namespace std;
  cout << "the main() will call the simple() function :\n";
  simple();
  cout << "main() is finish  with the simple() function.\n";
  return 0;
}
void simple(){
  std::cout << "I'm but a simple function.\n";
}
