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
int choice;         ///Your choice when prompted

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
            printCharDialogue("Horatio");
            std::cout << "Speak to me!!" << std::endl;
            printCharDialogue("You");
            std::cout << "Should I kill it?\n" << std::endl;

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
                    printCharDialogue("You");
                    std::cout << " Should I kill it?\n" << std::endl;

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
            std::cout << "You're obviously pissed.\n\n";

            printCharDialogue("Claudius");
            std::cout << "Why are you so sad Hamlet?\n" << std::endl;

            std::cout << "1: You would never understand how torn apart I am." << std::endl;
            std::cout << "2: Because my mother has no respect for her body." << std::endl;
            std::cout << "3: Because of this marriage, but I totally understand that this marriage is\n   diplomatically important." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    system("cls");
                    printStats();
                    std::cout << "\n";
                    printCharDialogue("Gertrude");
                    std::cout << "If you say so Hamlet. I hope for the best for you." << std::endl;

                    printCharDialogue("Claudius");
                    std::cout << "Well then, how about we celebrate? How does that sound." << std::endl;

                    printCharDialogue("Gertrude");
                    std::cout << "I think thats a great idea honey." << std::endl;
                    getch();

                    storyNum = 3;
                    goto endSwitch;

                case 2:

                    system("cls");
                    Hamlet.setInsanity(100);
                    printStats();

                    std::cout << "\n";
                    printCharDialogue("Gertrude");
                    std::cout << "How dare you say that Hamlet!." << std::endl;

                    printCharDialogue("Claudius");
                    std::cout << "No need to yell at him Gertrude. He is just angry at our marriage. \n" << std::endl;

                    std::cout << "After a long argument, King Claudius finds out about Gertrude's affair\n with the price of Bosnia." << std::endl;
                    std::cout << "\nHe immediately orders the execution of Gertrude." << std::endl;
                    getch();

                    goto endSwitch;

                case 3:

                    system("cls");
                    Hamlet.setSuspicion(15);
                    printStats();

                    std::cout << "\n";
                    printCharDialogue("Gertrude");
                    std::cout << "If you say so Hamlet. I hope for the best for you." << std::endl;

                    printCharDialogue("Claudius");
                    std::cout << "Well then, how about we celebrate? How does that sound." << std::endl;

                    printCharDialogue("Gertrude");
                    std::cout << "I think thats a great idea honey." << std::endl;
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

            std::cout << "\n";
            printCharDialogue("Gertrude");
            std::cout << "Why don't you stay with us in the castle?" << std::endl;
            std::cout << "          We could be a family and party together.\n" << std::endl;

            std::cout << "1. I shall in my best obey you." << std::endl;
            std::cout << "2. I refuse your request." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    system("cls");
                    printStats();

                    std::cout << "\n";
                    printCharDialogue("Gertrude");
                    std::cout << "Thank you Hamlet, I know you will get better." << std::endl;
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

                    std::cout << "\nYou go to the bar and spend all your money on drinks." << std::endl;
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

                case 3:

                    system("cls");
                    printStats();

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
            std::cout << "\n";

            printCharDialogue("Old Man");
            std::cout << "Seems like you are in trouble." << std::endl;
            printCharDialogue("Old Man");
            std::cout << "If you drink this magical liquid, you can forget about your past\nmistakes." << std::endl;

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

            std::cout << "\nHoratio, your old friend, enters the castle to your surprise." << std::endl;
            std::cout << "\n";

            printCharDialogue("Horatio");
            std::cout << "I am here for your father's funeral. I am terribly sorry." << std::endl;

            printCharDialogue("You");
            std::cout << "HA, you mean you're here for my mother's wedding?" << std::endl;

            printCharDialogue("Horatio");
            std::cout << "Oh....sucks" << std::endl;
            printCharDialogue("Horatio");
            std::cout << "But I came here because I saw you father's ghost, Hamlet!" << std::endl;

            printCharDialogue("You");
            std::cout << "What!!? I must meet him at once!!" << std::endl;
            getch();

            system("cls");
            printStats();

            col(8);
            std::cout << "\n              *** You and your crew meet to see the ghost ***\n" << std::endl;
            col(7);

            std::cout << "After a while of waiting, you spot a figure in the distance!!\n" << std::endl;

            printCharDialogue("You");
            std::cout << "I must meet him!!\n" << std::endl;

            std::cout << "You chase the shade all through the woods." << std::endl;
            std::cout << "There seems to be something lurking in the woods." << std::endl;
            std::cout << "Prepare for some action." << std::endl;
            getch();

            battleActI();

            system("cls");
            printStats();

            std::cout << "\nIt appears that the ghost has been unpossesed!" << std::endl;
            std::cout << "Its trying to tell you something...\n" << std::endl;
            getch();

            printCharDialogue("Ghost");
            std::cout << "AHH, avenge me my son, else I will burn in eternal flames!" << std::endl;

            printCharDialogue("You");
            std::cout << "But how, how will I avenge you." << std::endl;

            printCharDialogue("Ghost");
            std::cout << "By killing my brother, the one who killed me in my sleep!" << std::endl;

            std::cout << "\nThe king's ghost asks for you to take revenge.\n" << std::endl;

            std::cout << "1: OK" << std::endl;
            std::cout << "2: Most definitely" << std::endl;
            std::cout << "3: Sure thing" << std::endl;

            std::cin >> choice;

            storyNum = 7;

            goto endSwitch;

        case 7:
            begin7:

            system("cls");
            printStats();

            col(8);
            std::cout << "\n              ";
            std::cout << "*** You are currently playing as";
            col(3);
            std::cout << " Polonius";
            col(8);
            std::cout << " ***\n" << std::endl;
            col(7);

            std::cout << "Ophelia bursts into the your room saying that Hamlet has gone mad!!!" << std::endl;
            std::cout << "Apparently, he looked very pale and disordered when he entered Ophelia's room." << std::endl;
            std::cout << "What could this mean?" << std::endl;

            std::cout << "\n1. Oh No! It's all my fault for forcing you to ignore him! We must let the king know right away!" << std::endl;
            std::cout << "2. He was never meant for you. " << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    system("cls");
                    printStats();

                    std::cout << "\nYou make your way to the king's castle to tell him the news." << std::endl;
                    getch();

                    storyNum = 8;

                    goto endSwitch;

                case 2:

                    system("cls");
                    printStats();

                    std::cout << "\nYou sit back and smoke a cigar while listening to Ophelia yell at you." << std::endl;
                    std::cout << "She begins to get fed up and grabs a knife to attack you." << std::endl;
                    getch();

                    std::cout << "\nYou get stabbed by our own daughter and die in minutes from blood loss." << std::endl;
                    getch();

                    system("cls");
                    Hamlet.setInsanity(100);
                    printStats();

                    col(8);
                    std::cout << "\n              ";
                    std::cout << "*** You are currently playing as";
                    col(3);
                    std::cout << " Hamlet";
                    col(8);
                    std::cout << " ***\n" << std::endl;
                    col(7);

                    std::cout << "You find out Ophelia was locked up because of the killing and go into a deep \nstate of depression." << std::endl;
                    getch();

                    goto endSwitch;

                default:
                    goto begin7;
            }

        case 8:
            begin8:

            system("cls");
            printStats();

            std::cout << "\nYou tell the king whats \"really\" going on with Hamlet. You try to read the \nletter that Hamlet sent Ophelia but you ";
            std::cout << "forget how to read. What was that intro\nphrase again?\n" << std::endl;

            std::cout << "1. To the celestial, and my soul's idol, the most beautified Ophelia" << std::endl;
            std::cout << "2. To the heavenly, and my heart's idol, the most embellished Ophelia" << std::endl;
            std::cout << "3. To the divine, and my spirit's idol, the most enhanced Ophelia" << std::endl;
            std::cout << "4. To the transmundane, and my noumenon's idol, the most pulchritudinous Ophelia" << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setScore(Hamlet.getScore() + 1);

                    storyNum = 9;

                    break;
                case 2:

                    Hamlet.setScore(Hamlet.getScore() - 2);

                    storyNum = 9;

                    break;
                case 3:

                    Hamlet.setScore(Hamlet.getScore() - 2);

                    storyNum = 9;

                    break;
                case 4:

                    Hamlet.setScore(Hamlet.getScore() - 2);

                    storyNum = 9;

                    break;
                default:

                    goto begin8;

            }

            std::cout << "\nYou finish reading the letter.\n You ask to peronally speak with Prince Hamlet.\nThe king Approves." << std::endl;
            getch();

            system("cls");
            printStats();

            col(8);
            std::cout << "\n              ";
            std::cout << "*** You are currently playing as";
            col(3);
            std::cout << " Hamlet";
            col(8);
            std::cout << " ***\n" << std::endl;
            col(7);

            std::cout << "Polonius comes to talk to you. He has a few questions that you must answer." << std::endl;

            std::cout << "\nDo you know me my lord.\n" << std::endl;

            std::cout << "1. Not quite. Who are you?" << std::endl;
            std::cout << "2. Of course. You are a fishmonger aren't you?" << std::endl;
            std::cout << "3. You are Ophelia's dad right? It is a shame I know who you are." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setInsanity(Hamlet.getInsanity() + 25);
                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

                case 2:

                    Hamlet.setSuspicion(Hamlet.getSuspicion() + 15);
                    Hamlet.setScore(Hamlet.getScore() + 2);
                    break;

                case 3:

                    Hamlet.setSuspicion(Hamlet.getSuspicion() + 25);
                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

            }

            Hamlet.checkDeath();

            system("cls");
            printStats();

            std::cout << "\n" << std::endl;

            printCharDialogue("Polonius");
            std::cout << "I understand how you feel. I was once in the same position as you. Is there anyway for me to make";
            std::cout << "up my mistake?" << std::endl;

            std::cout << "\n1. Yes, just let me get back with Ophelia." << std::endl;
            std::cout << "2. Yes, give me a sharpened knife dipped in poison." << std::endl;
            std::cout << "3. What is the true meaning of love." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setInsanity(Hamlet.getInsanity() + 15);
                    Hamlet.setScore(Hamlet.getScore() + 2);
                    break;

                case 2:

                    Hamlet.setInsanity(Hamlet.getInsanity() + 35);
                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

                case 3:

                    Hamlet.setInsanity(Hamlet.getInsanity() + 20);
                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

            }

            Hamlet.checkDeath();

            system("cls");
            printStats();

            std::cout << "\n" << std::endl;

            printCharDialogue("Polonius");
            std::cout << "Why don't you go outside and get some fresh air, Hamlet? \nYou could use it.\n" << std::endl;

            std::cout << "1. Why should I, I am already drowning in sorrow." << std::endl;
            std::cout << "2. That's a wonderful idea Polonius, allow me to excuse myself to go on a nice\nstroll." << std::endl;
            std::cout << "3. How about instead I walk right into my grave." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setInsanity(Hamlet.getInsanity() + 30);
                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

                case 2:

                    Hamlet.setSuspicion(Hamlet.getSuspicion() + 30);
                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

                case 3:

                    Hamlet.setInsanity(Hamlet.getInsanity() + 15);
                    Hamlet.setScore(Hamlet.getScore() + 2);
                    break;
            }

            Hamlet.checkDeath();

            goto endSwitch;

        case 9:
            begin9:

            system("cls");
            printStats();

            std::cout << "\n" << std::endl;

            printCharDialogue("Polonius");
            std::cout << "Well then Hamlet, I hope you get better. See you." << std::endl;

            printCharDialogue("You");
            std::cout << "You old fool...\n" << std::endl;
            getch();

            std::cout << "Rosencrantz and Guildenstern appear. What could they be doing here?" << std::endl;
            getch();

            std::cout << "\n" << std::endl;

            printCharDialogue("You");
            std::cout << "Hello my friends. It is terrific to see you guys." << std::endl;\

            printCharDialogue("G & R");
            std::cout << "Hello to you to my lord. How is your stay in Denmark?" << std::endl;

            printCharDialogue("You");
            std::cout << "Fine, Fine, But why have you come to visit me." << std::endl;

            printCharDialogue("G & R");
            std::cout << "Well just to visit you. We care for you and hate to see you like this." << std::endl;

            std::cout << "\n1. Well OK, how about we catch up on things. It's been a while." << std::endl;
            std::cout << "2. Dude, cut the crap, I know that the king sent you two." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    storyNum = 11;

                    goto endSwitch;

                case 2:

                    storyNum = 10;

                    goto endSwitch;

                default:

                    goto begin9;
            }

        case 10:

            system("cls");
            printStats();

            std::cout << "\n" << std::endl;

            printCharDialogue("R & G");
            std::cout << "Yeah, they actaully did... I'm sorry my friend. " << std::endl;

            printCharDialogue("You");
            std::cout << "Its ok, you are welcome to stay here at Elisnore. Hey, the actors for \ntonights play have ";
            std::cout << "arrived. Let's go watch." << std::endl;

            storyNum = 12;
            getch();

            goto endSwitch;

        case 11:

            system("cls");
            printStats();

            std::cout << "\n" << std::endl;

            std::cout << "You tell all of your secrets. Rosencrantz and Guildenstern happened to be spys!\nThe king now ";
            std::cout << "knows your true plan.\nYou are immediatly exiled to Wittenburg." << std::endl;
            getch();

            storyNum = 5;

            goto endSwitch;

        case 12:

            system("cls");
            printStats();

            std::cout << "\nAfter separating with Rosencrantz and Guildenstern, you are left alone in the\ncastle.\n";
            std::cout << "The words, 'To be or not to be' falls our of your mouth." << std::endl;
            std::cout << "Huh? What does that mean?\n" << std::endl;

            std::cout << "1. Whether I take Claudius' life with my own hands or not?" << std::endl;
            std::cout << "2. Whether I should end my life or not?" << std::endl;
            std::cout << "3. Whether I should take part in the play or not?" << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;

                case 2:

                    Hamlet.setScore(Hamlet.getScore() + 2);
                    break;

                case 3:

                    Hamlet.setScore(Hamlet.getScore() - 4);
                    break;
            }

            system("cls");
            printStats();

            std::cout << "\nWhether 'tis nobler in the mind to suffer the slings and arrows";
            std::cout << "of outrageous\nfortune, or to take arms against a sea of troubles and, by";
            std::cout << "opposing, end them" << std::endl;
            std::cout << "\n1. Is it nobler to live miserably or to end one's sorrows with a single stroke?" << std::endl;
            std::cout << "2. Is it wiser to wait out for the fortune that awaits after the death of\nClaudius or kill him now and take the possible punishment?" << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setScore(Hamlet.getScore() + 2);
                    break;

                case 2:

                    Hamlet.setScore(Hamlet.getScore() - 2);
                    break;
            }

            system("cls");
            printStats();

            std::cout << "\nTo die: to sleep;" << std::endl;
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
            printStats();

            std::cout << "\nFor who would bear the whips and scorns of time," << std::endl;
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
            printStats();

            std::cout << "\nThus conscience does make cowards of us all;" << std::endl;
            std::cout << "And thus the native hue of resolution" << std::endl;
            std::cout << "Is sicklied o’er with the pale cast of thought," << std::endl;
            std::cout << "And enterprises of great pith and moment" << std::endl;
            std::cout << "With this regard their currents turn awry," << std::endl;
            std::cout << "And lose the name of action.–Soft you now!" << std::endl;
            std::cout << "The fair Ophelia! Nymph, in thy orisons" << std::endl;
            std::cout << "Be all my sins remember\'d." << std::endl;
            getch();

            storyNum = 13;

            goto endSwitch;

        case 13:

            system("cls");
            printStats();

            std::cout << "\nOphelia suddenly walks in and asks you for love again." << std::endl;

            std::cout << "\n1. Let's get back together." << std::endl;
            std::cout << "2. I never gave you thought." << std::endl;
            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    storyNum = 15;

                    goto endSwitch;
                case 2:

                    storyNum = 14;

                    goto endSwitch;
            }

        case 14:

            system("cls");
            printStats();

            std::cout << "\nOphelia runs off crying. You don't give a damn because you are the prince of Denmark." << std::endl;

            col(8);
            std::cout << "\n                               *** Sometime later ***\n" << std::endl;
            col(7);

            std::cout << "You decide that you will catch the conscience of the king with a play." << std::endl;
            std::cout << "What shall you name it?" << std::endl;

            std::cout << "1. Slings and Arrows" << std::endl;
            std::cout << "2. Vice of Kings" << std::endl;
            std::cout << "3. The Murder of Gonzago" << std::endl;
            std::cout << "4. The Slaying of Lucianus" << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setScore(Hamlet.getScore() - 2);

                case 2:

                    Hamlet.setScore(Hamlet.getScore() - 2);

                case 3:

                    Hamlet.setScore(Hamlet.getScore() + 2);

                case 4:

                    Hamlet.setScore(Hamlet.getScore() - 2);
            }

            system("cls");
            printStats();

            std::cout << "\nYou are ready with the play. However, the stupid actors forgot their parts." << std::endl;
            std::cout << "You have to remind them of their parts." << std::endl;

            std::cout << "\n1. The play's about a king killed by the queen. The queen then makes a \ndiplomatic marriage with the prince of Bosnia" << std::endl;
            std::cout << "2. The play's about a king killed by his brother. The queen then marries the\nbrother." << std::endl;
            std::cout << "3. The play's about a king that kills the queen because she couldn't give\nbirth to a male heir" << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    Hamlet.setInsanity(100);
                    system("cls");
                    printStats();

                    std::cout << "\nYou tell your instructions to the actors." << std::endl;
                    std::cout << "The King interprets the play as a warning from you." << std::endl;
                    std::cout << "He believes Gertrude knows who killed King Hamlet." << std::endl;
                    std::cout << "The King's face turns blue. He doesn't seem too well." << std::endl;
                    std::cout << "He stands in the middle of the play, and leaves the theatre." << std::endl;
                    std::cout << "He later orders the execution of Gertrude" << std::endl;
                    getch();

                    goto endSwitch;

                case 2:

                    system("cls");
                    printStats();

                    std::cout << "\nYou tell your instructions to the actors." << std::endl;
                    std::cout << "It was a complete success!!" << std::endl;
                    std::cout << "The King's face turns blue. He doesn't seem too well." << std::endl;
                    std::cout << "He stands in the middle of the play, and leaves the theatre." << std::endl;
                    getch();

                    storyNum = 16;

                    goto endSwitch;

                case 3:

                    system("cls");
                    printStats();

                    std::cout << "\nGertrude's face turns blue." << std::endl;
                    std::cout << "She has a feeling that Claudius will execute her if she doesn't give birth to a son." << std::endl;
                    std::cout << "Overwhelmed by fear, she murders Claudius by stabbing him on the spot." << std::endl;
                    std::cout << "She then kills herself by using the same knife." << std::endl;
                    std::cout << "Well I did not see this coming..." << std::endl;
                    std::cout << "Suddenly, you find out that it was all a dream." << std::endl;
                    std::cout << "I'm giving your ignorance a second chance. You will start from the beginning." << std::endl;
                    getch();

                    storyNum = 1;

                    Hamlet.setHealth(70);
                    Hamlet.setMaxHealth(70);
                    Hamlet.setDmg(6);
                    Hamlet.setSuspicion(0);
                    Hamlet.setInsanity(0);
                    Hamlet.setScore(0);
                    Hamlet.setExp(0);
                    Hamlet.setLevel(1);
                    Hamlet.setGold(0);
                    Hamlet.setIsDead(false);

                    goto endSwitch;
            }

        case 15:

            system("cls");
            printStats();

            std::cout << "\nGoodstuff, you're back with her." << std::endl;
            std::cout << "Even though you made the wrong choice, it will not affect the story at all." << std::endl;
            std::cout << "Can't punish someone for wanting love, right?" << std::endl;
            getch();

            Hamlet.setScore(Hamlet.getScore() - 4);

            storyNum = 14;

            goto endSwitch;

        case 16:

            system("cls");
            printStats();

            std::cout << "\nYou found out Claudius was guilty after all." << std::endl;
            std::cout << "You plan on killing him the NEXT time you see him." << std::endl;
            getch();

            system("cls");
            printStats();

            col(8);
            std::cout << "\n                               *** Sometime later ***" << std::endl;
            col(7);
            getch();

            std::cout << "\nYou find Claudius praying alone." << std::endl;
            std::cout << "He seems like he is deeply regretting his actions." << std::endl;
            std::cout << "His eyes are closed and he doesn't notice you approaching him." << std::endl;
            std::cout << "What will you do?" << std::endl;

            std::cout << "\n1. Kill him on the spot." << std::endl;
            std::cout << "2. Tie him down and torture him in front of Gertrude, who will also be tied to a chair." << std::endl;
            std::cout << "3. Let him be." << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    system("cls");
                    printStats();

                    std::cout << "\nYou make your way to assassinate Claudius." << std::endl;
                    getch();

                    Hamlet.setHealth(0);

                    system("cls");
                    printStats();

                    std::cout << "\nYou make your way to assassinate Claudius." << std::endl;
                    std::cout << "\nWhile you are walking to get in a better position, you fall and snap your neck." << std::endl;
                    getch();

                    goto endSwitch;

                case 2:

                    system("cls");
                    printStats();

                    std::cout << "\nYou make your way to a good position to kidnap him and tie him up." << std::endl;
                    getch();

                    Hamlet.setHealth(0);

                    system("cls");
                    printStats();

                    std::cout << "\nYou make your way to a good position to kidnap him and tie him up." << std::endl;
                    std::cout << "You ready your rope to tie him up." << std::endl;
                    std::cout << "You accidentally tie it around your neck and suffocate." << std::endl;
                    getch();

                    goto endSwitch;

                case 3:

                    system("cls");
                    printStats();

                    std::cout << "\nYou let Claudius live for now because he must go to hell, not heaven." << std::endl;
                    std::cout << "You must wait for another chance while he is sinning." << std::endl;
                    getch();

                    system("cls");
                    printStats();

                    col(8);
                    std::cout << "\n                          *** After you leave the room ***\n" << std::endl;
                    col(7);
                    getch();

                    printCharDialogue("Claudius");
                    std::cout << "My words fly up, my thoughts remain below." << std::endl;
                    getch();

                    storyNum = 17;

            }

        case 17:

            system("cls");
            printStats();

            std::cout << "\nYou storm into Gertrude\'s chamber demanding why she has sent for you.\n" << std::endl;

            printCharDialogue("Gertrude");
            std::cout << "I have requested you because I want you respect your step-father." << std::endl;

            printCharDialogue("You");
            std::cout << "Well you're not respecting your actual husband!" << std::endl;
            getch();

            system("cls");
            printStats();

            std::cout << "\nYou destroy Gertrude with words.\n" << std::endl;
            getch();

            printCharDialogue("Gertrude");
            std::cout << "HELP!!! SOMEONE HELP!!!" << std::endl;

            printCharDialogue("Voice");
            std::cout << "What!!! Help!!!" << std::endl;
            getch();

            std::cout << "\nThere appears to be an eavesdropper behind the curtain. " << std::endl;
            std::cout << "What would you like to do?" << std::endl;

            std::cout << "\n1. Kill first, ask questions later" << std::endl;
            std::cout << "2. Kill Gertrude" << std::endl;
            std::cout << "3. Demand a duel against the man behind the curtain. " << std::endl;

            std::cin >> choice;

            switch (choice)
            {
                case 1:

                    system("cls");
                    printStats();

                    std::cout << "\nYou stab the curtain..." << std::endl;
                    getch();

                    std::cout << "\nYou see Polonius\'s body fall to the ground.\n" << std::endl;

                    printCharDialogue("You");
                    std::cout << "Oh, woops. I thought that was the king. Serves that old man right though." << std::endl;

                    printCharDialogue("Gertrude");
                    std::cout << "Do you realize what you have just done Hamlet?!" << std::endl;

                    printCharDialogue("You");
                    std::cout << "No and I don\'t care. My father was superior to Claudius in every way." << std::endl;
                    std::cout << "What has driven you to marry such an idiot?\n" << std::endl;
                    getch();

                    std::cout << "You continue to attack her until..." << std::endl;
                    getch();

                    std::cout << "The Ghost appears in the room!" << std::endl;
                    getch();

                    system("cls");
                    printStats();

                    std::cout << "\n";

                    printCharDialogue("Ghost");
                    std::cout << "Hamlet... Remember your task. You must kill Claudius." << std::endl;

                    printCharDialogue("You");
                    std::cout<< "Yes, yes. Of course." << std::endl;
                    getch();

                    printCharDialogue("Gertrude");
                    std::cout << "Hamlet, who are you talking to." << std::endl;

                    printCharDialogue("You");
                    std::cout << "To my father, he\'s right there, ya see?" << std::endl;

                    printCharDialogue("You");
                    std::cout << "My entire insanity has just been an act. But whatever you do, don\'t tell\nClaudius." << std::endl;
                    getch();

                    printCharDialogue("Gertrude");
                    std::cout << "Uhhh, ok, yes. I\'m just still stunned by your words." << std::endl;

                    printCharDialogue("You");
                    std::cout << "Alright then. Goodnight mother." << std::endl;
                    getch();

                    std::cout << "\nYou exit the room." << std::endl;
                    getch();


                    storyNum = 18;

                    std::cout << "\n\n" << Hamlet.getScore();

                    getch();

                    goto endSwitch;

            }

        }
    endSwitch:
    system("cls");
    return storyNum;
}






