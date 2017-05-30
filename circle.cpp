#include <iostream>
#include <math.h>
#include "shape.h"
#include "circle.h"

Circle::Circle(float rr)
{
    r=rr;
}

void Circle::loadData()
{
    std::cout << "Podaj dlugosc promien kola: ";
    std::cin >> r;
    while(std::cin.get() != '\n' || r <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie promien kola: ";
        std::cin >> r;
    }
}

float Circle::getArea()
{
    return M_PI * r * r;
}

Circle::~Circle()
{
    //------
}
