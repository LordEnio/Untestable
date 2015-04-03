#include <iostream>
#include <Windows.h>

int score;      ///What is your score and total knowledge of Hamlet?
int storyNum;   ///Where are you in the plot?
bool storyOn;   ///Is the game plot still moving forward?


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
    Assign the Screen to Printint storyDialogue
    the selected color. From
    list above.
********************************/

void col(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

/********************************
    Print the Screen onto
    the console. Game will take
    place there.
********************************/

///Will Be Edited as the game development progresses

void printScr()
{

}

/********************************
    Output the Dialogue for
    the plot of the story.
********************************/

int storyDialogue()
{
    while(storyOn)
    {
        switch()
    }
}

int main()
{

}
