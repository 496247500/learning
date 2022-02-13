//autoscp.cc -- illustrating scope of automatic variables
#include <iostream>
void oil(int x);
int main(int argc, char **argv) {
  using namespace std;
  int texas = 31;
  int year = 2011;
  cout << "in main(), texas = " << texas << ", &texas = "
    << &texas << endl;
  cout << "in main(), year = " << year << ", & year ="
    << &year << endl;
  oil(texas);
  cout << "in main(), texas = " << texas << ", &texas = "
    << &texas << endl;
  cout << "in main(), year = " << year << ", & year ="
    << &year << endl;

  return 0;
}
void oil(int x) {
  using namespace std;
  int texas = 5;
  cout << "in oil(), texas = " << texas << ", &texas = "
    << &texas << endl;
  cout << "in oil(), x = " << x << ", & x = "
    << &x<< endl;
  {
    int texas = 113;
    cout << "in oil(), texas = " << texas << ", &texas = "
      << &texas << endl;
    cout << "in oil(), x = " << x << ", & x = "
      << &x<< endl;
  }
  cout << "post-block texas = " << texas;
  cout << ", & texas = " << &texas << endl;
}
