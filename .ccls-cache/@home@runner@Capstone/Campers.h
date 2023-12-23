#ifndef CAMPERS_H
#define CAMPERS_H

#include "Registry.h"

class Campers : public Registry{
private:
string mCampersName;
int mAge;
string mCity;
int mId;

static int sNextId;

public: 

Campers(string name, string email, string campersName, int age, string city) : Registry(name, email), mCampersName(campersName), mAge(age), mCity(city), mId(sNextId++) {}

string getCampersName() const { return mCampersName; }
int getAge() const { return mAge; }
string getCity() const { return mCity; }
int getId() const { return mId; }

void setDonation(int id) {mId = id;}
void setParentsName(string campersName) {mCampersName = campersName;}
void setAge(int age) {mAge = age;}
void setCity(string city) {mCity = city;}

bool operator==(const Campers& o) {
  return Registry::operator==(o);
}

 string print() const;

friend ostream& operator<<(ostream& os, const Campers& c){
return os << c.print();
  }
};

#endif