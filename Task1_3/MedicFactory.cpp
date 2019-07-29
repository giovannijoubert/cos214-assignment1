#include "MedicFactory.h"
#include <iostream>

Soldier* MedicFactory::createSoldier(string Name){
    return new Medic(Name, 8, "Syringe", 2);
}