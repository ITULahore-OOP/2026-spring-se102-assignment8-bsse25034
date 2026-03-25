#ifndef TeachingAssistant_H
#define TeachingAssistant_H
#include<iostream>
#include<string>
#include"Student.h"
#include"Staff.h"
#include"AccessCard.h"
using namespace std;
//Derived Class from Student AND Staff

class TeachingAssistant:public Student,public Staff
{
private:
 int workingHours;
 AccessCard card;

    /* data */
public:
  //Constructor 
TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours);
//Setters
void setWorkingHours(int wH);

//display function
void displayRole() override;
//getters
void gradeAssignment(int score);
//Function to calculate the grade
void gradeAssignment(string letterGrade);

};





#endif