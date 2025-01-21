#include "../include/SectionLeader.h"
#include <iostream>
#include <algorithm>

#ifdef VIRTUAL_INHERITANCE
SectionLeader::SectionLeader(const std::string& name, const std::string& idNumber, const std::string& major, const std::string& advisor, uint16_t year, const std::string& section, const std::string& course, double salary) : Person(name), Student(name, idNumber, major, advisor, year), Employee(name, salary), section(section), course(course){
#else
SectionLeader::SectionLeader(const std::string& name, const std::string& idNumber, const std::string& major, const std::string& advisor, uint16_t year, const std::string& section, const std::string& course, double salary) : Student(name, idNumber, major, advisor, year), Employee(name, salary), section(section), course(course) {
#endif
    std::cout<<"SectionLeader constructor"<<std::endl;
}

std::string SectionLeader::getSection() const {
    return section;
}

std::string SectionLeader::getCourse() const {
    return course;
}

void SectionLeader::addStudent(const std::string& student){
    students.push_back(student);//push_back()方法是将值添加到容器尾部
}

/**
 * 从分队长的学生列表中移除指定的学生
 * 
 * @param student 要移除的学生的姓名
 */
void SectionLeader::removeStudent(const std::string& student){
    // 使用标准库的find函数在学生列表中查找指定的学生
    auto it=std::find(students.begin(),students.end(),student);
    
    // 如果找到了该学生（迭代器不指向容器的末尾）
    if(it != students.end()){
        // 从列表中擦除该学生
        students.erase(it);
    }
}

std::vector<std::string> SectionLeader::getStudents() const{
    return students;
}

std::string SectionLeader::getRole() const{
    return "Section Leader";
}

double SectionLeader::getSalary() const{
    return salary;
}

void SectionLeader::setSalary(double salary){
    this->salary=salary;
}

SectionLeader::~SectionLeader()=default;