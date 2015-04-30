#include "battle.h"
#include "player.h"
#include "screen.h"
#include <iostream>
#include "creatures.h"
#include <conio.h>
#include <windows.h>

bool firstDefeated = false;

void battleActI()
{
    system("cls");
    printStats();
    std::cout << "\nAfter running after your father's ghost, you see him waiting in the woods." << std::endl;
    getch();
    std::cout << "There appears to be a flock of Evil Ghostlings!!!" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "\nOne appears to be coming your way to attack you!!!\n" << std::endl;
        getch();
        Ghostling Ghostling1;
        while (Ghostling1.getIsDead() == false)
        {
            system("cls");
            printStats();
            int dmgDealt;
            int ghostDmg;
            std::cout << "\nWhat would you like to do?\n" << std::endl;
            std::cout << "1. Standard Attack " << std::endl;
            std::cout << "2. Critical Attack " << std::endl;
            std::cout << "3. Do Nothing " << std::endl;
            int choice;
            std::cin >> choice;
            system("cls");
            switch (choice)
            {
                case 1:
                    printStats();
                    std::cout << "\n";
                    dmgDealt = Hamlet.Attack();
                    Ghostling1.setHealth(Ghostling1.getHealth() - dmgDealt);
                    std::cout << "\nThe Ghostling's health is now at ";
                    col(2);
                    std::cout << Ghostling1.getHealth() << "/" << Ghostling1.getMaxHealth() << std::endl;
                    col(7);
                    getch();
                    break;
                case 2:
                    printStats();
                    std::cout << "\n";
                    dmgDealt = Hamlet.criticalAttack();
                    Ghostling1.setHealth(Ghostling1.getHealth() - dmgDealt);
                    std::cout << "\nThe Ghostling's health is now at ";
                    col(2);
                    std::cout << Ghostling1.getHealth() << "/" << Ghostling1.getMaxHealth() << std::endl;
                    col(7);
                    getch();
                    break;
                case 3:
                    break;
                case 9:
                    printStats();
                    std::cout << "\n";
                    dmgDealt = Hamlet.cheatAttack();
                    Ghostling1.setHealth(Ghostling1.getHealth() - dmgDealt);
                    std::cout << " \nThe Ghostling's health is now at ";
                    col(2);
                    std::cout << Ghostling1.getHealth() << "/" << Ghostling1.getMaxHealth() << std::endl;
                    col(7);
                    getch();
                    break;
            }
            if (Ghostling1.getHealth() <= 0)
            {
                break;
            }
            system("cls");
            printStats();
            std::cout << "\nThe Ghostling moves into attack!\n" << std::endl;
            getch();
            ghostDmg = Ghostling1.Attack();
            Hamlet.setHealth(Hamlet.getHealth() - ghostDmg);
            std::cout << "\nYour health is now at ";
            col(2);
            std::cout << Hamlet.getHealth() << "/" << Hamlet.getMaxHealth();
            getch();
            col(7);
            Hamlet.checkDeath();
            if (Hamlet.getIsDead() == true)
            {
                exit(0);
            }
            Ghostling1.setIsDead(Ghostling1.checkDeath());
        }

        system("cls");
        printStats();
        std::cout << "\nThe Ghostling fades away...\n" << std::endl;
        std::cout << "Your rewards are: \n" << std::endl;
        getch();
        system("cls");
        Hamlet.setGold(Hamlet.getGold() + 3);
        Hamlet.setExp(Hamlet.getExp() + 2);
        printStats();
        std::cout << "\nThe Ghostling fades away...\n" << std::endl;
        std::cout << "Your rewards are: \n" << std::endl;
        col(14);
        std::cout << "3 Gold Coins" << std::endl;
        std::cout << "2 Experience Points" << std::endl;
        getch();
        system("cls");
        printStats();
        Hamlet.levelUp();
    }
    getch();
}

void oldManBattle()
{
    system("cls");
    OldMan oldMan1;
    while (oldMan1.getIsDead() == false)
    {
        system("cls");
        printStats();
        int dmgDealt;
        int oldDmg;
        std::cout << "\nWhat would you like to do?\n" << std::endl;
        std::cout << "1. Standard Attack " << std::endl;
        std::cout << "2. Critical Attack " << std::endl;
        std::cout << "3. Do Nothing " << std::endl;
        int choice;
        std::cin >> choice;
        system("cls");
        switch (choice)
        {
            case 1:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.Attack();
                oldMan1.setHealth(oldMan1.getHealth() - dmgDealt);
                std::cout << "\nThe Old Man's health is now at ";
                col(2);
                std::cout << oldMan1.getHealth() << "/" << oldMan1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 2:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.criticalAttack();
                oldMan1.setHealth(oldMan1.getHealth() - dmgDealt);
                std::cout << "\nThe Old Man's health is now at ";
                col(2);
                std::cout << oldMan1.getHealth() << "/" << oldMan1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 3:
                break;
            case 69:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.cheatAttack();
                oldMan1.setHealth(oldMan1.getHealth() - dmgDealt);
                std::cout << " \nThe Old Man's health is now at ";
                col(2);
                std::cout << oldMan1.getHealth() << "/" << oldMan1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
        }
        if (oldMan1.getHealth() <= 0)
        {
            break;
        }
        system("cls");
        printStats();
        std::cout << "\nThe Old Man moves into attack!\n" << std::endl;
        getch();
        oldDmg = oldMan1.Attack();
        Hamlet.setHealth(Hamlet.getHealth() - oldDmg);
        std::cout << "\nYour health is now at ";
        col(2);
        std::cout << Hamlet.getHealth() << "/" << Hamlet.getMaxHealth();
        getch();
        col(7);
        Hamlet.checkDeath();
        if (Hamlet.getIsDead() == true)
        {
            exit(0);
        }
        oldMan1.setIsDead(oldMan1.checkDeath());
    }
}
