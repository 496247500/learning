//strc_ref.cc --using structure references
#include <iostream>
#include <string>
struct free_throws{
  std::string name;
  int made;
  int attempts;
  float percent;
};
void display(const free_throws & ft);
void set_pc(free_throws &ft);
free_throws &acccumulate(free_throws &targer, const free_throws &source);

int main(){
  free_throws one = { "Ifelsa Branch", 13, 14};
  free_throws two = { "Andor Kontt", 10, 16};
  free_throws three = { "Minnie Max", 7, 9};
  free_throws four = {"Whily Looper", 5 ,9};
  free_throws five = { "Long Long", 6, 14};
  free_throws team = {"Throwgoods", 0 , 0};
  free_throws dup;
  set_pc(one);
  display(one);
  acccumulate(team, one);
  display(team);
  display(acccumulate(team, two));
  acccumulate(acccumulate(team, three), four);
  display(team);
  dup = acccumulate(team, five);
  std::cout << "Displaying team:\n";
  display(team);
  std::cout << "Displaying dup after assignment:\n";
  display(dup);
  set_pc(four);
  acccumulate(dup, five) = four;
  std::cout << "Displaying dup after ill-advised assignment:\n";
  display(dup);
  return 0;
}
void display(const free_throws &ft){
  using namespace std;
  cout << "Name: " << ft.name << endl;
  cout << "Made: " << ft.made << '\t';
  cout << "Attempts: " << ft.attempts << '\t';
  cout << "Percent: " << ft.percent << endl;
}
void set_pc(free_throws &ft){
  if(ft.attempts != 0){
    ft.percent = 100.0f *float(ft.made)/float(ft.attempts);
  }
  else
    ft.percent = 0;
}
free_throws &acccumulate(free_throws &targer, const free_throws &source){
 targer.attempts += source.attempts;
 targer.made += source.made;
 set_pc(targer);
 return targer;
}
