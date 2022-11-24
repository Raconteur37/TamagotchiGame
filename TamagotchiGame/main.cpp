#include <string>
#include <iostream>

#include "Pet.h"
#include "Phoenix.h"
#include "MenuManager.h"
#include "Art.h"

using namespace std;

int main() {

    Art artManager = Art();

    string username;

    cout << "Input your username: " << endl;

    cin >> username;

    SaveManager saveManager = SaveManager(username);
    SaveManager* savePtr = &saveManager;
    MenuManager menuManager = MenuManager(savePtr);

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