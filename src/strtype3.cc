// strtype3.cc --more string class feature
#include <iostream>
#include<string>
#include<cstring>
int main(){
	using namespace std;
	char charr1[20];
	char charr2[20] ="jaguar";
	string str1;
	string str2 = "parther";
	//assinggnment for string objects and character arrays
	str1 =str2;
	strcpy(charr1,charr2);

	str1 += " paste";
	strcat(charr1," juice");

	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "the string " << str1 << " contains " 
		<< len1 << " characters.\n";
	cout << "the string " << charr1 << " cantains "
		<< len2 << " characters.\n";
	return 0;
}
