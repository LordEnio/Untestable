#include "storyHamlet.h"
#include "player.h"
#include "screen.h"
#include "global.h"
#include "battle.h"
#include "creatures.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

int score;          ///Score and total knowledge of Hamlet
int choice;

 /********************************
     Print the Intro/Tutorial
     of the game. Will not be
     changed.
 ********************************/

 void printIntro()
 {
     std::string intro;
     intro = "Welcome to Hamlet RPG. In this game, you will play mainly as Hamlet, but also\nas other characters. The actions "
             "of Hamlet will affect his well-being (status),\nwhile the actions of other playable characters will affect the story "
             "of the \ngame. The choices of Hamlet are up to you, but the only way to survive is to\nfollow the storyline. We HIGHLY "
             "recommend that you have knowledge of the story\nof Hamlet.";
     std::cout << "--------------------------------------------------------------------------------";
     std::cout << intro << std::endl;
     std::cout << "--------------------------------------------------------------------------------";
     getch();
     system("cls");
 }

 /********************************
     Output the Dialogue for
     the plot of the story.
 ********************************/

int storyDialogue(int storyNum)
{
    switch(storyNum)
    {
        case 1:
            printStats();
            col(8);
            std::cout << "\n              ";
            std::cout << "*** You are currently playing as";
            col(3);
            std::cout << " Marcellus";
            col(8);
            std::cout << " ***" << std::endl;
            col(7);
            std::cout << "\nHoratio is skeptical whether there is a ghost or not. You, Horatio, and Bernardo will keep watch.\n" << std::endl;
            std::cout << "** hour later **\n" << std::endl;
            getch();
            std::cout << "The Ghost appears!!\n" << std::endl;
            std::cout << "Horatio: Speak to me!!" << std::endl;
            std::cout << "You: Should I kill it?\n" << std::endl;
            std::cout << "1. Throw the spear" << std::endl;
            std::cout << "2. Don't throw spear" <<std::endl;
            std::cin >> choice;

            if ((choice != 1))
            {
                while ((choice != 1))
                {
                    system("cls");
                    printStats();
                    std::cout << "\nWrong choice!! In order to beat this game you would want to make the correct\ndecisions.\n" << std::endl;
                    std::cout << "Marcellus: Should I kill it?\n" << std::endl;
                    std::cout << "1.Throw the spear\n" << std::endl;
                    std::cout << "2.Don't throw the spear\n\n" << std::endl;
                    std::cin >> choice;
                }
                goto endfirstwhile;
            }

            else
            {
                endfirstwhile:
                system("cls");
                printStats();
                std::cout << "\nThe spear passes through, and the ghost quietly disappears..." << std::endl;
                getch();
                storyNum = 2;
                goto endSwitch;
            }



        case 2:
            begin2:
            system("cls");
            printStats();
            col(8);
            std::cout << "\n              ";
            std::cout << "*** You are currently playing as";
            col(3);
            std::cout << " Hamlet";
            col(8);
            std::cout << " ***" << std::endl;
            col(7);
            std::cout << "\nYou are the prince of Elsinore. You have discovered that your father has \nmysteriously died.";
            std::cout << " Your mother (Gertrude) then remarries to your uncle\n(Claudius) after only a month of your father's death." << std::endl;
            std::cout << "You're obviously pissed.\n\nClaudius: Why are you so sad Hamlet?\n" << std::endl;
            std::cout << "1: You would never understand how torn apart I am." << std::endl;
            std::cout << "2: Because my mother has no respect for her body." << std::endl;
            std::cout << "3: Because of this marriage, but I totally understand that this marriage is\n   diplomatically important." << std::endl;
            std::cin >> choice;

            switch (choice)
            {
                case 1:
                    system("cls");
                    printStats();
                    std::cout << "\nGertrude: If you say so Hamlet. I hope for the best for you." << std::endl;
                    std::cout << "Claudius: Well then, how about we celebrate? How does that sound." << std::endl;
                    std::cout << "Gertrude: I think thats a great idea honey." << std::endl;
                    getch();
                    storyNum = 3;
                    goto endSwitch;
                case 2:
                    system("cls");
                    Hamlet.setInsanity(100);
                    printStats();
                    std::cout << "\nGertrude: How dare you say that Hamlet!." << std::endl;
                    std::cout << "Claudius: No need to yell at him Gertrude. He is just angry at our marriage. \n" << std::endl;
                    std::cout << "After a long argument, King Claudius finds out about Gertrude's affair\n with the price of Bosnia." << std::endl;
                    std::cout << "\nHe immediately orders the execution of Gertrude." << std::endl;
                    getch();
                    goto endSwitch;
                case 3:
                    system("cls");
                    Hamlet.setSuspicion(15);
                    printStats();
                    std::cout << "\nGertrude is happy with your response, but Claudius is a little suspicious." << std::endl;
                    std::cout << "\nGertrude: If you say so Hamlet. I hope for the best for you." << std::endl;
                    std::cout << "Claudius: Well then, how about we celebrate? How does that sound." << std::endl;
                    std::cout << "Gertrude: I think thats a great idea honey." << std::endl;
                    getch();
                    storyNum = 3;
                    goto endSwitch;
                default:
                    goto begin2;
            }
        case 3:
            begin3:
            system("cls");
            printStats();
            std::cout << "\nGertrude: Why don't you stay with us in the castle?" << std::endl;
            std::cout << "    We could be a family and party together.\n" << std::endl;
            std::cout << "1. I shall in my best obey you." << std::endl;
            std::cout << "2. I refuse your request." << std::endl;
            std::cin >> choice;

            switch (choice)
            {
                case 1:
                    system("cls");
                    printStats();
                    std::cout << "\nGertrude: Thank you Hamlet, I know you will get better." << std::endl;
                    getch();
                    storyNum = 4;
                    goto endSwitch;
                case 2:
                    system("cls");
                    printStats();
                    std::cout << "\nYou leave the castle and head to Wittenburg." << std::endl;
                    getch();
                    storyNum = 5;
                    goto endSwitch;
                default:
                    goto begin3;
            }
        case 4:
            begin4:
            system("cls");
            printStats();
            std::cout << "\nYou are left alone in the castle after the King and Queen celebrate." << std::endl;
            std::cout << "\n1: Let's go to the bar and drink away my grief." << std::endl;
            std::cout << "2: I wish my flesh melts away." << std::endl;
            std::cout << "3: I'm going to go drop acid now, screw my life." << std::endl;
            std::cin >> choice;

            switch (choice)
            {
                case 1:
                    system("cls");
                    printStats();
                    std::cout << "You go to the bar and spend all your money on drinks." << std::endl;
                    std::cout << "It seems like Horatio was looking for you in the castle." << std::endl;
                    std::cout << "However, he eventually forgot why he was looking for you, gave up and went home." << std::endl;
                    getch();
                    storyNum = 7;
                    goto endSwitch;
                case 2:
                    system("cls");
                    printStats();
                    storyNum = 6;
                    goto endSwitch;
                default:
                    goto begin4;
            }

        case 5:
            begin5:
            system("cls");
            printStats();
            std::cout << "\nYou reach Wittenburg, but you greeted by German thugs." << std::endl;
            std::cout << "They jump you hoping to take your money." << std::endl;
            std::cout << "You are beaten up and hopeless, when suddenly, an old man appears in front\nof you." << std::endl;
            std::cout << "\nOld man: Seems like you are in trouble." << std::endl;
            std::cout << "Old man: If you drink this magical liquid, you can forget about your past\nmistakes." << std::endl;
            std::cout << "\n1: Take the liquid." << std::endl;
            std::cout << "2: Jump the old man and take his belongings." << std::endl;
            std::cin >> choice;

            switch (choice)
            {
                case 1:
                    system("cls");
                    Hamlet.setHealth(0);
                    printStats();
                    std::cout << "\nYou decide to take the liquid. It starts to burn your body, and you fall down\n dead." << std::endl;
                    std::cout << "The old man was the head thug, and he had tricked you into drinking poison." << std::endl;
                    getch();
                    goto endSwitch;
                case 2:
                    system("cls");
                    printStats();
                    std::cout << "\nYou engage on a hand to hand battle with the old man." << std::endl;
                    getch();
                    oldManBattle();
                    goto endSwitch;
                default:
                    goto begin5;
            }

        case 6:
            system("cls");
            printStats();
            std::cout << "Horatio comes into the castle to tell you that he saw the dead king's ghost!!" << std::endl;
            std::cout << "The next day you decide to keep watch of the ghost with Horatio." << std::endl;
            std::cout << "You finally see the ghost. You follow him into the woods." << std::endl;
            std::cout << "The king's ghost tells you that Claudius was the murderer!!!" << std::endl;
            std::cout << "The king's ghost asks for you to take revenge." << std::endl;
            std::cout << "1: OK" << std::endl;
            std::cout << "2: Most definitely" << std::endl;
            std::cout << "3: Sure thing" << std::endl;
            std::cin >> choice;

            if (choice == 1 || choice == 2 || choice == 3)
            {
            std::cout << "Horatio catches up. You force him to swear that he'll never reveal what happened." << std::endl;
            std::cout << "END OF ACT 1..." << std::endl;
            storyNum = 7;
            }

            else
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
                 std::cin >> choice;
                 if (choice == 1)
                 {
                   storyNum = 8;
                 }
                 else if (choice == 2)
                 {
                   storyNum = 9;
                 }
                 else
                 {
                   std::cout << "That isn't a choice..." << std::endl;
                 }
                 break;
                              case 8:
                 std::cout << "You tell the king whats \"really\" going on with Hamlet. You try to read the letter that Hamlet sent Ophelia but you "
                   "forget how to read. What was that intro phrase again?";
                 std::cout << "1. To the celestial, and my soul's idol, the most beautified Ophelia" << std::endl;
                 std::cout << "2. To the heavenly, and my heart's idol, the most embellished Ophelia" << std::endl;
                 std::cout << "3. To the divine, and my spirit's idol, the most enhanced Ophelia" << std::endl;
                 std::cout << "4. To the transmundane, and my noumenon's idol, the most pulchritudinous Ophelia" << std::endl;
                 std::cin >> choice;
                 if (choice == 1)
                 {
                   score += 10;
                 }
                 else
                 {
                   score += 3;
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
                 std::cin >> choice;
                 if (choice == 1)
                 {

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

                 }

                 std::cout << "I understand how you feel. I was once in the same position as you. Is there anyway for me to make"
                   " up my mistake?" << std::endl;
                 std::cout << "1. Yes, just let me get back with Ophelia." << std::endl;
                 std::cout << "2. Yes, give me a sharpened knife dipped in poison." << std::endl;
                 std::cout << "3. What is the true meaning of love.";
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

                 }
              case 9:
                std::cout << "Rosencrantz and Guildenstern appear." << std::endl;
                std::cout << "They say they are honored to see you. They ask you what you are doing in Denmark?" << std::endl;
                std::cout << "1. Welcome my friends! We have so much to catch up on!" << std::endl;
                std::cout << "2. Dude, I know that the king sent you two." << std::endl;
                std::cin >> choice;
                if (choice == 1)
                {
                  storyNum = 10;
                }
                else if (choice == 2)
                {
                  storyNum = 11;
                }
                else
                {

                }
              case 10:
                std::cout << "Yeah, they actaully did... I'm sorry my friend. " << std::endl;
                std::cout << "Its ok, you are welcome to stay here at Elisnore. Hey, the actors for tonights play have "
                  "arrived. Let's go watch." << std::endl;
                storyNum = 12;
                getch();
                break;
              case 11:
                std::cout << "You tell all of your secrets. Rosencrantz and Guildenstern happened to be spys! The king now "
                  "knows your true plan. You are immediatly exiled to Wittenburg." << std::endl;
                storyNum = 5;
                break;
              case 12:
               std::cout << "After separating with Rosencrantz and Guildenstern,\n you are left alone in the castle.\n";
               std::cout << "The words, 'To be or not to be' falls our of your mouth." << std::endl;
               std::cout << "Huh? What does that mean?:\n";
               std::cout << "1. Whether I take Claudius' life with my own hands or not?" << std::endl;
               std::cout << "2. Whether I should end my life or not?" << std::endl;
               std::cout << "3. Whether I should take part in the play or not?" << std::endl;

               std::cin >> choice;

               if (choice == 1)
               {
                score -= 2;
               }

               else if (choice == 2)
               {
                score += 3;
               }

               else if (choice == 3)
               {
                score -= 4;
               }
               
               system("cls");
               std::cout << "Whether 'tis nobler in the mind to \nsuffer the slings and arrows\n";
               std::cout << "of outrageous fortune, or to take\n arms against a sea of troubles and, by\n";
               std::cout << "opposing, end them:" << std::endl;
               std::cout << "1. Is it nobler to live miserably or to end \none's sorrows with a single stroke?" << std::endl;
               std::cout << "2. Is it wiser to wait out for the fortune that \nawaits after the death of Claudius or kill him now \nand take the possible punishment?" << std::endl;

               std::cin >> choice;

               if (choice == 1)
               {
                score += 1;
               }

               else if (choice == 2)
               {
                score -= 2;
               }
               getch ();
               system("cls");
               std::cout << " To die: to sleep;" << std::endl;
               std::cout << "No more; and by a sleep to say we end" << std::endl;
               std::cout << "The heart-ache and the thousand natural shocks" << std::endl;
               std::cout << "That flesh is heir to, ’tis a consummation" << std::endl;
               std::cout << "Devoutly to be wish’d. To die, to sleep;" << std::endl;
               std::cout << "To sleep: perchance to dream: ay, there’s the rub;" << std::endl;
               std::cout << "For in that sleep of death what dreams may come" << std::endl;
               std::cout << "When we have shuffled off this mortal coil," << std::endl;
               std::cout << "Must give us pause: there’s the respect" << std::endl;
               std::cout << "That makes calamity of so long life;" << std::endl;
               getch();
               system("cls");
               std::cout << "For who would bear the whips and scorns of time," << std::endl;
               std::cout << "The oppressor’s wrong, the proud man’s contumely," << std::endl;
               std::cout << "The pangs of despised love, the law’s delay," << std::endl;
               std::cout << "The insolence of office and the spurns" << std::endl;
               std::cout << "That patient merit of the unworthy takes," << std::endl;
               std::cout << "When he himself might his quietus make" << std::endl;
               std::cout << "With a bare bodkin? who would fardels bear," << std::endl;
               std::cout << "To grunt and sweat under a weary life," << std::endl;
               std::cout << "But that the dread of something after death," << std::endl;
               std::cout << "The undiscover’d country from whose bourn" << std::endl;
               std::cout << "No traveller returns, puzzles the will" << std::endl;
               std::cout << "And makes us rather bear those ills we have" << std::endl;
               std::cout << "Than fly to others that we know not of?" << std::endl;
               getch();
               system("cls");
               std::cout << "Thus conscience does make cowards of us all;" << std::endl;
               std::cout << "And thus the native hue of resolution" << std::endl;
               std::cout << "Is sicklied o’er with the pale cast of thought," << std::endl;
               std::cout << "And enterprises of great pith and moment" << std::endl;
               std::cout << "With this regard their currents turn awry," << std::endl;
               std::cout << "And lose the name of action.–Soft you now!" << std::endl;
               std::cout << "The fair Ophelia! Nymph, in thy orisons" << std::endl;
               std::cout << "Be all my sins remember’d." << std::endl;
               getch();
               system("cls");
               storyNum = 13;
               break;
              case 13:
               std::cout << "Ophelia suddenly walks in and asks you for love again." << std::endl;
               std::cout << "1.Let's get back together." << std::endl;
               std::cout << "2.I never gave you thought." << std::endl;
               std::cin >> choice;

               if (choice == 1)
               {
                storyNum = 14;
               }

               else if (choice == 2)
               {
                storyNum = 15;
               }
        }
    endSwitch:
    system("cls");
    return storyNum;
}






