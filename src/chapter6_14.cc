//cingolf.cc -- non-numeric input skipped
#include <iostream>
const int Max = 5 ;
  int main () {
    double golf[Max] ;
    std::cout << "Please enter your golf score..\n";
    std::cout << "You must enter  " <<  Max << " rounds .\n";
    int i;
    for(i = 0 ; i <Max ; i++ ){
      std::cout << "round # " << i+1 << ": " ;
      while(!(std::cin >> golf[i])){
        std::cin.clear();
        while(std::cin.get() !='\n'){
          continue;
        }
        std::cout << "Please enter  a number: ";
     }
    }
    double total = 0.0;
    for(int j = 0 ; j != Max; j++){
      total += golf[j];
    }
    std::cout << total/Max << " = average score "
      << Max << " round\n";
  }
