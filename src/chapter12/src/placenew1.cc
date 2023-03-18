//placenew1.cc --new,placement new, no delete
#include <iostream>
#include <string>
#include <new>
const int buff = 512;
class JustTesting {
 private:
  std::string words;
   int number;
 public:
   JustTesting(const std::string & s = "Just testing", int n =0) {
     words = s; number = n;
     std::cout << words << " constructed\n";
   }
   ~JustTesting() {
    std::cout << words << " destroyed" << std::endl;
   }
   void show() const {
    std::cout << words << ", " << number << std::endl;
   }
};
int main() {
  char * buffer = new char[buff];
  JustTesting *pc1, *pc2;
  pc1 = new (buffer) JustTesting;
  pc2 = new JustTesting("heap1", 20);
  std::cout << "Memory block address:\n" << "buffer: "
    << (void *)buffer << " heap: " << pc2 << std::endl;
  std::cout << "Memory contents:\n";
  std::cout << pc1 << ": ";
  pc1->show();
  std::cout << pc2 << " :";
  pc2->show();
  JustTesting *pc3, *pc4;
  pc3 = new (buffer + sizeof(JustTesting)) JustTesting("Bad idea",6);
  pc4 = new JustTesting("heap2", 10);
  std::cout << "Memory contents" << std::endl;
  std::cout << pc3 << ": ";
  pc3->show();
  std::cout << pc4 << ": ";
  pc4->show();

  delete pc2;
  delete pc4;
  pc3->~JustTesting();
  pc1->~JustTesting();
  delete [] buffer;
  std::cout << "Done .\n";
  return 0;
}

