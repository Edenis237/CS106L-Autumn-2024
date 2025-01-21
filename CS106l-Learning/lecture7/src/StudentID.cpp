#include "../include/StudentID.h"


//默认构造函数
StudentID::StudentID(){
    name="John Appleseed";
    sunet="jappleseed";
    idNumber=00000001;
}

//参数化构造函数
StudentID::StudentID(std::string name,std::string sunet,int idNumber){
    this->name = name;
    this->sunet = sunet;
    if(idNumber){
        this->idNumber = idNumber;
    }
}

// 列表化初始构造函数（C++11）
// StudentID::StudentID(std::string name,std::string sunet,int idNumber):name{name},sunet{sunet},idNumber{idNumber}{}

std::string StudentID::getName(){
    return name;
}

std::string StudentID::getSunet(){
    return sunet;
}

int StudentID::getID(){
    return idNumber;
}

