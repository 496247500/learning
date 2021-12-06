//and.cc --using the logical and operator
#include <iostream>
const int arsize =6;
int main(){
    float naaq[arsize];
    std::cout << "Enter the Naaqs"
              << "of\nyour neighbors.Program teminates "
              << "when you make\n " << arsize << "entries "
              << "or enter a negative value.\n";
    int i =0;
    float temp;
    std::cout << "first value: ";
    std::cin >> temp;
    while(i < arsize && arsize >=0){
        naaq[i] = temp;
        ++i;
        if (i < arsize){
            std::cout << "next value: ";
            std::cin >> temp;
        }
    }
        if (0 == i){
            std::cout << "No data --bye\n";

        } 
        else{
            std::cout << "enter your naaq: ";
            float you = 0.0f ;
            int count =0;
            for(int j=0 ;j < i ;j++){
                if(naaq[j] > you)
                ++count ;
            }
            std::cout << count ;
            std::cout << " of your neighbors have greater awareness of\n"
                      << "the new age than you do .\n";
        }
    return 0;

}