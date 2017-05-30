#include <iostream>
#include "shape.h"
#include "triangle.h"

Triangle::Triangle(float aa, float hh)
{
    a=aa;
    h=hh;
}

void Triangle::loadData()
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
    std::cout << "Podaj wyokosc: ";
    std::cin >> h;
    while(std::cin.get() != '\n' || h <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie wyokosc: ";
        std::cin >> h;
    }

}

float Triangle::getArea()
{
    return ((0.5) * a  * h);
}


Triangle::~Triangle()
{
    //------
}
