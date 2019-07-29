#include "Engineer.h"
#include <iostream>

Engineer::Engineer(string cName, int cHP, string cPrimaryWeapon, int cDamage) 
    : Soldier(cName, cHP, cPrimaryWeapon, cDamage){}

bool Engineer::hitZombie(Zombie * z){
    cout << "Engineer " << getName() << " bludgeons the zombie with a " << getPrimaryWeapon() << endl;
    if(z->takeDamage(getDamage()) <= 0)
        return true;
    else
        return false;
}

void Engineer::celebrate(){
    cout << getName() << " shakes his " << getPrimaryWeapon() << " t the zombie's remains" << endl;
}

bool Engineer::getHit(Zombie * z){
    int damageDone = z->getDamage();
    cout << getName() << " hides behind the nearest rock after taking " << damageDone << " damage." << endl;
    setHP(getHP()-damageDone);
    if(getHP() <= 0)
        return true;
    else 
        return false;
}

void Engineer::die(){
    cout << getName() << " was eaten by a zombie." << endl;
}



