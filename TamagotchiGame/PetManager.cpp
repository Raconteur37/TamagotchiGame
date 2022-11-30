#include <string>
#include <iostream>

#include "PetManager.h"
#include "Pet.h"
#include "Phoenix.h"
#include "Art.h"
#include <windows.h>
#include <unistd.h>
#include <chrono>

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

bool PetManager::trainStrength() {

    string easyWords[] = {"yay","car","bar","size","light","pop","sit","lap"};
    string mediumWords[] = {"tough","fight","battle","hard","laugh","crackle","trance","create","flying"};
    string hardWords[] = {"seizing","blacksmith","thankfulness","infinite","uncanny","therefor","dominance","intrinsic","embraced","destroying","billiards","surviving","enduring"};
    string insaneWords[] = {"mississippi","incredible","hypercriticize","overzealous","hyperbolize","uncannyvalley","hahahahaha","goodluckwiththisone","extremedomination","benevolence","insurmountable","insanedifficulty"};

    int timeLimit;

    string difficulty;

    double strength = pet->getStrength();

    if (strength > 0 && strength <= 20) {
        difficulty = "easy";
    } else if (strength > 20 && strength <= 45) {
        difficulty = "medium";
    } else if (strength > 45 && strength <= 80) {
        difficulty = "hard";
    } else if (strength > 80 && strength <= 99) {
        difficulty = "insane";
    } else if (strength >= 100) {
        cout << "You have max strength already...what are you doing here" << endl;
        return true;
    }

    cout << "Welcome to strength training" << endl;
    sleep(3);
    cout << "Im going to give you some words to type, type them within the time limit to increase strength" << endl;
    sleep(3);
    cout << "Let me check the stats of your " << pet->getType() << " real quick..." << endl;
    if (difficulty == "easy") {

    }
    sleep(3);
    cout << "Hmm, looks like your difficulty is " << difficulty << " and your time limit per word is " << timeLimit << endl;
    sleep(3);


    const string target = "cat";
    const chrono::seconds time_limit( 2 );

    cout << "Type '" << target << "' - you can't lose" << endl;
    string input;



    auto time_begin = chrono::steady_clock::now();
    cin >> input;
    auto time_end = chrono::steady_clock::now();

    auto elapsed_milli = chrono::duration_cast<chrono::seconds>(
            time_end - time_begin );

    if( input == target && elapsed_milli <= time_limit )
    {
        cout << "u winnar" << endl;
    } else {
        cout << "nope" << endl;
    }

    return true;



}

bool PetManager::mainMenu() {

    Art artManager = Art();

    if (pet->getType() == "phoenix") {
        artManager.drawPhoenix();
    }

    bool run = true;

    while (run) {
        cout << "---===Hello " << pet->getName() << "===---" << endl;
        cout << "Currently: " << pet->getStatus() << endl;
        cout << "Strength: " << pet->getStrength() << " Core: " << pet->getCore() << " Luck: " << pet->getLuck()
             << endl;
        cout << "1. Train" << endl;
        cout << "2. Send To Explore" << endl;
        cout << "3. Check Stats" << endl;
        cout << "4. Pass the time" << endl;
        cout << "5. Save and exit" << endl;
        cout << "Choose an option: ";
        int option;
        cin >> option;

        if (option == 1) {
            cout << "--==Choose an attribute==--" << endl;
            cout << "1. Strength" << endl;
            cout << "2. Core" << endl;
            cout << "3. Luck" << endl;
            int subOption;
            cin >> subOption;
            if (subOption == 1) {
                trainStrength();
            }
        }
    }




}