#include<iostream>
struct inflabale{
  char name[20];
  float volume;
  double price;
};
enum spetrum {red,orange,yellow,green,blue,violer,indigo,ultravioler};
int main(){
  using namespace std;
  inflabale guests[2] = {
    {"Bambi",0.5,21.99},
    {"Godzilla",2000,565.99}
  };
  cout << "The guests " << guests[0].name << " and " << guests[1].name <<endl;
  cout <<"have a combined volume of "
        << guests[0].volume + guests[1].volume <<" cubic feet.\n";
  int temp;
  // spetrum temp;
  // temp = red ;
        temp = red +orange;
        cout << "red is " << temp << endl;
        return 0;
}
