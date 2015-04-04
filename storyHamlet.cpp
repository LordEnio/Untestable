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
    intro = "Welcome to Hamlet RPG. In this game, you will play mainly as Hamlet, but also as other characters. The actions " << std::endl;
            "of Hamlet will affect his well-being (status), while the actions of other playable characters will affect the story " << std::endl;
            "of the game. The choices of Hamlet are up to you, but the only way to survive is to follow the storyline. We HIGHLY " << std::endl;
            "recommend that you have knowledge of the story of Hamlet." << std::endl;
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
                    sanity = 10;
                    check (suspicion, sanity);
                    
                }
                
                else if (choice == 3)
                {
                  std::cout << "Gertrude is happy with your response, but Claudius is a little suspicious.";
                  suspicion == 1;
                  storyNum = 3;
                }
                break;
              case 3:
                std::cout << "Gertrude pleads you to stay in Elsinore castle." << std::endl;
                std::cout << "1. I shall in my best obey you." << std::endl;
                std::cout << "2. I refuse your request." << std::endl;
                std::cin >> choice;
                
                if (choice == 1)
                {
                  std::cout << "Gertrude thanks you.";
                  storyNum = 4;
                }
                  
                 else if (choice == 2)
                {
                  std::cout << "You leave the castle and head to Wittenburg." << std::endl;
                  storyNum = 5;
                }
                break;
              case 4:
                std::cout << "You are left alone in the castle after the King and Queen celebrate." << std::endl;
                std::cout << "1. Let's go to the bar and drink away my grief." << std::endl;
                std::cout << "2. I wish my flesh melts away." << std::endl;
                std::cin >> choice;
                
                if (choice == 1)
                {
                  std::cout << "You go to the bar and spend all your money on drinks." << std::endl;
                  std::cout << "It seems like Horatio was looking for you in the castle." << std::endl;
                  std::cout << "However, he eventually forgot why he was looking for you, and gave up and went home." << std::endl;
                  storyNum == 7;
                }
                
                else if (choice == 2)
                {
                  storyNum = 6;
                }
                
                break;
              case 5:
                std::cout << "You reach Wittenburg, but you greeted by german thugs." << std::endl;
                std::cout << "They jump on you hoping to take your money." << std::endl;
                std::cout << "You are beaten up and hopeless, when suddenly, an old man appears in front of you." << std::endl;
                std::cout << "Old man: seems like you are in trouble." << std::endl;
                std::cout << "Old man: If you drink this magical liquid, you can forget about your past mistakes." << std::endl;
                std::cout << "1. Take the liquid." << std::endl;
                std::cout << "2. Jump the old man and take his belongings." << std::endl;
                std::cin >> choice;
                
                if (choice == 1)
                {
                  std::cout << "You decide to take the liquid. It starts to burn your body, and you fall down dead." << std::endl;
                  std::cout << "The old man was the head thug, and he had tricked you into drinking poison." << std::endl;
                  std::cout << "Game over....." << std::endl;
                }
                break;
              case 6:
                std::cout << "Horatio comes into the castle to tell you that he saw the dead king's ghost!!" << std::endl;
                std::cout << "The next day you decide to keep watch of the ghost with Horatio." << std::endl;
                std::cout << "You finally see the ghost. You follow him into the woods." << std::endl;
                std::cout << "The king's ghost tells you that Claudius was the murderer!!!" << std::endl;
                std::cout << "The king's ghost asks for you to take revenge." << std::endl;
                std::cout << "1. OK" << std::endl;
                std::cout << "2. Most definitely" << std::endl;
                std::cout << "3. Sure thing" << std::endl;
                std::cin >> choice;
                
                if (choice == 1,2,3)
                {
                  std::cout << "Horatio catches up. You force him to swear that he'll never reveal what happened." << std::endl;
                  std::cout << "END OF ACT 1..." << std::endl;
                  storyNum = 7;
                }
                
                else ()
                {
                  std::cout << "Wrong choice, try again." << std::endl;
                  storyNum = 6;
                }
              case 7:
                std::cout << "You are now playing as Polonious." << std::endl;
                std::cout << "Ophelia comes to ask you what is wrong with Hamlet. It seems that Hamlet has gone crazy!"
                  "What will you reply?" << std::endl;
                std::cout << "1. Oh No! It's all my fault for forcing you to ignore him! We must let the king know right away!" << std::endl;
                std::cout << "2. He was never meant for you. " << std::endl;
                std::cin >> choice
                if (choice == 1)
                {
                  storyNum = 8
                }
                else if (choice == 2)
                {
                  storyNum = 9
                }
                else
                {
                  std::cout << "That isn't a choice..." << std::endl;
                }
                break;
              case 8:
                std::cout << "You tell the king whats \"really\" going on with Hamlet. You try to read the letter that Hamlet sent Ophelia but you "
                  "forget how to read. What was that intro phrase again?"
                std::cout << "1. To the celestial, and my soul's idol, the most beautified Ophelia" << std::endl;
                std::cout << "2. To the heavenly, and my heart's idol, the most embellished Ophelia" << std::endl;
                std::cout << "3. To the divine, and my spirit's idol, the most enhanced Ophelia" << std::endl;
                std::cout << "4. To the transmundane, and my noumenon's idol, the most pulchritudinous Ophelia" << std::endl;
                std::cin >> choice;
                if (choice == 1)
                {
                  int score += 10;
                }
                else
                {
                  int score += 3;
                }
                storyNum = 9;
                std::cout << "You finish reading the letter.\n You ask to peronally speak with Prince Hamlet.\n The king Approves" << std::endl;
                std::cout << "You are now playing as Hamlet." << std::endl;
                std::cout << "Polonius comes to talk to you. He has a few questions that you must answer." << std::endl;
                std::cout << "Your answers will affect your insanity and/or suspision. Beware, as too much increase in "
                  "either will result in game over." << std::endl;
                std::cout << "Do you know me my lord" << std::endl;
                std::cout << "1. Of course. You are a fishmonger aren't you?" << std::endl;
                std::cout << "2. Not quite. Who are you?" << std::endl;
                std::cout << "3. You are Ophelia's dad right? It is a shame I know who you are." << std::endl;
                std::cin << choice;
                if (choice == 1)
                {
                  //increase whatever
                }
                else if (choice == 2)
                {
                  //increase whatever
                }
                else if (choice == 3)
                {
                  //increase whatever
                }
                else
                {
                  goto //line 211
                }
                
                std::cout << "I understand how you feel. I was once in the same position as you. Is there anyway for me to make"
                  " up my mistake?" << std::endl;
                std::cout << "1. Yes, just let me get back with Ophelia." std::endl;
                std::cout << "2. Yes, give me a sharpened knife dipped in poison." << std::endl;
                std::cout << "3. What is the true meaning of love."
                std::cin >> choice;
                if (choice == 1)
                {
                  //you know
                }
                else if (choice == 2)
                {
                  //
                }
                else if (choice == 3)
                {
                  //
                }
                else
                {
                  goto //line 238
                }
        }
    }
}
