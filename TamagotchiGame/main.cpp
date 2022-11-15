#include <string>
#include <iostream>

#include "Pet.h"
#include "Phoenix.h"
#include "SaveManager.h"
#include "MenuManager.h"
#include "Art.h"

using namespace std;

int main() {

    SaveManager saveManager = SaveManager();
    MenuManager menuManager = MenuManager();
    Art artManager = Art();

    string username;

    cout << "Input your username: " << endl;

    cin >> username;

    if (saveManager.userExists(username)) {
        cout << "Welcome back" << endl;
    } else {
        saveManager.addUser(username);
    }

    bool run = true;

    while (run) {
        menuManager.mainMenu();
    }

    //artManager.drawWelcome();









   return 0;

}