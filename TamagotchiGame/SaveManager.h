#ifndef TAMAGOTCHIGAME_SAVEMANAGER_H
#define TAMAGOTCHIGAME_SAVEMANAGER_H

#include <string>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include "Pet.h"

using namespace std;

class SaveManager {

public:
	SaveManager(string*);
    string* getUsername();
	bool userExists();
	void addUser();
    void addPet(Pet*);
    bool petExists(Pet*);
    void savePet(Pet*);
    void deletePet();
    Pet* displayPets();


private:
	string filename;
	ifstream infile;
    ifstream petsInfile;
	ofstream outfile;
    ofstream petsOutfile;
    string* username;


};

#endif TAMAGOTCHIGAME_SAVEMANAGER_H