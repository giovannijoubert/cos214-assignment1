#include "BerserkerFactory.h"
#include <iostream>

Soldier* BerserkerFactory::createSoldier(string Name){
    return new Berserker(Name, 10, "Big Chainsaw", 4);
}