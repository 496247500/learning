//enum.cc --using enum
#include <iostream>
enum {red, orange, yellow, green, blue, violet, indigo};
int main(){
    using namespace std;
    cout << "Enter colorcode (0-6)" ;
    int code ;
    cin >> code ;
    while(code >= red && code <=indigo){
        switch (code){
        case red:
            cout << "Her lips were red"<<endl;
            break;
        case orange:
            cout << "Her hair were orange." << endl;
            break;
        case yellow:
            cout << "Her shoes were yelow." << endl;
            break;
        case green:
            cout << "Her nails were green." <<endl;
            break;
        case blue:
            cout << "Her sweetsuit were blue.\n" ;
            break;
        case violet:
            cout << "Her eyes were violet.\n" ;
            break;    
        case indigo:
            cout << "Her mode were indigo.\n" ;
            break;    
        default:
            break;
        }
        cout << "Enter colorcode (0-6)" ;
        cin >> code ;
    }
    cout << "Bye.\n";
    return 0;
}