#ifndef REGISTRY_H
#define REGISTRY_H

#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

class Registry{
protected:
string mFullName;
string mEmail;

public:

Registry(string name, string email) : mFullName(name), mEmail(email) {}
virtual ~Registry() {}


string getFullName() const { return mFullName; }
string getEmail() const { return mEmail; }

void setFullName(string fullName) {mFullName = fullName;}
void setEmail(string email) {mEmail = email;}

bool operator==(const Registry& o){
  return mFullName == o.mFullName && mEmail == o.mEmail;
}

virtual string print() const;

friend ostream &operator<<(ostream &os, const Registry &r) {
  return os << r.print();
}

};

#endif