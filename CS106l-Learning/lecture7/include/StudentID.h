#ifndef STUDENTID_H
#define STUDENTID_H

#include <string>
class StudentID {
private:
    std::string name;
    std::string sunet;
    int idNumber;
public:
    //构造函数
    StudentID(std::string name,std::string sunet,int idNumber);

    //获取信息的方法
    StudentID();
    std::string getName();
    std::string getSunet();
    int getID();
};
#endif