#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delim)
{
    std::vector<std::string> tokens;

    if (!str.empty())
    {
        size_t start = 0, end;
        do {
            tokens.push_back(str.substr(start, (end - start)));
            end = str.find(delim, start);
            start = end + 1;
        } while (end != std::string::npos);
    }

    return tokens;
}

int main()
{
    std::string mystr = "String delimited with spaces";

    std::cout << "[ ";
    for (const auto &s : split(mystr, ' '))
        std::cout << s << ", ";
    std::cout << " ]" << std::endl;

    return 0;
}
