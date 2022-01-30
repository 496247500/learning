//outfile.cc --writing to a file
#include <iostream>
#include <fstream>
int main(){
  using namespace std;
  char automobile[50];
  int year;
  double a_price;
  double b_price;
  ofstream out_file;
  out_file.open("test.txt");
  cout << "Enter the make and model of automobile: ";
  cin.getline(automobile,50);
  cout << "Enter the model year:";
  cin >> year;
  cout << "Enter the original asking price : ";
  cin >> a_price;
  b_price = a_price * 0.913;
  cout << fixed ;
  cout.precision(2);
  cout.setf(ios_base::showpoint);
  cout << "Make an model:" << automobile << endl;
  cout << "Year:" << year << endl;
  cout << "Was asking $:" << a_price << endl;
  cout << "Now asking $:" << b_price << endl;
  out_file << fixed;
  out_file.precision(2);
  out_file.setf(ios_base::showpoint);
  out_file << "Make and model:"<<automobile << endl;
  out_file << "Year: " << year << endl;
  out_file << "Was asking $:" << a_price << endl;
  out_file << "Was asking $:" << b_price << endl;
  out_file.close();
  return 0;
}
