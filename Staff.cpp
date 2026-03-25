#include "Staff.h"
// Constructor
Staff::Staff(string name, int memberID, double salary, AccessCard card) : card(card), UniversityMember(name, memberID)
{
    this->salary = salary;
}
// setters
void Staff::setSalary(double salary)
{

    this->salary = salary;
}

// getters
double Staff::getSalary()
{
    return salary;
}
// virtual functions defined in base class using in Virtual derived class
void Staff::displayRole()
{
    cout << "Role: Staff" << endl;
}
// using composition to show the display function for card
void Staff::displayCard()
{
    card.displayCardInfo();
}