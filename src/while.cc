// introducing th while loop
#include<iostream>
const int ar_size = 20;
int main(){
  using namespace std;
  char name[ar_size];
  cout << "Your first name,please: " << endl;
  cin >> name;
  cout << "here is your name, verticalized and asciilized:\n";
  int i = 0;
  while (name[i] != '\0') {
    cout << name[i] << ": " << int (name[i]) << endl;
    i ++;
  }
  return 0;
}