//strype4.cc - line input
#include<iostream>
#include<string>
#include<cstring>
int main(){
  using namespace std;
  char charr[20];
  string str;
    cout << "Length of string in charr before input: "
        << strlen(charr) << endl;
    cout << "Length of sring in str before input: "
        << str.size() <<endl;
    cout << "Enter a line of test:\n";
    cin.getline(charr,20);
    cout << "You entered: " << charr << endl;
    cout << "Enter a anather line of thes:\n";
    getline(cin,str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
      << strlen(charr) << endl;
    cout << "Length of string in str after input :"
      << str.size() << endl;
      return 0;
}