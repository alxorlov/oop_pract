#include <iostream>
#include <vector>

std::vector<std::string> split(const std::string& str, char delim)
{
    std::vector<std::string> tokens;

    size_t start = 0, end = str.find(delim, start);
    while (end != std::string::npos)
    {
        tokens.push_back(str.substr(start, (end - start)));
        start = end + 1;
        end = str.find(delim, start);
    }

    return tokens;
}

int main()
{
    std::string mystr = "String delimited with spaces";

    std::cout << "[ ";
    for (auto s : split(mystr, ' '))
        std::cout << s << ", ";
    std::cout << " ]" << std::endl;

    return 0;
}
