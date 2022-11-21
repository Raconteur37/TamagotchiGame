#include <string>
#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

class SaveManager {

public:
	void saveManager();
	bool userExists(string);
	void addUser(string);
    bool petExists(string);


private:
	string filename;
	ifstream infile;
	ofstream outfile;
    string username;


};