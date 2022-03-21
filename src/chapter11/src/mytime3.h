//mytime3.h --time class with fiends
#ifndef MYTIME0_H_
#define MYTIME0_H_
#include <iostream>
class Time {
 private:
   int hours;
   int minutes;
 public:
   Time();
   Time(int h, int m =0);
   void add_min(int m);
   void add_hour(int h);
   void reset(int h = 0, int m = 0);
   Time operator+(const Time &t) const;
   Time operator-(const Time &t) const;
   Time operator*(double n) const;
   friend Time operator*(double m, const Time &t) {
    return t * m;
   }
   friend std::ostream& operator<<(std::ostream &os, const Time &t);
   void show() const;
};
#endif
