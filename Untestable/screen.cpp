#include <iostream>
#include <windows.h>
#include <string>
#include "screen.h"
#include "player.h"

/********************************
    List of Colors for Screen
    Output
********************************/

    ///DBLUE,       ///Dark Blue        1
    ///GREEN,       ///Green            2
    ///GREY,        ///Grey             3
    ///DRED,        ///Dark Red         4
    ///DPURP,       ///Dark Purple      5
    ///BROWN,       ///Brown            6
    ///LGREY,       ///Light Grey       7
    ///DGREY,       ///Dark Grey        8
    ///BLUE,        ///Blue             9
    ///LIMEG,       ///Lime Green       10
    ///TEAL,        ///Teal             11
    ///RED,         ///Red              12
    ///PURPLE,      ///Purple           13
    ///YELLOW,      ///Yellow           14


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
    for (int i = 1; i<=100; i++)
    {
        std::cout << " \n";

    }
}

void printCharDialogue (std::string chara)
{
    col(3);
    std::cout << chara << ": ";
    col(7);
}

void printStats()
{
    col(2);
    std::cout << "Health: " << Hamlet.getHealth() << "/" << Hamlet.getMaxHealth() << "                       ";
    col(12);
    std::cout << "Damage: " << Hamlet.getDmg() << "                 ";
    col(10);
    std::cout << "Exp Level: " << Hamlet.getLevel() << std::endl;
    col(14);
    std::cout << "\nSuspicion: " << Hamlet.getSuspicion() << "%" << "                       ";
    col(11);
    std::cout << "Insanity: "  << Hamlet.getInsanity() << "%" << "                  ";
    col(14);
    std::cout << "Gold: " << Hamlet.getGold() << std::endl;
    col(7);
}
