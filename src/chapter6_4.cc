//or.cc --using the logic OR operate
#include<iostream>
int main(){
    std::cout << "this [rogram may reformat your hard disk\n"
                "and  destroy all your date.\n"
                "Do you wisht to continue <y/n>";
    char ch;
    std::cin >> ch ;
    if (('y'== ch) ||('Y' ==ch)){
        std::cout << "Your were warnedd ! \a\a\n";        
    } else if(('n' == ch ||('N'== ch))){
        std::cout << "a wise choice ...bye\n";     
        }
    else
    std::cout << "that wasn't a y or n ! apparently you "
    "can't follow\ninstructions,so "
    "I'll trash your disk anyway.\a\a\a\n";
    return 0;

}