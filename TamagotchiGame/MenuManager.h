#include "SaveManager.h"
using namespace std;

class MenuManager {

public:
	MenuManager(SaveManager*);
    bool mainMenu();
	bool creatPet();
    bool accessPet();
    bool deletePet();
    void information(); // Maybe refactor later to select which pet to read about


private:
    string user;
    SaveManager* saveManager;

};