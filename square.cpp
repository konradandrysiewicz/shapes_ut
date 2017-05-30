#include <iostream>
#include "shape.h"
#include "square.h"

Square::Square(float aa)
{
    a=aa;
}

void Square::loadData()
{
    std::cout << "Podaj dlugosc boku: ";
    std::cin >> a;
    while(std::cin.get() != '\n' || a <= 0)
    {
        std::cout << "Nieprawidlowe dane !!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie dlugosc boku: ";
        std::cin >> a;
    }
}

float Square::getArea()
{
    return a*a;
}


Square::~Square()
{
    //------
}
