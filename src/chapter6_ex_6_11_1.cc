#include <iostream>
using namespace std;
int main() {
std::string ch;
cin >> ch;
cout << "ch is old " << ch << endl;
int i = 0;
while( ch[i]!='@'){
  if(ch[i]>=65 && ch[i] <= 91 ){
    ch[i] = ch[i] +32;
    i++;
    continue;
   }
  if (ch[i]>= 97 && ch[i]<= 123){
    ch[i] = ch[i] -32;
    i++;
    continue;
  }
  i++;
}
cout << "ch = " << ch << endl;
return 0;
}
