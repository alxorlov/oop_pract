#include <iostream>

template<typename T>
T min(const T& a, const T&b)
{
    if (a < b)
        return a;
    else
        return b;
}

template<>
std::string min(const std::string& a, const std::string& b)
{
    if (a.size() < b.size())
        return a;
    else
        return b;
}

int main()
{
    std::cout << "Minimum of 1 and 5 is: " << min(1, 5) << std::endl;
    std::cout << "Minimum of 3.14 and 2.87 is: " << min(3.14, 2.87) << std::endl;
    std::cout << "Minimum os 'abcde' and 'xyz' is: " << min<std::string>("abcde", "xyz") << std::endl;

    return 0;
}
