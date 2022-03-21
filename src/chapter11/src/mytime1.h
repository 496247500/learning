//mytime1.h --time class before operator overloading
#ifndef MYTIME0_H_
#define MYTIME0_H_
class Time {
 private:
   int hours;
   int minutes;
 public:
   Time();
   Time(int h, int m =0);
   void add_min(int m);
   void add_hour(int h);
   void reset(int h, int m);
   Time operator+(const Time &t) const;
   void show() const;
};
#endif
