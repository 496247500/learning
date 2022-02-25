#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    char* reply = "ladjflajlt";
  int t =sizeof(reply)/reply[0];
  int rcvIdCode, ok;
  reply[t] = '\0';
  sscanf(reply, "%*d %d %d", &rcvIdCode, &ok);
  std::cout << "rcvIdCode = " << rcvIdCode << "ok = " << ok << std::endl;
  return 0;
}
