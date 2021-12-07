//condit.cc --using the conditional operator
#include<iostream>
int main(){
    using namespace std;
    int a ,b ;
    cout << "enter two intergers:";
    cin >> a >> b;
    cout << "the larger of " << a << " and " << b ;
    int c = a >b ? a : b;
    cout << " is " << c << endl ;
    return 0;
}