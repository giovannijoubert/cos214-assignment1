#ifndef ENGINEER_H
#define ENGINEER_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Engineer : public Soldier {
		
	  public:
            Engineer(string, int, string, int);
            
		protected:
			 bool hitZombie(Zombie *);
             void celebrate();
             bool getHit(Zombie *);
             void die();
	};

#endif