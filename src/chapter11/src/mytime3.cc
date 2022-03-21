//myTime3.cc -- implementing Time methods
#include <iostream>
#include "mytime3.h"

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
Time Time::operator-(const Time&t) const {
  Time diff;
  int tot1,tot2;
  tot1 = t.minutes + 60 * t.hours;
  tot2 = minutes + 60 * hours;
  diff.minutes = (tot2 -tot1) % 60;
  diff.hours = (tot2 - tot1) / 60;
  return diff;
}
Time Time::operator*(double n) const {
  Time result;
  long totalminutes = n * hours * 60 + n * minutes;
  result.minutes = totalminutes % 60;
  result.hours = totalminutes / 60;
  return result;
}
void Time::show() const {
  std::cout << hours << " hours, " << minutes << " minutes";
}
