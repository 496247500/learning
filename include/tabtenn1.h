// tabtenni1.h --a table-tennis base class
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
class TableTennisPlayer {
 private:
  std::string first_name;
  std::string last_name;
  bool has_table;

 public:
  TableTennisPlayer(const std::string &fn = "none",
                    const std::string &ln = "none", bool ht = false);
  void Name() const;
  bool HasTable() const { return has_table; };
  void ResetTable(bool v) { v = false; };
};
// simple derived class
class RatePlayer : public TableTennisPlayer {
 private:
  unsigned int rating;

 public:
  RatePlayer(unsigned int r = 0, const std::string &fn = "none",
             const std::string &ln = "none", bool ht = false);
  RatePlayer(unsigned int r, const TableTennisPlayer &tp);
  unsigned int Rating() const { return rating; };
  void ResetRating(unsigned int r) { rating = r; };
  // void show(const TableTennisPlayer &rt);
  // void Wohs(const TableTennisPlayer *pt);
};
#endif
