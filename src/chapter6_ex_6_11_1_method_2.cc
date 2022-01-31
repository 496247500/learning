#include <iostream>
#include <cctype>
int main(){
  using namespace std;
  char input;
  cout << "Please input the character: ";
  cin.get(input);
  while(input != '@'){
    if(isdigit(input)){
      cin.get(input);
      continue;
    }
    if(islower(input)){
      input = toupper(input);
    }
    else if(isupper(input)) {
      input = tolower(input);
    }
    cout << input;
    cin.get(input);
  }
  return  0;
}
