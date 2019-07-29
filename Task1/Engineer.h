#ifndef ENGINEER_H
#define ENGINEER_H

#include <string>
#include "Soldier.h"

using namespace std;

  class Engineer : public Soldier {
		
	  public:
            Engineer();
            
		protected:
			virtual bool hitZombie(Zombie *)=0;
            virtual void celebrate()=0;
            virtual bool getHit(Zombie *)=0;
            virtual void die()=0;
	};

#endif