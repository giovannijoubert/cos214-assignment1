#ifndef MEDICFACTORY_H
#define MEDICFACTORY_H

#include "SoldierFactory.h"
#include <string>

using namespace std;

  class MedicFactory : public SoldierFactory {
		
	    public:
            Soldier* createSoldier(string);
	};

#endif