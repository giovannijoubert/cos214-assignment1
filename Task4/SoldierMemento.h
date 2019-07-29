#ifndef SOLDIERMOMENTO_H
#define SOLDIERMOMENTO_H

#include <string>

using namespace std;

  class SoldierMemento {
		
	    public:
            SoldierMemento(string nName, int nHP, int nDamage, 
                    string nPrimaryWeapon, string nSecondaryWeapon);
            ~SoldierMemento();
            void restoreMemento(SoldierMemento *);
        
        private:
            string name;
            int hp;
            int damage;
            string primaryWeapon;
            string secondaryWeapon;
            friend class Soldier;
	};

        
#endif