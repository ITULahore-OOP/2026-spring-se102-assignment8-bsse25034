
#include "Student.h"
#include "Staff.h"

#include "UniversityMember.h"
#include "TeachingAssistant.h"

#include "TutoringSession.h"

#include "Department.h"
#include "AccessCard.h"

using namespace std;

int main()
{

    string dName;
    cout << "Enter the Department Name: ";
    getline(cin, dName);
    Department myDept(dName);
    // objects

    Student *newstudent=nullptr;
    TeachingAssistant *ta=nullptr;
    AccessCard *taCard=nullptr;
    Staff *newstaff=nullptr;
    TutoringSession *sess2=nullptr;
TutoringSession *sess1=nullptr;
    int choice = 0;

    // 2. Main Menu
    do
    {
        cout << "\n\t\t\t--- UNIVERSITY " << dName << " DEPARTMENT MANAGEMENT SYSTEM ---" << endl
             << endl;
        cout << "\t\t\t1. Add a Student                     2. Add a Staff Member" << endl;
        cout << "\t\t\t3. Add a Teaching Assistant          4. Display All Members " << endl;
        cout << "\t\t\t5. Tutoring Sessions                 6.Enter 6 Exit" << endl;
        cout << "Select an option: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;

            double gpa;
            int id;
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "EnterMember ID: ";
            cin >> id;
            cout << "Enter CGPA: ";
            cin >> gpa;
            // (Aggregation)
            newstudent = new Student(name, id, gpa);
            myDept.addMember(newstudent);
            cout << "Student added successfully!" << endl;
        }
        else if (choice == 2)
        {
            string name, cID;
            int id, aLevel;
            double sal;
            cout << "Enter Staff Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Member ID: ";
            cin >> id;
            cout << "Enter Salary: ";
            cin >> sal;
            cout << "Enter Access Card ID: ";
            cin >> cID;
            cout << "Enter Access Level (1-3): ";
            cin >> aLevel;
            AccessCard newCard(cID, aLevel);
            newstaff = new Staff(name, id, sal, newCard);
            myDept.addMember(newstaff);
            cout << "Staff added successfully!" << endl;
        }
        else if (choice == 3)
        {
            int id, aLevel, hours;
            string name, cID;
            double gpa, sal;
            cout << "Enter TA Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Member ID: ";
            cin >> id;
            cout << "Enter CGPA: ";
            cin >> gpa;
            cout << "Enter Salary: ";
            cin >> sal;
            cout << "Enter Access Card ID: ";
            cin >> cID;
            cout << "Enter Access Level: ";
            cin >> aLevel;
            cout << "Enter Working Hours: ";
            cin >> hours;

            taCard = new AccessCard(cID, aLevel);
            ta = new TeachingAssistant(name, id, gpa, sal, *taCard, hours);
            // Overloading
            cout << "--- Testing TA Grading Logic ---" << endl;

            int score;
            cout << "Enter Numeric Score out of /100: ";
            cin >> score;
            string grad;
            cout << "Enter Grade From(A-Z): ";
            cin >> grad;
            ta->gradeAssignment(score); // Integer version
            ta->gradeAssignment(grad);  // String version

            myDept.addMember(ta);
        }
        else if (choice == 4)
        {
            // UniversityMember* array
            myDept.displayAllRoles();
        }
        else if (choice == 5)
        {
             if (newstudent == nullptr || ta == nullptr) {
        cout << "Error: To use thi module You must add a Student (Option 1) and a TA (Option 3) first!" << endl;
    }else{

            double dur1, dur2;
            int id;
            cout << "Enter the Tutoring Session ID: ";
            cin >> id;
            cout << "Enter Duration for Session 1 (minutes): ";
            cin >> dur1;
            cout << "Enter Duration for Session 2 (minutes): ";
            cin >> dur2;

            // Student sTemp("TempS", 0, 0);
            // AccessCard cTemp("TEMP", 0);
            // TeachingAssistant taTemp("TempTA", 0, 0, 0, cTemp, 0);
            
    
        
    

             sess1=new TutoringSession(id, dur1, ta, newstudent);
             sess2=new TutoringSession(id, dur2, ta, newstudent);

            if (*sess1 > *sess2)
            {
                cout << "Result: Session 1 is longer." << endl;
            }
            else
            {
                cout << "Result: Session 2 is longer or equal." << endl;
            }

            TutoringSession combined = *sess1 + *sess2;
            cout << "Total Merged Duration: " << combined.getDuration() << " mins" << endl;
        }
    }
        else if (choice == 6)
        {
            cout << "Exiting program..." << endl;
        }
        else
        {
            cout << "Invalid Option!Plz Try Again" << endl;
        }

    } while (choice != 6);
    // Add this before return 0;
delete newstudent;
delete ta;
delete taCard;
delete newstaff;
delete sess1;
delete sess2;

    return 0;
}