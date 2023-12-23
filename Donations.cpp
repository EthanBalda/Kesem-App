#include "Donations.h"

int Donations::sNextId = 1;

Donations Donations::operator+=(Donations o){
  if (mFullName == o.mFullName)
  mDonation += o.mDonation;
  return *this;
}
  

string Donations::print() const{
  stringstream ss;
  ss << left << setw(10) << mId << Registry::print() << "| $" << fixed << setprecision(2) << mDonation;
  return ss.str();
}