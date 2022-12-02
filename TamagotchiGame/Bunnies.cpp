#include <string>
#include <iostream>

#include "Bunnies.h"

using namespace std;


Bunnies::Bunnies(string name, string type) : Pet() {

    this->type = type;
    this->name = name;
    strength = 20;
    core = 30;
    luck = 75;

}

void Bunnies::addLuckyEnergy(int energy) {
    luckyEnergy += energy;
}

void Bunnies::setLuckyEnergy(int energy) {
    luckyEnergy = energy;
}

int Bunnies::getLuckyEnergy() {
    return luckyEnergy;
}

int Bunnies::getSpecialEnergy() {
    return getLuckyEnergy();
}

void Bunnies::setSpecialEnergy(int energy) {
    setLuckyEnergy(energy);
}

void Bunnies::addSpecialEnergy(int num) {
    addLuckyEnergy(num);
}