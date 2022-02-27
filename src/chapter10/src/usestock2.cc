// usestock1.cc -- using the stock class
// compile with stock10.cc
#include <iostream>
#include "stock20.h"
int main(int argc, char **argv) {
  using namespace std;
  {
  cout << "Using constructors to create new objects\n";
  Stock stock1("NanoSmart", 12, 20.0);
  stock1.show();
  Stock  stock2 = Stock("Boffo Objects", 2, 2.0);
  stock2.show();

  cout << "Assigning stock1 to stock2:\n";
  stock2 = stock1;
  cout << "Listening stock1 and stock2:\n";
  stock1.show();
  stock2.show();

  cout << "Using a constructor to reset an Object\n";
  stock1 = Stock("Nifty Foods", 10, 50.0);
  cout << "Received stock1:\n";
  stock1.show();
  cout << "Done.\n";
  }
  return 0;
}
