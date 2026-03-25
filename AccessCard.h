#ifndef AccessCard_H
#define AccessCard_H
#include<iostream>
#include<string>
using namespace std;
class AccessCard
{
private:
string cardID;
int accessLevel;
    /* data */
public:
// Constructor AND Destructor
AccessCard(string cardID, int accessLevel);
//setters
void setCardId(string ID);
void setAccessLevel(int access);


//getters
string getCardID();
int getAccessLevel();
//Display Function
void displayCardInfo();
    

};





#endif