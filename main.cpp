#include <iostream>
#include <Windows.h>
#include <string>
#include "Untestable/screen.h"
#include "Untestable/storyHamlet.h"
#include "Untestable/player.h"
#include "Untestable/global.h"

int storyNum = 23;

int main()
{
    printIntro();
    while (Hamlet.getIsDead() == false)
    {
        storyNum = storyDialogue(storyNum);
        Hamlet.checkDeath();
    }
}
