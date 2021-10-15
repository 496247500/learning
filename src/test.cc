#include<iostream>
#include<cstring>
#include<vector>
#include<array>
struct CandyBar
  {
    char brand[20];
    float weight;
    unsigned int calorie;
  };
int main(){
  using namespace std;
 // std::cout << (char *)"please input a integer number :" << std::endl;
  // unsigned int size;
  // cin>> size ;
  // //int *arr = new int[size] ;
  //  vector<int> arr(size);
  // for(int i =0;i!=size;i++)  arr[i] =i;
  // for(int i =0;i!=size;i++)  {
  //   cout << "arr[" << i <<"] = " <<arr[i] << endl ;
  // }

  //delete [] arr;
  //const int size = 10;
  //std::vector <std::string>  arr1(size);
  //std::array <std::string,size> arr;
  // char firtname[20] ,lastname[20];
  // char grade ;
  // int age;
  // cout << "what's your firstname ? ";
  // cin.getline(firtname,20);
  // cout << "What's your lastname? ";
  // cin.getline(lastname,20);
  // cout << "what letter grade do you deserve? ";
  // cin >> grade ;
  // cout << "What is your age ? ";
  // cin >> age;
  // cout << "Name: " << firtname << ", " << lastname << endl;
  // cout << "Grade : " << char (grade +1)  << endl;
  // cout << "Age: " << age << endl;
  // return 0;
  // const unsigned int SIZE = 20;
  // char first_name[SIZE],last_name[SIZE];
  // char full_name[SIZE * 2];
  // cout << "Enter your first name: ";
  // cin.getline(first_name,SIZE);
  // cout << "Enter your last name: ";
  // cin.getline(last_name,SIZE);
  // strcpy(full_name,last_name);
  // strcat(full_name,", ");
  // strcat(full_name,first_name);
  // cout << "Here's the imformation in a single string : " << full_name << endl;
  // return 0;
  CandyBar snack = {"Mocha Munch", 2.3 , 350} ;
  cout << "brand : " << snack.brand << endl;
  cout << "weight : " << snack.weight << endl;
  cout << "colorie : " << snack.calorie << endl;
  return 0;
  

}