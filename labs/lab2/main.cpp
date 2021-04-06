#include <iostream>
#include <vector>
#include <string>

#include "myclass.h"

int main()
{
    MyClass m1;
    MyClass m2{0, "Object1"};
    m2.setId(2);

    std::vector<MyClass> mvect{
        {3, "Object3"},
        {4, "Object4"},
    };

    std::cout << "m1: " << m1.id() << ", " << m1.name() << std::endl;
    std::cout << "m2: " << m2.id() << ", " << m2.name() << std::endl;

    for (const auto& m : mvect)
        std::cout << "mvect: " << m.id() << ", " << m.name() << std::endl;
}
