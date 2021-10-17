// use a block statement
#include<iostream>
int main(){
  using namespace std ;
  cout << "the amazing accounto will sum and average";
  cout << "five numbers for you.\n";
  cout << "please enter five values:\n";
  double number;
  double sum = 0.0;
  for ( int i = 0 ; i < 5; ++i){
    cout << "value " << i << ": ";
    cin >> number ;
    sum += number ;
  }
  cout << "five exquiste choices indeed! ";
  cout << "they sum to " << sum << endl;
  cout << "and average to " << sum/5 << ".\n";
  cout << "the amazing accouto bids you adieu!\n";
  return 0;
}