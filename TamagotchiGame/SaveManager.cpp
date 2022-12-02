//Final Version
#include <iostream>
#include "SaveManager.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

SaveManager::SaveManager(string* user) {
    this->username = user;
}

string* SaveManager::getUsername() {
    return username;
}

bool SaveManager::userExists() {

	infile.open("users.txt");

	if (!infile.is_open()) {
		cout << "Error opening file" << endl;
		return false;
	}

	string user;
    string userPtr = *username;
	
	while (!infile.eof()) {

		getline(infile, user);
		if (user == userPtr) {
            return true;
		}

	}
    infile.close();
	return false;
}

void SaveManager::addUser() {

	//outfile.open("users.txt");
	outfile.open("users.txt", ios_base::app);

	if (!infile.is_open()) {
		cout << "Error opening file" << endl;
	}

	outfile << username << endl;
}

void SaveManager::savePet(Pet* petGive) {

    vector<Pet*> pets;
    vector<string> petInfo;

    string line;

    ifstream file;
    file.open("pets.txt");

    if (!file.is_open()) {
        cout << "Error opening file" << endl;
    }

    while (getline(file, line)) {

        // username petname type 50 20 30 100

        istringstream ss(line);
        string word;
        while (ss >> word) {
            petInfo.push_back(word);
        }
        ss.clear();

        /*
        for (auto & i : petInfo) {
            cout << "pet info " << i << endl;
        }
         */

        if (petInfo[1] != petGive->getName()) {
            Pet* pet = new Pet();

            pet->setOwner(petInfo[0]);
            pet->setName(petInfo[1]);
            pet->setType(petInfo[2]);
            pet->setStrength(stod(petInfo[3]));
            pet->setCore(stod(petInfo[4]));
            pet->setLuck(stod(petInfo[5]));
            pet->setEnergy(stoi(petInfo[6]));

            pets.push_back(pet);
            petInfo.clear();
        }

        ofstream file;

        file.open("pets.txt");



    }
}

void SaveManager::addPet(Pet* pet) {

    string petStr = *username + " " + pet->getName() + " " + pet->getType() + " " + to_string(pet->getStrength()) + " " + to_string(pet->getCore()) + " " + to_string(pet->getLuck()) + " " +
            to_string(pet->getEnergy());

    ofstream file;

    file.open("pets.txt", ios_base::app);

    if (!file.is_open()) {
        cout << "Error opening file" << endl;
    }

    file << petStr << endl;

    file.close();

}

bool SaveManager::petExists(Pet* pet) {

    string line;

    string petName = pet->getName();

    ifstream file;

    file.open("pets.txt");

    while (!file.eof()) {
                                          // user petname type strength core luck energy
        getline(file, line); // username petname type 50 20 30 100

        stringstream ss(line);
        string word;
        while (ss >> word) {
            if (word == petName) {
                file.close();
                return true;
            }
        }
    }
    file.close();
    return false;
}

Pet* SaveManager::displayPets() {

    vector<Pet*> pets;
    vector<string> petInfo;

    string line;

    ifstream file;
    file.open("pets.txt");

    if (!file.is_open()) {
        cout << "Error opening file" << endl;
    }

    while (getline(file, line)) {

        // username petname type 50 20 30 100

        istringstream ss(line);
        string word;
        while (ss >> word) {
            petInfo.push_back(word);
        }
        ss.clear();

        /*
        for (auto & i : petInfo) {
            cout << "pet info " << i << endl;
        }
         */

        Pet* pet = new Pet();

        pet->setOwner(petInfo[0]);
        pet->setName(petInfo[1]);
        pet->setType(petInfo[2]);
        pet->setStrength(stod(petInfo[3]));
        pet->setCore(stod(petInfo[4]));
        pet->setLuck(stod(petInfo[5]));
        pet->setEnergy(stoi(petInfo[6]));

        pets.push_back(pet);
        petInfo.clear();


    }

    vector<Pet*> petsAccess;

    for (int x = 0; x < pets.size(); x++) {
        //pets[x].toString();
        if (pets[x]->getOwner() == *username) {
            petsAccess.push_back(pets[x]);
        }
    }

    for (int z = 0; z < pets.size(); z++) {
        cout << z+1 << ". Name:" << petsAccess[z]->getName() << " Type:" << petsAccess[z]->getType() << endl;
    }

    int num;
    cout << "Type the number of what pet to access" << endl;
    cin >> num;

    Pet* finalPet = petsAccess[num-1];

    file.close();

    return finalPet;

}
