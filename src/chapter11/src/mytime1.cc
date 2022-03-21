//myTime1.cc -- implementing Time methods
#include <iostream>
#include "mytime1.h"

Time::Time() {
  hours = minutes = 0;
}
Time::Time(int h, int m) {
  hours = h;
  minutes = m;
}
void Time::add_min(int m) {
  minutes +=m;
  hours += minutes / 60;
  minutes = minutes % 60;
}
void Time::add_hour(int h) {
  hours += h;
}
void Time::reset(int h, int m) {
  hours = h;
  minutes = m;
}
Time Time::operator+(const Time &t) const {
  Time sum;
  sum.minutes = minutes + t.minutes;
  sum.hours = hours + t.hours + sum.minutes / 60;
  sum.minutes = sum.minutes % 60;
  return  sum;
}
void Time::show() const {
  std::cout << hours << " hours, " << minutes << " minutes";
}
