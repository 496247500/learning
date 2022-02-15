// namesp.cc -- namespaces
#include <iostream>
#include "chapter9_11.h"
namespace pers {
  using std::cout;
  using std::cin;
  void get_person(Person &rp) {
    cout << "Enter the fist name: ";
    cin >> rp.fname;
    cout << "Enter last name: ";
    cin >> rp.lname;
  }
  void show_person(const Person & rp) {
    std::cout << rp.lname << " , " << rp.fname;
  }
}
namespace debts {
  void get_debt(debt &rd) {
    get_person(rd.name);
    std::cout << "Enter debt: ";
    std::cin >> rd.amount;
  }
  void show_debt(const debt &rd) {
    show_person(rd.name);
    std::cout << ":$ " << rd.amount << std::endl;
  }
  double sum_debt(const debt ar[], int n) {
    double total = 0;
    for(int i = 0; i < n; i++) {
      total += ar[i].amount;
    }
    return  total;
  }
}
