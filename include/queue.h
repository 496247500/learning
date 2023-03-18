//queue.h -- interface for a queue
#ifndef QUEUE_H_
#define QUEUE_H_
// This queue will contain Customer items
class Customer {
 private:
   long arrive;
   int processtime;
 public:
   Customer() { arrive = processtime = 0;};
   void set(long when);
   long when()  const{return arrive;}
   int ptime() const {return  processtime;}
};
typedef Customer Item;
class Queue {
 private:
// class scope definitions
// Node is a nested structure definitions local to this class
  struct Node {Item item; struct Node * next;};
  enum {q_size = 10};
// private class members
};
#endif
