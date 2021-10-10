//using the new operator for arrays
#include<iostream>
int main(){
  using namespace std;
  double *p3 = new double [3];
  p3[0] = 0.2;
  p3[1] = 0.5;
  p3[2] = 0.8;
  cout << "p3[1] is " << p3[1] << endl;
  p3 =p3 +1; //increment the pointer
  cout <<"now p3[0] is " << p3[0] <<endl;
  cout << "p3[1] is " << p3[1] << endl;
  p3 = p3 -1;//back the pointer to beginning
  delete [] p3 ; //free the momory
  return 0; 

}