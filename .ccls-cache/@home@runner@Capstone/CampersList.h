#ifndef CAMPERSLIST_H
#define CAMPERSLIST_H

#include <vector>
#include "Campers.h"


class CampersList {
private:
  vector<Campers> mList;

public:

  void addCamper(const Campers& c) {mList.push_back(c);}
  bool removeCamper(int id);

  friend ostream& operator<<(ostream& os, const CampersList& cL);
};

#endif