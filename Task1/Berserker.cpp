#include "Berserker.h"
#include <iostream>

Berserker::Berserker(string cName, int cHP, string cPrimaryWeapon, int cDamage) 
    : Soldier(cName, cHP, cPrimaryWeapon, cDamage){}


bool Berserker::hitZombie(Zombie * z){
    cout << "Berserker " << getName() << " swings a " << getPrimaryWeapon() << " at the zombie's head." << endl;
    if(z->takeDamage(getDamage()) <= 0)
        return true;
    else
        return false;
}

void Berserker::celebrate(){
    cout << getName() << " slices the zombie in half!" << endl;
}

bool Berserker::getHit(Zombie * z){
    int damageDone = z->getDamage();
    cout << getName() << " pretends not to notice the " << damageDone << " damage he takes." << endl;
    setHP(getHP()-damageDone);
    if(getHP() <= 0)
        return true;
    else 
        return false;
}

void Berserker::die(){
    cout << "Nobody really liked " << getName() << "'s company, anyway." << endl;
}





