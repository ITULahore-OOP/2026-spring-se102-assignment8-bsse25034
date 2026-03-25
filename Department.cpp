#include"Department.h"
//Constructor
Department ::Department(string departmentName){
  this->departmentName=departmentName;
}

//Add member function
void Department :: addMember(UniversityMember* member){
    if(memberCount>50){
        cout<<" Limit For Members has been  Reached!\n ";
    }
    else
    members[memberCount]=member;
    memberCount++;

}
//All Roles  display function
void Department:: displayAllRoles(){
    for(int i=0;i<memberCount;i++){
    members[i]->displayRole();
    }
cout<<"\n=======================\n";

}