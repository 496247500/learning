// sumafile.cc --functions with an array argument
#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;
int main(){  using namespace std;
  char file_name[SIZE];
  ifstream in_file;
  cout << "Enter name of data file: ";
  cin.getline(file_name,SIZE);
  in_file.open(file_name);
  if(!in_file.is_open()){
    cout << "Can not open the file " <<file_name << endl;
    cout << "Program terminating.\n";
    exit(EXIT_FAILURE);
  }
  double  value;
  double sum = 0.0;
  int count = 0;
  in_file >> value;
  while(in_file.good()){
  ++count;
  sum += value;
  in_file >> value;
  }
  if(in_file.eof()){
    cout << "End the file reached.\n ";
  }
  else if (in_file.fail()){
    cout << "Input terminated by data mismatch.\n";
    }
  else {
    cout << "Input terminated for unknow reason.\n";
  }
  if(count == 0){
    cout << "No data processed.\n";
  }
  else{
  cout << "Items read: " << count << endl;
  cout << "Sum: " <<sum <<endl;
  cout << "Average: " << sum/count << endl;
 }
  in_file.close();
  return 0;
}
