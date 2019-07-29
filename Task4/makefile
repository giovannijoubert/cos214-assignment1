main: Sniper.o Berserker.o main.o Engineer.o Medic.o Zombie.o Soldier.o SoldierFactory.o MedicFactory.o SniperFactory.o EngineerFactory.o BerserkerFactory.o ZombieCareTaker.o ZombieMemento.o SoldierCareTaker.o SoldierMemento.o
	g++ -o main main.o Sniper.cpp Berserker.cpp Engineer.cpp Medic.cpp Zombie.cpp Soldier.cpp SoldierFactory.cpp MedicFactory.cpp SniperFactory.cpp EngineerFactory.cpp BerserkerFactory.cpp ZombieCareTaker.cpp ZombieMemento.cpp SoldierCareTaker.cpp SoldierMemento.cpp

main.o: main.cpp Berserker.h Sniper.h Medic.h Engineer.h Zombie.h Soldier.h ZombieMemento.h ZombieCareTaker.h SoldierCareTaker.h SoldierMemento.h
	g++ -c main.cpp

Soldier.o: Soldier.h Soldier.cpp
	g++ -c Soldier.cpp

SoldierCareTaker.o: SoldierCareTaker.h SoldierCareTaker.cpp
	g++ -c SoldierCareTaker.cpp
	
SoldierMemento.o: SoldierMemento.h SoldierMemento.cpp
	g++ -c SoldierMemento.cpp
	
ZombieMemento.o: ZombieMemento.h ZombieMemento.cpp
	g++ -c ZombieMemento.cpp
	
ZombieCareTaker.o: ZombieCareTaker.h ZombieCareTaker.cpp
	g++ -c ZombieCareTaker.cpp
	
SoldierFactory.o: SoldierFactory.h SoldierFactory.cpp
	g++ -c SoldierFactory.cpp

Engineer.o: Engineer.h Engineer.cpp
	g++ -c Engineer.cpp
	
EngineerFactory.o: EngineerFactory.h EngineerFactory.cpp
	g++ -c EngineerFactory.cpp
	
Zombie.o: Zombie.h Zombie.cpp
	g++ -c Zombie.cpp
	
Sniper.o: Sniper.h Sniper.cpp
	g++ -c Sniper.cpp
	
SniperFactory.o: SniperFactory.h SniperFactory.cpp
	g++ -c SniperFactory.cpp

Berserker.o: Berserker.h Berserker.cpp
	g++ -c Berserker.cpp
	
BerserkerFactory.o: BerserkerFactory.h BerserkerFactory.cpp
	g++ -c BerserkerFactory.cpp
	
Medic.o: Medic.h Medic.cpp
	g++ -c Medic.cpp
	
MedicFactory.o: MedicFactory.h MedicFactory.cpp
	g++ -c MedicFactory.cpp


run:
	./main

clean:
	rm *.o main