#include "SoldierMemento.h"
#include "SoldierCareTaker.h"
#include <iostream>

SoldierMemento::SoldierMemento(string nName, int nHP, int nDamage, 
                    string nPrimaryWeapon, string nSecondaryWeapon){
    name = nName;
    hp = nHP;
    damage = nDamage;
    primaryWeapon = nPrimaryWeapon;
    secondaryWeapon = nSecondaryWeapon;          
}
SoldierMemento::~SoldierMemento(){}
