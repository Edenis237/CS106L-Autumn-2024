#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "Person.h"
#include <string>

#ifdef VIRTUAL_INHERITANCE
class Employee : virtual public Person {
#else
class Employee : public Person {
#endif
    protected:
        double salary;

    public:
        Employee(const std::string& name, double salary);
        virtual std::string getRole() const = 0;
        virtual double getSalary() const = 0;
        virtual void setSalary(double salary) = 0;
        virtual ~Employee() = default;
};

#endif // EMPLOYEE_H


// //关于 virtual 和纯虚函数 (=0) 的解释
// 1. virtual 关键字的作用
// 允许派生类重写：在基类中使用 virtual 关键字声明的成员函数，可以在派生类中被重写（override）。这意味着派生类可以提供自己的实现版本。
// 动态绑定：当通过基类指针或引用调用 virtual 函数时，实际调用的是对象所属的具体类的版本，而不是基类的版本。这种机制称为动态绑定或多态性。
// 2. 纯虚函数 (=0) 的作用
// 定义接口：带有 =0 的虚函数被称为纯虚函数。它表示该函数没有具体的实现，必须由派生类提供具体实现。
// 抽象类：包含纯虚函数的类是抽象类，不能实例化。只能作为基类被继承，派生类必须实现所有纯虚函数才能被实例化。