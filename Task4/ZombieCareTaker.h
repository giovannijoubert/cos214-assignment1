#ifndef ZOMBIECARETAKER_H
#define ZOMBIECARETAKER_H

#include "ZombieMemento.h"
#include <string>

using namespace std;

  class ZombieCareTaker {
		
	    public:
            void add(ZombieMemento *);
            ZombieMemento * get();
        
        private:
            ZombieMemento * zombieBackup;
	};

        
#endif