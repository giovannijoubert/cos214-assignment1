#ifndef SOLDIERFACTORY_H
#define SOLDIERFACTORY_H

#include <string>

using namespace std;

  class SoldierFactory {
		
	    public:
            SoldierFactory();
            virtual ~SoldierFactory();
            virtual Soldier* createSoldier(string) = 0;
	};

#endif