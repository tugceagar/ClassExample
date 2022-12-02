#ifndef HOME_H
#define HOME_H
#include <iostream>

class Home
{
public:
    Home(int number = 17, std::string city = "new york", int floor = 15, int rent = 2300);
    Home(const Home &);
    ~Home();
    void printScreen();
    int getNumber() const {return number;}
    void setNumber(int number){this->number = number;}
    std::string getCity() const {return city;}
    void setCity(const std::string &city){this->city = city; }
    int getFloor(){return floor;}
    void setFloor(int floor){this->floor = floor;}
    int getRent(){return rent;}
    void setRent(int rent){this->rent = rent;}

private:
    int number;
    std::string city;
    int floor;
    int rent;
};

#endif