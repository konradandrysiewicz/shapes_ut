#include <iostream>
#include "shape.h"
#include "rectangle.h"

Rectangle::Rectangle(float aa, float bb)
{
    a=aa;
    b=bb;
}

void Rectangle::loadData()
{
    std::cout << "Podaj dlugosc boku a: ";
    std::cin >> a;
    while(std::cin.get() != '\n' || a <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku a: ";
        std::cin >> a;
    }
    std::cout << "Podaj dlugosc boku b: ";
    std::cin >> b;
    while(std::cin.get() != '\n' || b <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku b: ";
        std::cin >> b;
    }

}

float Rectangle::getArea()
{
    return a*b;
}

Rectangle::~Rectangle()
{
    //------
}
