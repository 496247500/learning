// tabenn0.h -- a table-tennis base class
#ifndef TABENNO_H_
#define TABENNO_H_
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
  void ReseTab(bool v) { has_table = v; };
};
#endif