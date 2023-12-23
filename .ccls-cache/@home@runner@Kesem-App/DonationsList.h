#ifndef DONATIONSLIST_H
#define DONATIONSLIST_H

#include <vector>
#include "Donations.h"


class DonationsList {
private:
  vector<Donations> mList;

public:

  void addDonation(const Donations& d) {mList.push_back(d);}
  bool removeDonation(int id);

  friend ostream& operator<<(ostream& os, const DonationsList& dl);
};

#endif