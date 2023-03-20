#include "brass.h"

#include <iostream>
using format = std::ios_base::fmtflags;
using precis = std::streamsize;
format SetFormat();
void restore(format f, precis p);

Brass::Brass(const std::string& s, long an, double bal) {
  full_name = s;
  accout_num = an;
  balance = bal;
}
void Brass::Deposit(double amt) {
  if (amt < 0) {
    std::cout << "Negative deposit not allowed; "
              << "deposit is cancelled.\n";
  } else {
    balance += amt;
  }
}
void Brass::Withdraw(double amt) {
  // set up ###.##
  format initial_status = SetFormat();
  precis prec = std::cout.precision(2);
  if (amt < 0) {
    std::cout << "Withdrawal amount must be positive; "
              << "withdrawal cancelled.\n";
  } else if (amt <= balance) {
    balance -= amt;
  } else {
    std::cout << "Withdrawal amount of $ " << amt << "execeeds your balance.\n"
              << "withdrawal canceled.\n";
  }
  restore(initial_status, prec);
}
double Brass::Balance() const { return balance; }
void Brass::ViewAcct() const {
  format initial_status = SetFormat();
  precis prec = std::cout.precision(2);
  std::cout << "Client: " << full_name << std::endl;
  std::cout << "Account Number: " << accout_num << std::endl;
  std::cout << "Balance: $" << balance << std::endl;
  restore(initial_status, prec);
}
BrassPlus::BrassPlus(const std::string& s, long an, double bal, double ml,
                     double r)
    : Brass(s, an, bal) {
  max_loan = ml;
  rate = r;
  owes_bank = 0.0;
}
BrassPlus::BrassPlus(const Brass& ba, double ml, double r) : Brass(ba) {
  max_loan = ml;
  rate = r;
  owes_bank = 0.0;
}
void BrassPlus::ViewAcct() const {
  format initial_status = SetFormat();
  precis prec = std::cout.precision(2);
  Brass::ViewAcct();
  std::cout << "Maximum loan: $" << max_loan << std::endl;
  std::cout << "owed to bank: " << owes_bank << std::endl;
  std::cout.precision(3);
  std::cout << "Loan Rate: " << 100 * rate << "%" << std::endl;
  restore(initial_status, prec);
}
void BrassPlus::Withdraw(double amt) {
  format initial_status = SetFormat();
  precis prec = std::cout.precision(2);
  double bal = Balance();
  if (amt < Balance()) {
    Brass::Withdraw(amt);
  } else if (amt <= bal + max_loan - owes_bank) {
    double advance = amt - bal;
    owes_bank += advance * (1.0 + rate);
    std::cout << "Bank advance: $" << advance << std::endl;
    std::cout << "Finance charge: $" << advance * rate << std::endl;
    Deposit(advance);
    Brass::Withdraw(amt);
  } else {
    std::cout << "Credit limit exceeded.Transaction canceled.\n";
  }
  restore(initial_status, prec);
}
format SetFormat() {
  return std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}
void restore(format f, precis p) {
  std::cout.setf(f, std::ios_base::floatfield);
  std::cout.precision(p);
}