//cctypes.cc --using the ctype.h library
#include <iostream>
#include <cctype>
int main(){
    using std::cin;
    using std::cout;
    cout << "entere text for analysis, and type @"
            " to terminate input.\n";
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0 ;
    int others = 0;
    cin.get(ch);//get fist character    
    while (ch != '@'){
        if(isalpha(ch)){
            chars++;
        }
        else if(isspace(ch)){
            whitespace++ ;
        }
        else if(isdigit(ch)){
            digits++;
        }
        else if(ispunct(ch)){
            punct++;
        }
        else 
            others++;
            cin.get(ch); //get next character
    }
    cout << chars << " letters, "
         << whitespace <<" whitespace, "
         << digits << " digits, "
         << punct << " punctuations, "
         << others << " others.\n";
    
}