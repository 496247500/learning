// usenamesp.cc -- using namespace
#include <iostream>
#include "chapter9_11.h"
void other(void);
void another(void);
int main() {
  using debts::debt;
  using debts::show_debt;
  debt golf = {{"Benny", "Goatsniff"}, 120.0 };
  show_debt(golf);
  other();
  another();
  return 0;
}
void other() {
  using std::cout;
  using std::endl;
  using namespace debts;
  Person dg = {"Doodles", "Glister"};
  show_person(dg);
  cout << endl;
  debt zippy[3];
  int i;
  for(i = 0; i < 3; i++) {
    get_debt(zippy[i]);
  }
  for(i = 0; i < 3; i++) {
    show_debt(zippy[i]);
  }
  cout << "Total debt: $" << sum_debt(zippy, 3) << endl;
  return ;
}
void another() {
  using pers::Person;
  Person collector = {"Millo", "Rightshifg"};
  pers::show_person(collector);
  std::cout << std::endl;
  return;
}
