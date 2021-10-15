//some types combinations
#include<iostream>
struct antarctica_year_end{
  int year;
  int month;
  int date;
};
int main(){
  antarctica_year_end s01, s02, s03;
  s01.year = 2021;
  antarctica_year_end * pa = &s02;
  pa->year = 1998;
  antarctica_year_end trio[3];
  trio[0].year = 2010;
  std::cout << trio->year << std::endl;
  const antarctica_year_end *arp[3] = {&s01, &s02,&s03};
  std::cout << arp[1]->year << std::endl;
  const antarctica_year_end ** ppa =arp;
  auto ppb =arp;
  std::cout << (*ppa)->year << std::endl;
  std::cout << (*(ppb+1))->year << std::endl;
  return 0;
}