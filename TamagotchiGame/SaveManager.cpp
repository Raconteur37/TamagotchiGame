//Final Version
#include <stdio.h>
#include <iostream>
#include <SaveManager.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void SaveManager::saveManager() {

}

bool SaveManager::userExists(string username) {

	infile.open("users.txt");

	if (!infile.is_open()) {
		cout << "Error opening file" << endl;
		return false;
	}

	string user;
	
	while (!infile.eof()) {

		getline(infile, user);
		if (user.compare(username) == 0) {
			this->username = username;
            return true;
			break;
		}

	}
	return false;
	infile.close();

}

void SaveManager::addUser(string username) {

	//outfile.open("users.txt");
	outfile.open("users.txt", ios_base::app);

	if (!infile.is_open()) {
		cout << "Error opening file" << endl;
	}

	outfile << username << endl;
}

bool SaveManager::petExists(string petName) {

    string line;

    while (!infile.eof()) {
                                          // user:petname:strength:core:luck:energy
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
