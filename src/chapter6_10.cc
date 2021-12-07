//switch.cc --using switch statement
#include <iostream>
using namespace std ;
void showmenu();
void report();
void comfort();
int main(){
    showmenu();
    int choice;
    cin >> choice;
    while (choice !=5){
        switch (choice){
        case 1:
            cout << "\a\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "the boss was in all day.\n";
            break;
        case 4:
            comfort();
            break;        
        default:
            cout << "that's not a choice.\n";
            break;
        }
    showmenu();
    cin >> choice ;
    }
    cout << "bye.\n";
    return 0;
}
void showmenu(){
    cout << "please enter  1, 2, 3, 4, or 5.\n"
         << "1)alarm        2)report\n"
         << "3)alibi        4)comfort\n"
         << "5) quit\n";
}
void report(){
    cout << "it's been an excellent week for business.\n"
         <<  "sales are up 120%.expenses are down 35.\n";
}
void comfort(){
    cout << "your emplouees think you are the finest eco\n"
         << "in the industry.the board of directors think\n"
         << "you are the finest exo in the industry.\n";    
}
