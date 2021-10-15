//cout as directed
#include<iostream>
int main(){
  using std::cin;
  using std::cout;
  using std::endl;
  cout << "Enter an integer:" << endl;
  int step ;
  cin >> step ;
  cout << "counting by" << step <<"s:\n";
  for (int i = 0 ;i < 100 ; i = i + step){
    cout << i << endl ;
  }
  return 0;
}