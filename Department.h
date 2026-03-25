#ifndef Department_H
#define Department_H
#include<iostream>
#include<string>
using namespace std;
#include"UniversityMember.h"

//class
class Department
{
private:

string departmentName;
 UniversityMember* members[50];// Demonstrates Aggregation and Polymorphic Collections
int memberCount=0;// To track the current number of members added

    /* data */
public:
//Constructor
Department(string departmentName);
//Add member function
void addMember(UniversityMember* member);
//All Roles  display function
void displayAllRoles();
//helper Getter functions
int getMemberCount(){
    return memberCount;
}
//helper setter
void setMemberCount(int count){
    memberCount=count;
}


};





#endif
