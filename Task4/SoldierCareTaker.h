#ifndef SOLDIERCARETAKER_H
#define SOLDIERCARETAKER_H

#include "SoldierMemento.h"
#include <string>

using namespace std;

  class SoldierCareTaker {
		
	    public:
            void add(SoldierMemento *);
            SoldierMemento * get();
        
        private:
            SoldierMemento * soldierBackup;
	};

        
#endif