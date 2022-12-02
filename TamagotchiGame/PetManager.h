#ifndef TAMAGOTCHIGAME_PETMANAGER_H
#define TAMAGOTCHIGAME_PETMANAGER_H

#include "Pet.h"

using namespace std;

class PetManager {

public:
    PetManager();
    PetManager(Pet*);
    void setPet(Pet*);
    //void setSaveManager(SaveManager*);
    bool mainMenu();
    bool trainStrength();
    bool trainCore();
    bool trainLuck();
    void editValues(string,string,bool);

private:
    Pet* pet;
    //SaveManager* saveManager;
};




#endif TAMAGOTCHIGAME_PETMANAGER_H
