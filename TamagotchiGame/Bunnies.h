#ifndef TAMAGOTCHIGAME_BUNNIES_H
#define TAMAGOTCHIGAME_BUNNIES_H


#include <string>
#include "Pet.h"

using namespace std;

class Bunnies : public Pet {

private:
    int luckyEnergy;

public:
    Bunnies(string,string);
    void addLuckyEnergy(int);
    void setLuckyEnergy(int);
    int getLuckyEnergy();
    void addSpecialEnergy(int) override;
    void setSpecialEnergy(int) override;
    int getSpecialEnergy() override;

};


#endif //TAMAGOTCHIGAME_BUNNIES_H
