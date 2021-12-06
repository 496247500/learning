//ifelse.cc --using the if else statement
#include<iostream>
int main(){
    char ch;
    std::cout << "Type ,and i shall repeat.\n";
    std::cin.get(ch);
    while(ch != '.'){
        if(ch == '\n')
            std::cout << ch ;
        else 
        std::cout << ++ch ;//字符加
        //ch+1 自动由char型转为整型
        std::cin.get(ch);
    }
    std::cout << "\nPlease excuse the slight confusion.\n";
    return 0;
}