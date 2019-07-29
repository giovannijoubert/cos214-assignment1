#include "Soldier.h"
#include <iostream>

Soldier::Soldier(string cName, int cHP, string cPrimaryWeapon, int cDamage){
    name = cName;
    hp = cHP;
    primaryWeapon = cPrimaryWeapon;
    damage = cDamage;
}

Soldier::~Soldier(){}

void Soldier::attack(Zombie * z){
    while(getHP() > 0){
        if(hitZombie(z)){
            //zombie died
            celebrate();
            break;
        } else {
            if(getHit(z)){
                die();
                break;
            }
        }
    }
}

string Soldier::getName(){
    return name;
}

int Soldier::getHP(){
    return hp;
}

int Soldier::getDamage(){
    return damage;
}  

string Soldier::getPrimaryWeapon(){
    return primaryWeapon;
}

string Soldier::getSecondaryWeapon(){
    return secondaryWeapon;
}

void Soldier::setHP(int nHP){
    hp = nHP;
}

SoldierMemento * Soldier::createMemento(){
    SoldierMemento * m = new SoldierMemento(name, hp, damage, primaryWeapon, secondaryWeapon);
    return m;
}

void Soldier::restoreMemento(SoldierMemento * m){
	name = m->name;
    hp = m->hp;
    primaryWeapon = m->primaryWeapon;
    damage = m->damage;
}
