#include "SniperFactory.h"
#include <iostream>

Soldier* SniperFactory::createSoldier(string Name){
    return new Sniper(Name, 6, ".308 Rifle", 5);
}