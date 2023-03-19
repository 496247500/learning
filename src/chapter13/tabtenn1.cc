#include "tabtenn1.h"

#include <iostream>
TableTennisPlayer::TableTennisPlayer(const std::string &fn,
                                     const std::string &ln, bool ht)
    : first_name(fn), last_name(ln), has_table(ht){};
void TableTennisPlayer::Name() const {
  std::cout << last_name << ", " << first_name;
}
// RatePlayer methods
RatePlayer::RatePlayer(unsigned int r, const std::string &fn,
                       const std::string &ln, bool ht)
    : TableTennisPlayer(fn, ln, ht) {
  rating = r;
}
RatePlayer::RatePlayer(unsigned int r, const TableTennisPlayer &tp)
    : TableTennisPlayer(tp), rating(r) {}
