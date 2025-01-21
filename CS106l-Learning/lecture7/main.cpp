#include <iostream>
#include <string>
#include "src/SectionLeader.cpp"
#include "src/StudentID.cpp"
#include "src/Student.cpp"
#include "src/Employee.cpp"
void creatStudentID(){
StudentID sid {"Dingjiaao","1157607108",2025};
std::cout<<"Name: "<<sid.getName()<<std::endl;
std::cout<<"Sunet: "<<sid.getSunet()<<std::endl;
std::cout<<"ID Number: "<<sid.getID()<<std::endl;
}

void createSectionLeader(){
    SectionLeader s1{"DJA","662288","Computer Science","Keith Schwarz",2025,"01","CS106L",25};
}

int main(){
    int choice;

    std::cout << "Choose an option:\n";
    std::cout << "1. Create Student ID\n";
    std::cout << "2. Select Advisor\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin>>choice;

    std::cout<<"################################################################################\n";
    
    if(choice == 1){
        creatStudentID();
    }else if(choice == 2){
        createSectionLeader();
    }else{
        std::cout<<"Invalid choice, please enter 1 or 2.\n";
    }
    return 0;
}
