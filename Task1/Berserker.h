#ifndef BERSERKER_H
#define BERSERKER_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Berserker : public Soldier {
		
	  public:
            Berserker(string, int, string, int);
            
		protected:
			 bool hitZombie(Zombie *);
             void celebrate();
             bool getHit(Zombie *);
             void die();
	};

#endif