#ifndef Student_H
#define Student_H
#include<iostream>
#include<string>
#include"UniversityMember.h"
using namespace std;

// virtual derived CLASS from UniversityMember
 

class Student:virtual public UniversityMember

{
private:
double cgpa;
    /* data */
public:
//Constructor AND Destructor
Student(string name, int memberID, double cgpa);
//Setters

void setCgpa(double gpa);


//Getters
double getCGPA();
//update function for CGPA
void updateCGPA(double newCGPA);



void displayRole() override ;//using virtual in base class now override in derived

   
};



#endif
