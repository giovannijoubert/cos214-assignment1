#ifndef SOLDIER_H
#define SOLDIER_H

#include <string>
#include "Zombie.h"

using namespace std;

  class Soldier {
		
	  public:
            Soldier();
            virtual ~Soldier();
            void attack(Zombie *);
            int getName();
            int getHP();
            int getDamage();
            string getPrimaryWeapon();
            string getSecondaryWeapon();
            void setHP(int);
		protected:
			      virtual bool hitZombie(Zombie *)=0;
            virtual void celebrate()=0;
            virtual bool getHit(Zombie *)=0;
            virtual void die()=0;
    private:
            string name;
            int hp;
            int damage;
            string primaryWeapon;
            string secondaryWeapon;

	};

#endif