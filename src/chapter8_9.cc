//left.cc --string function with a default argument
#include <iostream>
const int size = 80;
char* left(const char*, int n = 1);
int main(){
  using namespace std;
  char sample[size];
  cout << "Enter a string ";
  cin.get(sample,size);
  char* ps = left(sample,4);
  cout << ps << endl;
  delete [] ps;
  ps = left(sample);
  cout << ps << endl;
  delete  [] ps;
  return 0;
}
char* left(const char* str, int n) {
  if(n < 0)
    n = 0;
  char* p = new char[n + 1];
  int i;
  for (i = 0; i < n && str[i]; i++){
    *(p + i) = str[i];
  }
  while( i <=  n){
    p[i++] = '\0';
  }
  return  p ;
 }
