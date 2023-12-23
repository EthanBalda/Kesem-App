#include "CampersList.h"
#include <iomanip>

bool CampersList::removeCamper(int id){

  for (auto it = mList.begin(); it != mList.end(); ++it){
  if(it->getId() == id){
    mList.erase(it);
    return true;
     }
   }
  return false;
}


ostream& operator<<(ostream& os, const CampersList& inventory){

os << "~~~Registered Campers~~~\n\n"
  << left << setw(10) << "ID#" << setw(20) << "Parents Name" << setw(30) << "Email"<< setw(22) << "| Campers Name" << setw(22) << "Camper's Age" << setw(22) << "City" << endl;

  for (auto d : inventory.mList)
    os << d << endl;
  return os;
}