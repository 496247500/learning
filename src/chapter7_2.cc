//protos.cc --using prototypes and function calls
#include <iostream>
void cheers(int);
double cube(double);
int main(){
  using namespace std;
  cheers(5);
  cout << "Give me a number :";
  double side ;
  cin >> side;
  double volumn = cube(side);
  cout << "A " << side << " -foot cube has a volumn of ";
  cout << volumn << " cubic feet.\n";
  return 0;
}
void cheers(int  n){
  using namespace std;
  for(int i = 0; i <= n; i++)
    cout << "Cheers! ";
  cout << endl;
}
double cube(double x){
  return x * x * x ;
}
