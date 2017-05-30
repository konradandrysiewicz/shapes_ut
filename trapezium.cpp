#include <iostream>
#include <math.h>
#include "shape.h"
#include "trapezium.h"

Trapezium::Trapezium(float aa, float bb, float hh)
{
    a=aa;
    b=bb;
    h=hh;
}

void Trapezium::loadData()
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

    std::cout << "Podaj dlugosc wysokosc: ";
    std::cin >> h;
    while(std::cin.get() != '\n' || h <= 0)
    {
        std::cout << "Nieprawidlowe dane!!" << std::endl;
        std::cin.clear();
        std::cin.sync();
        std::cout << "Podaj ponownie wysokosc: ";
        std::cin >> h;
    }
}

float Trapezium::getArea()
{
    return ((a+b)*0.5)*h;
}

Trapezium::~Trapezium()
{
    //------
}
