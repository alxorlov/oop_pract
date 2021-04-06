// JSON library for modern C++
// https://github.com/nlohmann/json

#include <string>
#include <iostream>
#include <fstream>

#include "json.hpp"


class Car
{
public:
    int id;
    std::string model;
    int color;
    int year;
};

void from_json(const nlohmann::json& j, Car& c)
{
    j.at("id").get_to(c.id);
    j.at("model").get_to(c.model);
    j.at("color").get_to(c.color);
    j.at("year").get_to(c.year);
}

int main()
{
    std::ifstream f("cars.json");
    if (!f.is_open())
    {
        std::cout << "Can not open file" << std::endl;
        return -1;
    }

    nlohmann::json json;
    f >> json;

    std::vector<Car> cars;

    for (auto& e: json)
    {
        auto c = e.get<Car>();
        cars.push_back(std::move(c));
    }

    for (const auto& c: cars)
        std::cout << c.id << ": " << c.model << " " << c.color << " (" << c.year << ")" << std::endl;

    return 0;
}
