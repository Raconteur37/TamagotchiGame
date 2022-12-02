#include <string>
#include <iostream>

#include "Pet.h"

using namespace std;

Pet::Pet() {
    energy = 100;
    status = "idle";
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
    this->energy += energy;
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

void Pet::setOwner(string owner) {
    this->owner = owner;
}

void Pet::setType(string type) {
    this->type = type;
}

void Pet::setStatus(string status) {
    this->status = status;
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

string Pet::getOwner() {
    return owner;
}

string Pet::getStatus() {
    return status;
}

void Pet::addSpecialEnergy(int) {

}

void Pet::setSpecialEnergy(int) {

}

int Pet::getSpecialEnergy() {
   return 0;
}

void Pet::toString() {
    cout << "Pet owner: " << this->owner << endl;
    cout << "Name: " << this->name << endl;
    cout << "Type: " << this->type << endl;
}