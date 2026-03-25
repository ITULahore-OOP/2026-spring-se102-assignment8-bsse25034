#include"TeachingAssistant.h"
//Constructor 
TeachingAssistant :: TeachingAssistant(string name, int memberID, double cgpa, double salary, AccessCard card, int workingHours):card(card),
Student( name,  memberID,  cgpa),
Staff( name,  memberID,  salary,  card),
UniversityMember(name,memberID)
{
 
    this->workingHours=workingHours;
}
//Setters
void TeachingAssistant :: setWorkingHours(int wH){
    workingHours=wH;

}

//display function
void TeachingAssistant :: displayRole() {
    cout<<"Role: Teaching Assistant"<<endl;

}
//grade Assignnment Function
void TeachingAssistant :: gradeAssignment(int score){
 cout << " numeric score: " << score <<"/100"<< endl;
    

}
//Function to calculate the grade
void TeachingAssistant :: gradeAssignment(string letterGrade){
    cout << "Grading assignment with letter grade: " << letterGrade << endl;
    

}