#include<iostream>
#include"chapter13_tabenn0.h"
int main(void) {
  TableTennisPlayer player1("san","zhang",true);
  TableTennisPlayer player2("si", "li",false);
  player1.Name();
  if(player1.HasTable()){
    std::cout << ": has a table.\n";
  } else {
    std::cout << ": hasn't a table.\n";
  }
  player2.Name();
  if(player2.HasTable()){
    std::cout << ": has a table.\n";
  } else {
    std::cout << ": hasn't a table.\n";
  }

}