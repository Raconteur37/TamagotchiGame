#ifndef TAMAGOTCHIGAME_PETMANAGER_H
#define TAMAGOTCHIGAME_PETMANAGER_H

#include "Pet.h"

using namespace std;

class PetManager {

public:
    PetManager(Pet*);
    bool mainMenu();
    bool changeName();
    bool train();

private:
    Pet* pet;

};




#endif TAMAGOTCHIGAME_PETMANAGER_H
