// namesp.h
#include <string>
namespace pers {
  struct Person {
    std::string fname;
    std::string lname;
  };
  void get_person(Person &);
  void show_person(const Person &);
}
namespace debts {
  using namespace  pers;
  struct debt {
    Person name;
    double amount;
  };
  void get_debt(debt &);
  void show_debt(const debt &);
  double sum_debt(const debt ar[], int n);
}
