#include "Sniper.h"
#include <iostream>

Sniper::Sniper(string cName, int cHP, string cPrimaryWeapon, string cDamage) 
    : Soldier(cName, cHP, cPrimaryWeapon, cDamage){}

bool Sniper::hitZombie(Zombie * z){
    cout << "Sniper " << getName() << " fires a " << getPrimaryWeapon() << " at the zombie." << endl;
    if(z->takeDamage(getDamage()) <= 0)
        return true;
    else
        return false;
}

void Sniper::celebrate(){
    cout << getName() << " exclaims \"Headshot!\"" << endl;
}

bool Sniper::getHit(Zombie * z){
    int damageDone = z->getDamage();
    cout << getName() << " swears in 13 different languages as he takes " << damageDone << " damage." << endl;
    setHP(getHP()-damageDone);
    if(getHP() <= 0)
        return true;
    else 
        return false;
}

void Sniper::die(){
    cout << getName() << " lead a good life. He will be missed." << endl;
}



