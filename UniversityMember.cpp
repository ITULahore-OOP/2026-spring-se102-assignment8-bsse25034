#include "UniversityMember.h"

//Constructor & Virtual de-structor
  UniversityMember :: UniversityMember(string name, int memberID){
   
    this->name=name;
    this->memberID=memberID;


  }
 UniversityMember :: ~UniversityMember(){

}
//Setters
void UniversityMember :: setName(string n){
    name=n;

}
void UniversityMember :: setMemberID(int ID){
    memberID=ID;

}
//Getters
string UniversityMember :: getName(){
    return name;

}
int UniversityMember :: getMemberID(){
    return memberID;

}
