#include <iostream>

#include "chapter13_tabenn0.h"
TableTennisPlayer::TableTennisPlayer(const std::string &fn,
                                     const std::string &ln, bool ht)
    : first_name(fn), last_name(ln), has_table(ht){};
void TableTennisPlayer::Name() const {
  std::cout << last_name << ", " << first_name;
}