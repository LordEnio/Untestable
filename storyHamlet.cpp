#include "C:..\Untestable\storyHamlet.h"
#include <iostream>
#include <string>
#include <conio.h>

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
        int choice;
        switch(storyNum)
        {
            case 1:
                std::cout << "Horatio is skeptical whether there is a ghost or not. You, Horatio, and Bernardo will keep watch." << std::endl;
                std::cout << "** hour later **" << std::endl;
                getch();
                system ("cls");
                std::cout << "The Ghost appears!!" << std::endl;
                std::cout << "Horatio: Speak to me!!" << std::endl;
                std::cout << "Marcellus: Should I kill it?" << std::endl;
                std::cout << "1. Throw the spear" << std::endl;
                std::cout << "2. Don't throw spear" <<std::endl;
                std::cin >> choice;
                
                while (choice =! 1)
                {
                    std::cout << "Wrong choice!! In order to beat this game you would want to make the correct decisions" << std::endl;
                    std::cout << "based on the book. I'll give you a second chance!"
                    std::cout << "Marcellus: Should I kill it?"
                    std::cout << "1.Throw the spear" << std::endl;
                    std::cout << "2.Don't throw the spear" << std::endl;
                    std::cin >> choice;
                }
                
                if (choice == 1)
                {
                    std::cout << "The spear passes thorugh, and the ghost quietly disappears..." << std::endl;
                    storyNum == 2;
                }

                break;
            case 2:
                std::cout << "You are a prince in Elsinore. One day, your father -king hamlet- is mysteriously killed." << std::endl;
                std::cout << "Your mother (Gertrude) then remarries to your uncle (Claudius), after only a month of your father's death." << std::endl;
                std::cout << "You're obviously pissed. Claudius askes why you are sad:" << std::endl;
                std::cout << "1: You don't understand how torn apart I am" << std::endl;
                std::cout << "2: Mother you have no respect for your body." << std::endl;
                std::cout << "3: I totally understand why this marriage is diplomatically important." << std::endl;
                std::cin >> choice;
                
                if (choice == 1)
                {
                    storyNum == 3;
                }
                
                else if (choice == 2)
                {
                    std::cout << "You have accidentally discovered your mother's affair with the prince of Bosnia" << std::endl;
                    std::cout << "King Claudius finds out, and he orders Gertrude's execution." << std::endl;
                    
                }
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
