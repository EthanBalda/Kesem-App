#ifndef DONATIONS_H
#define DONATIONS_H

#include "Registry.h"
#include <iostream>

using namespace std;

class Donations : public Registry{
private: 
double mDonation;
int mId;

static int sNextId;

public:

Donations(string name, string email, double donations) : Registry(name, email), mDonation(donations),  mId(sNextId++) {}

double getDonation() const { return mDonation; }
void setDonation(double donation) {mDonation = donation;}

int getId() const { return mId; }
void setDonation(int id) {mId = id;}

bool operator==(const Donations& o) {
  return Registry::operator==(o);
}

Donations operator+=(Donations o);

string print() const;

friend ostream& operator<<(ostream& os, const Donations& d){
return os << d.print();
  }
};

#endif