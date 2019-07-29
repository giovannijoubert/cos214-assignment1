#ifndef BERSERKERFACTORY_H
#define BERSERKERFACTORY_H

#include "Berserker.h"
#include "SoldierFactory.h"
#include <string>

using namespace std;

  class BerserkerFactory : public SoldierFactory {
		
	    public:
            Soldier* createSoldier(string);
	};

#endif