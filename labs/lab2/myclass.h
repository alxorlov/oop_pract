#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

class MyClass
{
public:
    MyClass();
    MyClass(int id, const std::string& name);
    ~MyClass();

    void setId(int id) { id_ = id; }
    int id() const { return id_; }
    void setName(const std::string& name) { name_ = name; }
    const std::string& name() const { return name_; }

private:
    int id_;
    std::string name_;
};

#endif // MYCLASS_H
