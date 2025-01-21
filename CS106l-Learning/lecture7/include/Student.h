#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <cstdint> // 为了使用 uint16_t

#ifdef VIRTUAL_INHERITANCE
class Student : virtual public Person {
#else
class Student : public Person {
#endif
    protected:
        std::string idNumber;
        std::string major;
        std::string advisor;
        uint16_t year;

    public:
        Student(const std::string& name, const std::string& idNumber, const std::string& major, const std::string& advisor, uint16_t year);
        std::string getIdNumber() const;
        std::string getMajor() const;
        uint16_t getYear() const;
        void setYear(uint16_t year);
        void setMajor(const std::string& major);
        std::string getAdvisor() const;
        void setAdvisor(const std::string& advisor);
        virtual ~Student() = default;
};

#endif // STUDENT_H
