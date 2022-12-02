#include <string>
#include <iostream>
#include "MenuManager.h"
#include "SaveManager.h"
#include "Art.h"
#include "PetManager.h"

using namespace std;

int main() {

    Art artManager = Art();

    string username;

    cout << "Input your username: " << endl;

    cin >> username;

    string* user = &username;

    SaveManager saveManager = SaveManager(user);
    SaveManager* savePtr = &saveManager;

    PetManager petManager = PetManager();
    PetManager* petManagerPtr = &petManager;


    MenuManager menuManager = MenuManager(savePtr,petManagerPtr);

    if (saveManager.userExists()) {
        cout << "Welcome back" << endl;
    } else {
        saveManager.addUser();
    }

    bool run = true;

    while (run) {
        menuManager.mainMenu();
    }


   return 0;

}