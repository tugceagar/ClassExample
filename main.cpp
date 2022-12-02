#include<iostream>
#include "home.h"

int main ()
{

    Home home;
    home.printScreen();

    std::cout << home.getNumber() << std::endl
              << home.getCity() << std::endl
              << home.getFloor() << std::endl
              << home.getRent() << std::endl;
return 0;
}   