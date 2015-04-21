#include <iostream>
#include <windows.h>
#include "screen.h"

/********************************
    List of Colors for Screen
    Output
********************************/

    ///DBLUE,       ///Dark Blue
    ///GREEN,       ///Green
    ///GREY,        ///Grey
    ///DRED,        ///Dark Red
    ///DPURP,       ///Dark Purple
    ///BROWN,       ///Brown
    ///LGREY,       ///Light Grey
    ///DGREY,       ///Dark Green
    /// BLUE,       ///Blue
    ///LIMEG,       ///Lime Green
    ///TEAL,        ///Teal
    ///RED,         ///Red
    ///PURPLE,      ///Purple
    ///YELLOW,      ///Yellow


/********************************
    Assign the Screen to Print
    the selected color. From
    list above.
********************************/

void col(unsigned short int k)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,k);
}

/********************************
    Clear the screen the cool
    way. Adds 100 lines to the
    terminal.
********************************/

void clrScr()
{
    for (int i = 1; i=100; i++)
    {
        std::cout << " \n";
    }
}

void printStats(int health, int maxHealth, int dmg, int suspicion, int score)
{
    col(2);
    std::cout << "Health: " << health << "/" << maxHealth << "                       ";
    col(12);
    std::cout << "Damage: " << dmg << std::endl;
    col(14);
    std::cout << "\nSuspicion: " << suspicion << "%" << "                       ";
    col(7);
    std::cout << "Score: " << score << std::endl;
}
