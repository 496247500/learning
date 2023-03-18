// saying2.cc --using pointers to objects
// complie with string1.cc
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "string1.h"
const int ar_size = 10;
const int max_len = 81;
int main(int argc, char **argv) {
  String name;
 std::cout << "Hi, what's your name?\n";
 std::cin >> name;
 std::cout << name << ", please enter up to " << ar_size << " short sayings <empty line to quit>\n";
 String sayings[ar_size];
 char temp[max_len];
 int i;
 for (i = 0; i <ar_size; ++i) {
  std::cout << i + 1 << ": ";
  std::cin.get(temp,max_len);
  while (std::cin && std::cin.get() != '\n')
    continue;
  if (!std::cin || temp[0] == '\0')
    break;
  else
    sayings[i] = temp;
 }
 int total =i;
 if (total > 0) {
  std::cout << "Here are your sayings:\n";
  for(i = 0; i < total; ++i) {
    std::cout << sayings[i] << std::endl;
  }
  String * shortest = &sayings[0];
  String * first = &sayings[0];
  for (i = 0; i < total; ++i) {
    if(sayings[i].length() < shortest->length())
      shortest = &sayings[i];
    if(sayings[i] < *first) {
      first = &sayings[i];
    }
  }
  std::cout << "Shortest sayings:\n" << *shortest << std::endl;
  std::cout << "First alphabetically:\n" << *first << std::endl;
  srand(time(0));
  int choice = rand() % total;
  //use new to create, initialize new string object
  String * favorite = new String(sayings[choice]);
  std::cout << "my favorite saying:\n" << *favorite << std::endl;
  delete favorite;
 } else std::cout << "Not much to say,eh? \n";
 std::cout << "Bye.\n";
  return 0;
}
