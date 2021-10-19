#include<iostream>
int main(){
	using namespace std;
	int n ;
	// double prices[5] = {4.99, 10.99, 6.87, 7.99, 8.49};
	// for (double x :prices){
	// 	cout << x << endl;
	// }
	// for (double & x : prices){
	// 	x = x * 0.8;		
	// }
	// for (double x :prices){
	// 	cout << x << endl;
	// }
		

	cout << "Enter numbers in the range 1-10 to find ";
	cout  << "my favorite number\n";
	do {
		cin >> n ;
	}	while (n !=7);
	cout <<  "Yes , 7 is my favorite number.\n" ;
	return 0;
}

