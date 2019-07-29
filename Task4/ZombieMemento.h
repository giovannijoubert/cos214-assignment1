#ifndef ZOMBIEMEMENTO_H
#define ZOMBIEMEMENTO_H

#include <string>

using namespace std;

  class ZombieMemento {
		
	    public:
            ZombieMemento(string nAttackType, int nHP, int nDamage);
            ~ZombieMemento();
        
        private:
	        string attackType;
	        int hp;
          int damage;

            friend class Zombie;
	};

        
#endif