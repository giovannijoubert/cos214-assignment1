#include "Soldier.h"
#include "Zombie.h"
#include "SniperFactory.h"
#include "BerserkerFactory.h"
#include "MedicFactory.h"
#include "EngineerFactory.h"
#include "ZombieCareTaker.h"
#include "SoldierCareTaker.h"
#include <iostream>

using namespace std;

int main()
{
	string soldierTypes[4] = {"Sniper", "Berserker", "Medic", "Engineer"};
	string zombieTypes[4] = {"Biting", "Slashing", "Spitting", "Pouncing"};

	// initialize soldier factories (creators)
	const int numFactories = 4;
	SoldierFactory* factories[numFactories];
	factories[0] = new SniperFactory();
	factories[1] = new BerserkerFactory();
	factories[2] = new MedicFactory();
	factories[3] = new EngineerFactory();
	
	//create soldiers
	
	Soldier** soldiers = new Soldier*[4];
	short type;
	char name[30];
	SoldierCareTaker* sBackup = new SoldierCareTaker[4]; 

	for (short s = 0; s < 4; s++)
	{
		cout << "What is the name of the " << soldierTypes[s] << " soldier ? ";
		cin >> name;
		soldiers[s] = factories[s]->createSoldier(name);
		sBackup[s].add(soldiers[s]->createMemento());
	}
	
	// initialize zombie prototypes
	const short numZombieTypes = 3;
	Zombie** zombiePrototypes = new Zombie*[numZombieTypes];
	zombiePrototypes[0] = new Zombie("bite",2);
	zombiePrototypes[1] = new Zombie("slash",3);
	zombiePrototypes[2] = new Zombie("spit",4);
	zombiePrototypes[3] = new Zombie("pounce",5);
	
	Zombie** zombies = new Zombie*[4];
	ZombieCareTaker* zBackup = new ZombieCareTaker[4]; 
	
	for (short z = 0; z < 4; z++)
	{
		zombies[z] = zombiePrototypes[z]->clone();
		zBackup[z].add(zombies[z]->createMemento());
	}
	
	cout << "Let the apocalypse begin...." << endl << endl;

	
	for (int s = 0; s < 4; s++){ //soldier loop
		for(int z = 0; z < 4; z++){ //zombie loop
			cout << "==============>>> " << soldierTypes[s] << " soldier VS " << zombieTypes[z] << " zombie" << endl;

			soldiers[s]->restoreMemento(sBackup[s].get());
			zombies[z]->restoreMemento(zBackup[z].get());
			soldiers[s]->attack(zombies[z]);
		}
	}
	
	// cleanup
	for (int i = 0; i < 4; i++)
	{
		delete soldiers[i];
		delete zombies[i];
	}
	delete [] soldiers;
	delete [] zombies;
	
	for (int i = 0; i < numFactories; i++)
	{
		delete factories[i];
	}
	//delete [] factories;
	
	for (int i = 0; i < numZombieTypes; i++)
	{
		delete zombiePrototypes[i];
	}
	delete [] zombiePrototypes;
	
	return 0;
}
