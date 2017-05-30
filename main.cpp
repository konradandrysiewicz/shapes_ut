#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "shape.h"
#include "menu.h"


int main()
{
    for(;;)
    {
    showMenu();
    choiceMenu();
    std::cout << std::endl << "Press Enter..." << std::endl;
    getchar();
    system("cls");
    }
    return 0;
}
