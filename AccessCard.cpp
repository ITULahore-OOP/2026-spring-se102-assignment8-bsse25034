#include "AccessCard.h"
// Constructor AND Destructor
AccessCard ::AccessCard(string cardID, int accessLevel)
{
    this->cardID = cardID;
    this->accessLevel = accessLevel;
}
// setters
void AccessCard ::setCardId(string ID)
{
    cardID = ID;
}
void AccessCard ::setAccessLevel(int access)
{
    accessLevel = access;
}

// getters
string AccessCard ::getCardID()
{
    return cardID;
}
int AccessCard ::getAccessLevel()
{
    return accessLevel;
}
// Display Function
void AccessCard ::displayCardInfo()
{
    cout << "\n==============\n"
            "Satff Card info"
            " ==============\n";
    cout << "Staff  Card Id: " << cardID << endl;
    cout << "Staff Access Level is:  " << accessLevel << endl;
}
