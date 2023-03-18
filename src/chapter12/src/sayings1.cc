// sayings1.cc --using expanded string class
// complie with string1.cc
#include <iostream>
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
    std::cout << sayings[i][0] << ": " << sayings[i] << std::endl;
  }
  int shortest = 0;
  int first = 0;
  for (i =1; i < total; ++i) {
    if (sayings[i].length() < sayings[shortest].length())
      shortest = i;
    if (sayings[i] < sayings[first])
      first = i;
  }
  std::cout << "Shortest sayings:\n" << sayings[shortest] << std::endl;
  std::cout << "First alphabetically:\n" <<sayings[first] << std::endl;
  std::cout << "This program used " << String::how_many() << " String objects. Bye.\n";
 } else
   std::cout << "No input ! Bye.\n";
  return 0;
}

