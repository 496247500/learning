//using for with a string
#include<iostream>
#include<string>
int main(){
  std:: cout << "Enter a word: ";
  std::string word;
  std::cin >> word;
  for (int i = word.size();i >= 0; i --){
    std::cout << word[i];
  }
  std::cout << ".\n";
  return 0;
}