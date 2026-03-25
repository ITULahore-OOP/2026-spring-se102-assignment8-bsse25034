#ifndef UniversityMember_H
#define UniversityMember_H
#include<iostream>
#include<string>
using namespace std;
  
//Base Class

class UniversityMember
{
private:
string name;
int memberID;
    /* data */
public:
 //Constructor & Virtual de-structor
  UniversityMember(string name, int memberID);
virtual ~UniversityMember();
//Setters
void setName(string n);
void setMemberID(int ID);
//Getters
string getName();
int getMemberID();
virtual void displayRole() = 0; 
};



#endif