//Final Version
#include <sqlite3.h>
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
