#include <iostream>

#include "brass.h"
int main(void) {
  Brass piggy("pig", 381299, 4000.00);
  BrassPlus hoggy("hog", 382288, 3000.00);
  piggy.ViewAcct();
  std::cout << std::endl;
  hoggy.ViewAcct();
  std::cout << std::endl;
  std::cout << "Depositing $1000 into the hog Account:\n";
  hoggy.Deposit(1000.00);
  std::cout << "New balance: $" << hoggy.Balance() << std::endl;
  std::cout << "withdrawing $4200 from the piggy Account:\n";
  piggy.Withdraw(4000.00);
  std::cout << "piggy accout balance: $" << piggy.Balance() << std::endl;
  std::cout << "withdrawing $4300 from the hog Account:\n";
  hoggy.Withdraw(4200.00);
  hoggy.ViewAcct();
  return 0;
}