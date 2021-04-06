#include <iostream>

#include "myclass.h"

MyClass::MyClass() : id_(0), name_("")
{
    std::cout << "Default constructor runs" << std::endl;
}

MyClass::MyClass(int id, const std::string &name) :
    id_(id), name_(name)
{
    std::cout << "Special constructor runs" << std::endl;
}

MyClass::~MyClass()
{
    std::cout << "Destructor runs" << std::endl;
}
