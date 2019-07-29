#ifndef SNIPER_H
#define SNIPER_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Sniper : public Soldier {
		
	    public:
            Sniper(string, int, string, int);
            
		protected:
			 bool hitZombie(Zombie *);
             void celebrate();
             bool getHit(Zombie *);
             void die();
    
	};

#endif