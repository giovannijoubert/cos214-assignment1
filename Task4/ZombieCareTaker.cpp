#include "ZombieCareTaker.h"
#include <iostream>

void ZombieCareTaker::add(ZombieMemento * addThis){
    zombieBackup = addThis;
}
ZombieMemento * ZombieCareTaker::get(){
    return zombieBackup;
}