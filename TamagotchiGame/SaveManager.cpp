//Final Version
#include <stdio.h>
#include <iostream>
#include <SaveManager.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

SaveManager::SaveManager(string username) {
    this->username = username;
}

string SaveManager::getUsername() {
    return username;
}

bool SaveManager::userExists() {

	infile.open("users.txt");

	if (!infile.is_open()) {
		cout << "Error opening file" << endl;
		return false;
	}

	string user;
	
	while (!infile.eof()) {

		getline(infile, username);
		if (user.compare(username) == 0) {
            return true;
			break;
		}

	}
	return false;
	infile.close();

}

void SaveManager::addUser() {

	//outfile.open("users.txt");
	outfile.open("users.txt", ios_base::app);

	if (!infile.is_open()) {
		cout << "Error opening file" << endl;
	}

	outfile << username << endl;
}

void SaveManager::addPet(Pet * pet) {

    string petStr = username + " " + pet->getName() + " " + to_string(pet->getStrength()) + " " + to_string(pet->getCore()) + " " + to_string(pet->getLuck()) + " " +
            to_string(pet->getEnergy());

    cout << "PET STRING " << petStr << endl;

}

bool SaveManager::petExists(string petName) {

    string line;

    while (!infile.eof()) {
                                          // user petname strength core luck energy
        getline(infile, line); // username petname 50 20 30 100

        stringstream ss(line);
        string word;
        while (ss >> word) {
            if (word == petName) {
                return false;
            }
        }
    }
    return true;
}
