#ifndef SNIPER_H
#define SNIPER_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Sniper : public Soldier {
		
	    public:
            Sniper(string, int, string, int);
            
		protected:
			virtual bool hitZombie(Zombie *)=0;
            virtual void celebrate()=0;
            virtual bool getHit(Zombie *)=0;
            virtual void die()=0;
    
	};

#endif