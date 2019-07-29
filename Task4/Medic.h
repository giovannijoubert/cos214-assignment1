#ifndef MEDIC_H
#define MEDIC_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Medic : public Soldier {
		
	  public:
            Medic(string, int, string, int);
            
		protected:
			bool hitZombie(Zombie *);
            void celebrate();
            bool getHit(Zombie *);
            void die();
	};

#endif