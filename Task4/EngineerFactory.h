#ifndef ENGINEERFACTORY_H
#define ENGINEERFACTORY_H

#include "Engineer.h"
#include "SoldierFactory.h"
#include <string>

using namespace std;

  class EngineerFactory : public SoldierFactory {
		
	    public:
            Soldier* createSoldier(string);
	};

#endif