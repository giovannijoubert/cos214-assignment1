#ifndef SNIPERFACTORY_H
#define SNIPERFACTORY_H

#include "SoldierFactory.h"
#include <string>

using namespace std;

  class SniperFactory : public SoldierFactory {
		
	    public:
            Soldier* createSoldier(string);
	};

#endif