#include "Soldier.h"
#include "Zombie.h"
#include "SniperFactory.h"
#include "BerserkerFactory.h"
#include "MedicFactory.h"
#include "EngineerFactory.h"
#include <iostream>

using namespace std;

int main()
{
	// This main provides a nice interface for testing your completed code.

	// initialize soldier factories (creators)
	const int numFactories = 4;
	SoldierFactory* factories[numFactories];
	factories[0] = new SniperFactory();
	factories[1] = new BerserkerFactory();
	factories[2] = new MedicFactory();
	factories[3] = new EngineerFactory();
	
	short numSoldiers;
	cout << "How may soldiers in your squad? ";
	cin >> numSoldiers;
	
	Soldier** soldiers = new Soldier*[numSoldiers];
	short type;
	char name[30];
	
	for (short i = 0; i < numSoldiers; i++)
	{
		cout << "What is the name of soldier " << i+1 << "? ";
		cin >> name;
		cout << endl;
		cout << "0 - Sniper" << endl;
		cout << "1 - Berserker" << endl;
		cout << "2 - Medic" << endl;
		cout << "3 - Engineer" << endl;
		cout << "What class is soldier " << i+1 << "? ";
		cin >> type;
		
		// The following line of code is a good example of the usefulness of the Factory Method.
		// Here, we are constructing an instance of a different class depending on use input.
		soldiers[i] = factories[type]->createSoldier(name);
	}
	
	// initialize zombie prototypes
	const short numZombieTypes = 3;
	Zombie** zombiePrototypes = new Zombie*[numZombieTypes];
	zombiePrototypes[0] = new Zombie("bite",2);
	zombiePrototypes[1] = new Zombie("slash",3);
	zombiePrototypes[2] = new Zombie("spit",4);
	zombiePrototypes[3] = new Zombie("pounce",5);
	
	Zombie** zombies = new Zombie*[numSoldiers];
	
	for (short i = 0; i < numSoldiers; i++)
	{
		cout << "0 - Biting zombie" << endl;
		cout << "1 - Slashing zombie" << endl;
		cout << "2 - Spitting zombie" << endl;
		cout << "3 - Pouncing zombie" << endl;
		cout << "What type is zombie #" << i+1 << "? ";
		cin >> type;
		
		// The following line of code is a good example of the usefulness of the Prototype design.
		// Since there can be a lot of the same kind of zombie (as is zombie nature), it is natural
		// to be able to duplicate them at will!
		zombies[i] = zombiePrototypes[type]->clone();
	}
	
	cout << "The long and bloody battle commences!" << endl;
	
	for (int i = 0; i < numSoldiers; i++)
	{
		soldiers[i]->attack(zombies[i]);
	}
	
	
	// cleanup
	for (int i = 0; i < numSoldiers; i++)
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
