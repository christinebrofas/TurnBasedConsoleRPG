
#include "Battle.h"
#include "StoneGolem.h"
#include "VampireBat.h"
#include "Mage.h"
#include <iostream>
#include <string>

int main()
{
    Mage mage{ "Mage" };
    VampireBat VampireBat{ "VampireBat" ,100 ,40 };
    Battle     battle{ mage, VampireBat };
    battle.run();

    return 0;
}
