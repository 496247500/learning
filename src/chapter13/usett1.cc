#include <iostream>

#include "tabtenn1.h"
void show(const TableTennisPlayer &rt);
void Wohs(const TableTennisPlayer *pt);
int main(void) {
  TableTennisPlayer player1("san", "zhang", true);
  RatePlayer player2(111,"si", "li", false);
  player1.Name();
  if (player1.HasTable()) {
    std::cout << ": has a table.\n";
  } else {
    std::cout << ": hasn't a table.\n";
  }
  player2.Name();
  if (player2.HasTable()) {
    std::cout << ": has a table.\n";
  } else {
    std::cout << ": hasn't a table.\n";
  }
  std::cout << "Name: ";
  player2.Name();
  std::cout << ";Rating: " << player2.Rating() << std::endl;
//initialize RatePlayer using TableTennisPlayer object
RatePlayer player3(121,player1);
  std::cout << "Name: ";
  player3.Name();
  std::cout << ";Rating: " << player3.Rating() << std::endl;
// TableTennisPlayer & rt = player1;
// TableTennisPlayer * pt = &player2;
// rt.Name();
// pt->Name();
show(player1);
show(player2);
Wohs(&player1);
Wohs(&player2);
return 0;
}
void show(const TableTennisPlayer &rt) {
  std::cout << "Name: ";
  rt.Name();
  std::cout << "\n Table: ";
  if (rt.HasTable()) {
    std::cout << "yes\n";
  } else {
    std::cout << "no\n";
  }
}
void Wohs(const TableTennisPlayer *pt) {
  std::cout << "Name: ";
  pt->Name();
  std::cout << "\n Table: ";
  if (pt->HasTable()) {
    std::cout << "yes\n";
  } else {
    std::cout << "no\n";
  }
}