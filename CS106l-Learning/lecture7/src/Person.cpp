#include <string>
#include <iostream>


#include "../include/Person.h"
Person::Person(const std::string& name): name(name){
    std::cout<< "Person constructor"<<std::endl;
}



