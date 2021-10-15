// more looping with for
#include<iostream>
const int ar_size = 16 ;
int main(){
  long long factorials[ar_size];
  factorials[1] = factorials[0] = 1ll;
  for(int i = 2 ; i != ar_size ; i++){
    factorials[i] = factorials[i-1]*i ;
  }
  for(int i = 0; i != ar_size ; i++){
    std::cout  << i << "! = "<< factorials[i] << std::endl;
  }
  return 0;
}