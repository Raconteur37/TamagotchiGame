#include <string>
#include <iostream>

#include "PetManager.h"
#include "Pet.h"
#include "Phoenix.h"
#include "Art.h"

using namespace std;

PetManager::PetManager() {
    pet = nullptr;
}

PetManager::PetManager(Pet* pet) {
    this->pet = pet;
}

void PetManager::setPet(Pet* pet) {
    this->pet = pet;
}

bool PetManager::mainMenu() {

    Art artManager = Art();

    artManager.drawPhoenix();

    cout << "---===Hello silly pet===---" << endl;
    cout << "1. Train" << endl;
    cout << "2. Send To Explore" << endl;
    cout << "3. Check Stats" << endl;
    cout << "4. Pass the time" << endl;
    cout << "5. Save and exit" << endl;
    cout << "Choose an option: ";
    int option;
    cin >> option;


}