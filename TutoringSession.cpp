#include "TutoringSession.h"
// Constructor
TutoringSession ::TutoringSession(int sessionID, double durationMinutes, TeachingAssistant *ta, Student *student)
{

    this->sessionID = sessionID;
    this->durationMinutes = durationMinutes;
    this->ta = ta;
    this->student = student;
}
// setters
void TutoringSession ::setSessionID(int ID)
{
    sessionID = ID;
}
void TutoringSession ::setDurationMinutes(double dM)
{
    durationMinutes = dM;
}

// getters
double TutoringSession ::getDuration()
{
    return durationMinutes;
}

int TutoringSession ::getSessionID()
{
    return sessionID;
}
// display function
void TutoringSession ::displaySession()
{
    cout << " Session ID is: " << sessionID << endl;
    cout << "Duration of the Session: " << durationMinutes << endl;
}
// operator overloading concept
TutoringSession TutoringSession ::operator+(const TutoringSession &other)
{
    double duration =durationMinutes + other.durationMinutes;
    TutoringSession temp( getSessionID(),duration, ta, student);
    return temp;
}

// Nonmeber opertor overloading new concept for me
bool operator>(TutoringSession s1, TutoringSession s2)
{
    if (s1.getDuration() > s2.getDuration())
        return true;
    else
        return false;
}