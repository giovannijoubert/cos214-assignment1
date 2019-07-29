#include "Medic.h"
#include <iostream>

Medic::Medic(string cName, int cHP, string cPrimaryWeapon, int cDamage) 
    : Soldier(cName, cHP, cPrimaryWeapon, cDamage){}

bool Medic::hitZombie(Zombie * z){
    cout << "Medic " << getName() << " frantically stabs at the zombie with a " << getPrimaryWeapon() << endl;
    if(z->takeDamage(getDamage()) <= 0)
        return true;
    else
        return false;
}

void Medic::celebrate(){
    cout << getName() << " sighs in relief." << endl;
}

bool Medic::getHit(Zombie * z){
    int damageDone = z->getDamage();
    cout << getName() << " gives himself painkillers to numb the " << damageDone << " damage suffered." << endl;
    setHP(getHP()-damageDone);
    if(getHP() <= 0)
        return true;
    else 
        return false;
}

void Medic::die(){
    cout << "After saving so many lives, " << getName() << " could not save himself." << endl;
}



