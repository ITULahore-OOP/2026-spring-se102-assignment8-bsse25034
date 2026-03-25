#ifndef TutoringSession_H
#define TutoringSession_H
#include<iostream>
#include<string>
#include"Student.h"
using namespace std;
#include"TeachingAssistant.h"
// Class
class TutoringSession
{
private:
int sessionID;
double durationMinutes;
TeachingAssistant* ta;//Aggregation(weak-realtionship)
Student*student; //Aggregation(weak-realtionship)
    /* data */
public:
//Constructor
TutoringSession(int sessionID, double durationMinutes, TeachingAssistant* ta, Student* student);
//setters
void setSessionID(int ID);
void setDurationMinutes(double dM);


//getters
double getDuration();
int getSessionID();

//display function
void displaySession();
//operator overloading concept
TutoringSession operator+(const TutoringSession& other);

    
};
bool operator>(TutoringSession s1, TutoringSession s2);


#endif