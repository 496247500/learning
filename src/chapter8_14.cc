//tempover.cc -- template overloading
#include <iostream>
template <typename T>
void show_array(T  arr[], int n);
template <typename T>
void show_array(T  *arr[], int n);
struct debs{
  char name[50];
  double amount;
};
int main(int argc, char **argv) {
  using namespace std;
  int things[6] = {13, 31, 103, 301, 310, 130};
  debs mr_E[3] = {
    {"ima wolfe", 2400.0},
    {"ura  foxe", 1300.0},
    {"iby stout", 1800.0}
  };
  double* pd[3];
  for(int i = 0; i < 3; i++){
    *(pd + i) = & mr_E[i].amount;
  }
  cout << "Listing Mr. E's debs counts of things:\n";
  show_array(things,6);
  cout << "Listing Mr. E's debs;\n";
  show_array(pd,3);
  return 0;
}
template <typename T>
void show_array(T arr[], int n){
  using namespace std;
  cout << "template A \n";
  for(int i = 0; i < n; i++){
    cout << arr[i] << ' ';
  }
  cout << endl;
}
template <typename T>
void show_array(T *arr[], int n){
  using namespace std;
  cout << "template B\n";
  for(int i = 0; i < n; i++){
  cout << *arr[i] << ' ';
  }
  cout << endl;
}
