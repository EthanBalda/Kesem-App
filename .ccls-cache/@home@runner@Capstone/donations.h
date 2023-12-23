#ifndef DONATIONS_H
#define DONATIONS_H

#include <iostream>

using namespace std;

class Donations{
private: 
double mDonation;
string mFullName;
string mEmail;

public:

Donations(double, string, string);

double getDonation() const { return mDonation; }
string getFullName() const { return mFullName; }
string getEmail() const { return mEmail; }

void setDonation(double donation) {mDonation = donation;}
void setFullName(string fullName) {mFullName = fullName;}
void setEmail(string email) {mEmail = email;}


friend ostream& operator<<(ostream& os, const Donations& d);

};

#endif