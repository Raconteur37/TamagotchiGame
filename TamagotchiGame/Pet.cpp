#include <string>
#include <iostream>

#include "Pet.h"

using namespace std;

Pet::Pet() {
    energy = 100;
}

Pet::~Pet() {
    delete this;
}

void Pet::setName(string name) {
    this->name = name;
}

void Pet::addStrength(double strength) {
    this->strength += strength;
}

void Pet::addCore(double core) {
    this->core += core;
}

void Pet::addLuck(double luck) {
    this->luck += luck;
}

void Pet::addEnergy(double energy) {
    this->energy = energy;
}

void Pet::setStrength(double strength) {
    this->strength = strength;
}

void Pet::setCore(double core) {
    this->core = core;
}

void Pet::setLuck(double luck) {
    this->luck = luck;
}

void Pet::setEnergy(double energy) {
    this->energy = energy;
}

string Pet::getName() {
    return name;
}

double Pet::getStrength() {
    return strength;
}

double Pet::getCore() {
    return core;
}

double Pet::getLuck() {
    return luck;
}

double Pet::getEnergy() {
    return energy;
}

string Pet::getType() {
    return type;
}

void Pet::addSpecialEnergy(int) {

}

void Pet::setSpecialEnergy(int) {

}

int Pet::getSpecialEnergy() {
   return 0;
}