#ifndef BERSERKER_H
#define BERSERKER_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Berserker : public Soldier {
		
	  public:
            Berserker(string, int, string, int);
            
		protected:
			virtual bool hitZombie(Zombie *)=0;
            virtual void celebrate()=0;
            virtual bool getHit(Zombie *)=0;
            virtual void die()=0;
	};

#endif