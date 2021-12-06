//ifelseif.cc --using if  else if else
#include<iostream>
const int Fave = 27;
int main(){
    int n;
    std::cout << " enter a number in the ranger 1-100 to find\n";
    std::cout << "my favorate number : ";
    do {
        std::cin >> n;
        if (n <Fave){
        std::cout << "too low -- guess again" << std::endl;
        }
        else if(n >Fave){
        std::cout << "too high -- guess again" << std::endl;      
        }
        else 
        std::cout <<  Fave << " is right!\n";

    }
    while (n != Fave);
   return 0 ;
    
}