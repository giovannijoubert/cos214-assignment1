#include "ZombieMemento.h"
#include "ZombieCareTaker.h"
#include <iostream>

ZombieMemento::ZombieMemento(string nAttackType, int nHP, int nDamage){
    attackType = nAttackType;
    hp = nHP;      
    damage = nDamage;
}
ZombieMemento::~ZombieMemento(){}
