#include <iostream>
#include <Windows.h>
#include <string>
#include "..\#Untestable\Untestable\storyHamlet.h"

bool storyOn = true;       ///Is the game plot still moving forward?
int storyNum = 1;

/********************************
    List of Colors for Screen
    Output. Used in ScreenPrint
********************************/

enum Color
{
    DBLUE=1,    ///Dark Blue
    GREEN,      ///Green
    GREY,       ///Grey
    DRED,       ///Dark Red
    DPURP,      ///Dark Purple
    BROWN,      ///Brown
    LGREY,      ///Light Grey
    DGREY,      ///Dark Green
    BLUE,       ///Blue
    LIMEG,      ///Lime Green
    TEAL,       ///Teal
    RED,        ///Red
    PURPLE,     ///Purple
    YELLOW,     ///Yellow
};

/********************************
    Assign the Screen to Print
    the selected color. From
    list above.
********************************/

void col(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

int main()
{
    printIntro();
    while (storyOn)
    {
        storyNum = storyDialogue(storyNum);
    }
}
