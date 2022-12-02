#include <string>
#include <iostream>

#include "Panda.h"

using namespace std;


Panda::Panda(string name, string type) : Pet() {

    this->type = type;
    this->name = name;
    strength = 20;
    core = 55;
    luck = 25;

}

void Panda::addSpiritualEnergy(int energy) {
    spiritualEnergy += energy;
}

void Panda::setSpiritualEnergy(int energy) {
    spiritualEnergy = energy;
}

int Panda::getSpiritualEnergy() {
    return spiritualEnergy;
}

int Panda::getSpecialEnergy() {
    return getSpiritualEnergy();
}

void Panda::setSpecialEnergy(int energy) {
    setSpiritualEnergy(energy);
}

void Panda::addSpecialEnergy(int num) {
    addSpiritualEnergy(num);
}