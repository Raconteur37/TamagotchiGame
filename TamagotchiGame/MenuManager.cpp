#include <string>
#include <iostream>

#include "MenuManager.h"
#include "Pet.h"
#include "Phoenix.h"


using namespace std;

MenuManager::MenuManager() {

}

bool MenuManager::creatPet() {

    cout << "---===Choose a pet===---" << endl;
    cout << "1. Phoenix" << endl;
    cout << "2. Panda" << endl;
    cout << "3. Bunnies" << endl;
    cout << "4. Exit" << endl;
    int option;
    cin >> option;
    if (option == 1) {
        string name;
        cout << "What will you name your Phoenix? " << endl;
        cin >> name;
        Phoenix phoenix = Phoenix(name,"phoenix");

    }
    if (option == 4) {
        return false;
    }

    return false;
}

bool MenuManager::accessPet() {

    return false;
}

bool MenuManager::deletePet() {

    return false;
}

void MenuManager::information() {

    cout << "---===Pet Information===---" << endl;
    cout << endl;
    cout << "Phoenix - Phoenix have high strength to start off with but lack the core and luck to get much done." << endl;
    cout << "Its almost as if they'd rather sleep on a pile of gold all day than increase their ethics." << endl;
    cout << "Strength: 50, Core: 20, Luck: 30" << endl;
    cout << endl;
    cout << "Panda - Pandas are very happy and spiritual animals, they have high core values so they are able to learn other stats quicker." << endl;
    cout << "However, they lack initial strength and luck, I guess nice guys do finish last.  " << endl;
    cout << "Strength: 30, Core: 55, Luck: 35" << endl;
    cout << endl;
    cout << "Rabbits - Rabbits come in a pack so if you pick one you pick them all." << endl;
    cout << "There are so many of them that it really increases their luck by a lot." << endl;
    cout << "However, their strength doesnt rely on numbers and they aren't smart enough to have a high core value." << endl;
    cout << "Despite popular belief its not their feet that gives them luck, it’s the amount of them you throw at a problem" << endl;
    cout << "Strength: 25, Core: 25, Luck: 60" << endl;
    cout << endl;
    string inp;
    cout << "Type anything to continue: ";
    cin >> inp;
}

bool MenuManager::mainMenu() {

    cout << "---===Main Menu===---" << endl;
    cout << "1. Create a pet" << endl;
    cout << "2. Access a pet" << endl;
    cout << "3. Delete a pet" << endl;
    cout << "4. Read about the pets" << endl;
    cout << "5. Save and exit" << endl;
    cout << "Choose an option: ";
    int option;
    cin >> option;
    if (option == 1) {
        if (creatPet()) {
            return true;
        } else {
            return false;
        }
    } else if (option == 2){
        if (accessPet()) {
            return true;
        } else {
            return false;
        }
    } else if (option == 3) {
        if (deletePet()) {
            return true;
        } else {
            return false;
        }
    } else if (option == 4) {
        information();
        return false;
    } else if (option == 5) {
        exit(1);
    } else {
        return false;
    }
}