#include<iostream>
int main(){
using namespace std;
int higgens = 5;
int* pt = &higgens;
cout << "higgens value is " << higgens << endl;
cout << "higgens address is " << &higgens <<endl;
cout << "*pt value is " << *pt << endl;
cout << "pt value is " << pt <<endl;
return 0;
}