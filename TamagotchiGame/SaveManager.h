#include <string>
#include <stdio.h>
#include <fstream>
#include <iostream>
#include "Pet.h"

using namespace std;

class SaveManager {

public:
	SaveManager(string);
    string getUsername();
	bool userExists();
	void addUser();
    void addPet(Pet*);
    bool petExists(string);


private:
	string filename;
	ifstream infile;
	ofstream outfile;
    string username;


};