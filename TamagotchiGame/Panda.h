#ifndef TAMAGOTCHIGAME_PANDA_H
#define TAMAGOTCHIGAME_PANDA_H


#include <string>
#include "Pet.h"

using namespace std;

class Panda : public Pet {

private:
    int spiritualEnergy;

public:
    Panda(string,string);
    void addSpiritualEnergy(int);
    void setSpiritualEnergy(int);
    int getSpiritualEnergy();
    void addSpecialEnergy(int) override;
    void setSpecialEnergy(int) override;
    int getSpecialEnergy() override;

};



#endif //TAMAGOTCHIGAME_PANDA_H
