//jump.cc --using continue and break
#include <iostream>
const int ar_size = 80 ;
int main(){
	using namespace std;
	char line[ar_size] ;
	int spaces = 0 ;

	cout << "Enter a line of test.\n";
	cin.get(line,ar_size);
	cout << "complete line.\n" << line << endl;
	cout << "line through first period:\n";
	for(int i=0;line[i] != '\0';i++){
		cout << line[i];
		if(line[i] == '.'){
			break;
		}
		if(line[i] != ' ')continue;
		spaces++;
	}
	cout << "\n" << spaces << " spaces.\n";
	cout << "Done.\n";
	return 0;

}
