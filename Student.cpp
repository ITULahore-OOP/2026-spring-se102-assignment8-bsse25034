#include"Student.h"
//Constructor AND Destructor
Student :: Student(string name, int memberID, double cgpa):UniversityMember(name,memberID){

    this->cgpa=cgpa;
}

//Setters

void Student :: setCgpa(double gpa){
    cgpa=gpa;

}


//Getters
double Student :: getCGPA(){
    return cgpa;

}
//update function for CGPA
void Student :: updateCGPA(double newCGPA){
    cgpa=newCGPA;

}

//using virtual function in base class now using override fn in derived class

void Student :: displayRole() {

 cout<<"Role: Student"<<endl;

}