#include "home.h"

Home::Home(int number, std::string city, int floor, int rent)
{
    this->number = number;
    this->city = city;
    this->floor = floor;
    this->rent = rent;
}

Home::Home(const Home &home)
{
    this->number = home.number;
    this->city = home.city;
    this->floor = home.floor;
    this->rent = home.rent;
}

Home::~Home()
{
    std::cout << "home deconstructor" << std::endl;
}

void Home::printScreen()
{
    std::cout << "number=" << number << std::endl
              << "city=" << city << std::endl
              << "floor=" << floor << std::endl
              << "rent=" << rent << std::endl;
}
