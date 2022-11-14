#include <string>
#include <iostream>

#include "Phoenix.h"

using namespace std;


Phoenix::Phoenix(string name, string type) : Pet() {

    this->type = type;
    this->name = name;
    strength = 45;
    core = 20;
    luck = 15;

}

void Phoenix::addFireEnergy(int energy) {
    fireEnergy += energy;
}

void Phoenix::setFireEnergy(int energy) {
    fireEnergy = energy;
}

int Phoenix::getFireEnergy() {
    return fireEnergy;
}