#ifndef Staff_H
#define Staff_H
#include<iostream>
#include<string>
using namespace std;
#include"UniversityMember.h"
#include"AccessCard.h"
class Staff:virtual public UniversityMember
{
private:
double salary;
AccessCard card;//Composition (it cant exist independently )
    /* data */
public:
//Constructor 
Staff(string name, int memberID, double salary, AccessCard card);
//setters
void setSalary(double salary);

//getters
double getSalary();
//virtual functions defined in base class using in Virtual derived class
void displayRole() override;
//using composition to show the display function for card
void displayCard();
   
};







#endif