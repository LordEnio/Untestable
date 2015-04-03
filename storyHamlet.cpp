#include "C:..\Untestable\storyHamlet.h"
#include <iostream>
#include <string>

int storyNum;   ///Where are you in the plot?
bool storyOn;   ///Is the game plot still moving forward?

/********************************
    Print the Intro/Tutorial
    of the game. Will not be
    changed.
********************************/

void printIntro()
{
    std::string intro;
    intro = "Welcome to Hamlet RPG. In this game, you will play mainly as Hamlet, but also as other characters. The actions "
            "of Hamlet will affect his well-being (status), while the actions of other playable characters will affect the story "
            "of the game. The choices of Hamlet are up to you, but the only way to survive is to follow the storyline. We HIGHLY "
            "recommend that you have knowledge of the story of Hamlet.";
    std::cout << intro;
}

/********************************
    Output the Dialogue for
    the plot of the story.
********************************/

int storyDialogue()
{
    while(storyOn)
    {
        switch(storyNum)
        {

        }
    }
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
