#include "Registry.h"



string Registry::print() const{
  stringstream ss;
  ss << left << setw(20) << mFullName << setw(30) << mEmail;
  return ss.str();
}