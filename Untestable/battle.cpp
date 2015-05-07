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
    std::cout << "\nThere appears to be a flock of Evil Ghostlings!!!" << std::endl;
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
                case 69:
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
        getch();
        system("cls");
        printStats();

    }
    getch();
    std::cout << "\nYour battle isn't over yet, however." << std::endl;
    std::cout << "The ghost of the king seems possesed!" << std::endl;
    std::cout << "You must face him in order to free him!!" << std::endl;
    std::cout << "\nThe Ghost moves in to attack you!!!" << std::endl;
    getch();
    KingHamlet KingHamlet1;
    while (KingHamlet1.getIsDead() == false)
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
                KingHamlet1.setHealth(KingHamlet1.getHealth() - dmgDealt);
                std::cout << "\nThe Ghosts health is now at ";
                col(2);
                std::cout << KingHamlet1.getHealth() << "/" << KingHamlet1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 2:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.criticalAttack();
                KingHamlet1.setHealth(KingHamlet1.getHealth() - dmgDealt);
                std::cout << "\nThe Ghost's health is now at ";
                col(2);
                std::cout << KingHamlet1.getHealth() << "/" << KingHamlet1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 3:
                break;
            case 69:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.cheatAttack();
                KingHamlet1.setHealth(KingHamlet1.getHealth() - dmgDealt);
                std::cout << " \nThe Ghost's health is now at ";
                col(2);
                std::cout << KingHamlet1.getHealth() << "/" << KingHamlet1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
        }
        if (KingHamlet1.getHealth() <= 0)
        {
            break;
        }
        system("cls");
        printStats();
        std::cout << "\nThe Ghost moves into attack!\n" << std::endl;
        getch();
        ghostDmg = KingHamlet1.Attack();
        Hamlet.setHealth(Hamlet.getHealth() - ghostDmg);
        ghostDmg = KingHamlet1.Curse();
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
        KingHamlet1.setIsDead(KingHamlet1.checkDeath());
    }

    system("cls");
    printStats();
    std::cout << "\nThe Ghost screams in anger, then quiets down...\n" << std::endl;
    std::cout << "Your rewards are: \n" << std::endl;
    getch();
    system("cls");
    Hamlet.setGold(Hamlet.getGold() + 10);
    Hamlet.setExp(Hamlet.getExp() + 7);
    printStats();
    std::cout << "\nThe Ghost screams in anger, then quiets down...\n" << std::endl;
    std::cout << "Your rewards are: \n" << std::endl;
    col(14);
    std::cout << "10 Gold Coins" << std::endl;
    std::cout << "7 Experience Points" << std::endl;
    getch();
    system("cls");
    printStats();
    Hamlet.levelUp();
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

void PoloniusBattle()
{
    system("cls");
    Polonius Polonius1;


    while (Polonius1.getIsDead() == false)
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
                Polonius1.setHealth(Polonius1.getHealth() - dmgDealt);
                std::cout << "\nPolonius\'s health is now at ";
                col(2);
                std::cout << Polonius1.getHealth() << "/" << Polonius1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 2:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.criticalAttack();
                Polonius1.setHealth(Polonius1.getHealth() - dmgDealt);
                std::cout << "\nPolonius\'s health is now at ";
                col(2);
                std::cout << Polonius1.getHealth() << "/" << Polonius1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 3:
                break;
            case 69:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.cheatAttack();
                Polonius1.setHealth(Polonius1.getHealth() - dmgDealt);
                std::cout << " \nPolonius\'s health is now at ";
                col(2);
                std::cout << Polonius1.getHealth() << "/" << Polonius1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
        }
        if (Polonius1.getHealth() <= 0)
        {
            break;
        }
        system("cls");
        printStats();
        std::cout << "\nPolonius moves into attack!\n" << std::endl;
        getch();
        oldDmg = Polonius1.Attack();
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
        Polonius1.setIsDead(Polonius1.checkDeath());
    }
}

void LaertesBattle()
{
    system("cls");
    Laertes Laertes1;


    while (Laertes1.getIsDead() == false)
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
                Laertes1.setHealth(Laertes1.getHealth() - dmgDealt);
                std::cout << "\nLaertes\'s health is now at ";
                col(2);
                std::cout << Laertes1.getHealth() << "/" << Laertes1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 2:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.criticalAttack();
                Laertes1.setHealth(Laertes1.getHealth() - dmgDealt);
                std::cout << "\nPolonius\'s health is now at ";
                col(2);
                std::cout << Laertes1.getHealth() << "/" << Laertes1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
            case 3:
                break;
            case 69:
                printStats();
                std::cout << "\n";
                dmgDealt = Hamlet.cheatAttack();
                Laertes1.setHealth(Laertes1.getHealth() - dmgDealt);
                std::cout << " \nPolonius\'s health is now at ";
                col(2);
                std::cout << Laertes1.getHealth() << "/" << Laertes1.getMaxHealth() << std::endl;
                col(7);
                getch();
                break;
        }
        if (Laertes1.getHealth() <= 0)
        {
            break;
        }
        system("cls");
        printStats();
        std::cout << "\nLaertes moves into attack!\n" << std::endl;
        getch();
        oldDmg = Laertes1.Attack();
        Hamlet.setHealth(Hamlet.getHealth() - oldDmg);
        oldDmg = Laertes1.poisonAttack();
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
        Laertes1.setIsDead(Laertes1.checkDeath());
    }
}
