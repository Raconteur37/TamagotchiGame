#ifndef TAMAGOTCHIGAME_PETMANAGER_H
#define TAMAGOTCHIGAME_PETMANAGER_H

#include "Pet.h"

using namespace std;

class PetManager {

public:
    PetManager();
    PetManager(Pet*);
    void setPet(Pet*);
    bool mainMenu();
    bool trainStrength();
    bool trainCore();
    void editValues(string,string,bool);

private:
    Pet* pet;

};




#endif TAMAGOTCHIGAME_PETMANAGER_H
