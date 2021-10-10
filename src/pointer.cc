#include <iostream>
int main(){
  using namespace std;
  int updates = 6 ;
  int *p_updates;
  p_updates = &updates;
  cout << *p_updates << endl;
  cout <<  p_updates << endl;
  *p_updates += 1;
  cout << *p_updates << endl;
  cout <<  p_updates << endl;
  return 0;
}