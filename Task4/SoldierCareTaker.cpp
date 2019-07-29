#include "SoldierCareTaker.h"
#include <iostream>

void SoldierCareTaker::add(SoldierMemento* addThis){
    soldierBackup = addThis;
}
SoldierMemento * SoldierCareTaker::get(){
    return soldierBackup;
}