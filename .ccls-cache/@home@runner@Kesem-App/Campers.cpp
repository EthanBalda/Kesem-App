#include "Campers.h"

int Campers::sNextId = 1;

string Campers::print() const{
  stringstream ss;
  ss << left << setw(10) << mId << Registry::print() << "| " << setw(20) << mCampersName  << setw(22) << mAge << setw(20) << mCity;
  return ss.str();
}