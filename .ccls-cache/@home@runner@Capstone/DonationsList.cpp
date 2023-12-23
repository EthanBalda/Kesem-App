#include "DonationsList.h"
#include <iomanip>

bool DonationsList::removeDonation(int id){
  
  for (auto it = mList.begin(); it != mList.end(); ++it){
  if(it->getId() == id){
    mList.erase(it);
    return true;
     }
   }
  return false;
}


ostream& operator<<(ostream& os, const DonationsList& inventory){

os << "~~~Current Donations~~~\n\n"
  << left << setw(10) << "ID" << setw(20) << "Name" << setw(30) << "Email " << setw(20) << "| Donation" << endl;

  for (auto d : inventory.mList)
    os << d << endl;
  return os;
}