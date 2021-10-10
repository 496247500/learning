//pointer addition
#include <iostream>
int main(){
  using namespace std;
  double wages[3] = {10000,20000,30000};
  short stacks[3] = {3,2,1};
  double *pw = wages;
  short * ps =&stacks[0];
  char flower[10] ="rose";
  cout << flower << " s is red !\n"; 
  //cout << *flower << endl;
  // cout << wages << endl;
  // cout << &wages <<endl;  // cout << wages << endl;
  // cout << &wages <<endl;
  cout << " pw = " << pw << endl;
  cout << " *pw = " << *pw << endl;
  pw =pw +1;
  cout << " pw = " << pw << endl;
  cout << " *pw = " << *pw << endl;
  cout << " ps = " << ps << endl;
  cout << " *ps = " << *ps << endl;
  ps = ps + 1;
  cout << " ps = " << ps << endl;
  cout << " *ps = " << *ps << endl;
  cout << "access two elements with array notation\n";
  cout << "stacks[0] = " << stacks[0] << ",satcks[1] = " << stacks[1] <<endl;
  cout << "access two elements with pointer notation\n";
  cout << "*stacks =" << *stacks << ",*(stacks + 1) = " << * (stacks +1) << endl;
  cout << sizeof(wages) << " = size of wages array\n";
  cout << sizeof(pw) << " = size of pw pointer \n";
  return 0;
}