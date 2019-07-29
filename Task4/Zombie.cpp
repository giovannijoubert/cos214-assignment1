#include "Zombie.h"
#include <iostream>

Zombie::Zombie(const char* att, int dam)
	: attackType(att), damage(dam)
{
  hp = 5;
}

Zombie::~Zombie()
{

}

int Zombie::takeDamage(int amount)
{
	cout << "Zombie took " << amount << " damage." << endl;
	hp -= amount;
	return hp;
}

int Zombie::getDamage()
{
	cout << "Zombie used " << attackType << "." << endl;
	return damage;
}

Zombie * Zombie::clone(){
	Zombie * out = new Zombie(attackType.c_str(),damage);
	return out;
}


ZombieMemento * Zombie::createMemento(){
    ZombieMemento * m = new ZombieMemento(attackType, hp, damage);
    return m;
}

void Zombie::restoreMemento(ZombieMemento * m){
	attackType = m->attackType;
	hp = m->hp;
	damage = m->damage;
}
