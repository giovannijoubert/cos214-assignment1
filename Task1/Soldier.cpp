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
}

int Soldier::getName(){
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