#include "EngineerFactory.h"
#include <iostream>

Soldier* EngineerFactory::createSoldier(string Name){
    return new Engineer(Name, 7, "Wrench", 3);
}