#include "battle.h"
#include "player.h"
#include "screen.h"
#include <iostream>
#include "creatures.h"
#include <conio.h>
#include <windows.h>


void battleActI()
{
    system("cls");
    printStats(Hamlet.getHealth(), Hamlet.getMaxHealth(), Hamlet.getDmg(), Hamlet.getSuspicion(), Hamlet.getScore());
    std::cout << "\nAfter running after your father's ghost, you see him waiting in the woods." << std::endl;
    getch();
    std::cout << "There appears to be a flock of Evil Ghostlings!!!" << std::endl;
    std::cout << "One appears to be coming your way to attack you!!!\n" << std::endl;
    getch();
    Ghostling Ghostling1;
    while (Ghostling1.getIsDead() == false)
    {
        system("cls");
        printStats(Hamlet.getHealth(), Hamlet.getMaxHealth(), Hamlet.getDmg(), Hamlet.getSuspicion(), Hamlet.getScore());
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
                printStats(Hamlet.getHealth(), Hamlet.getMaxHealth(), Hamlet.getDmg(), Hamlet.getSuspicion(), Hamlet.getScore());
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
                printStats(Hamlet.getHealth(), Hamlet.getMaxHealth(), Hamlet.getDmg(), Hamlet.getSuspicion(), Hamlet.getScore());
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
        }
        system("cls");
        printStats(Hamlet.getHealth(), Hamlet.getMaxHealth(), Hamlet.getDmg(), Hamlet.getSuspicion(), Hamlet.getScore());
        std::cout << "The Ghostling moves into attack!" << std::endl;
        getch();
        ghostDmg = Ghostling1.Attack();
        Hamlet.setHealth(Hamlet.getHealth() - ghostDmg);
        printStats(Hamlet.getHealth(), Hamlet.getMaxHealth(), Hamlet.getDmg(), Hamlet.getSuspicion(), Hamlet.getScore());
        std::cout << "Your health is now at ";
        col(2);
        std::cout << Hamlet.getHealth() << "/" << Hamlet.getMaxHealth();
        getch();
        col(7);
        Ghostling1.setIsDead(Ghostling1.checkDeath());
     }
}
