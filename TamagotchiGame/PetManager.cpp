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

void PetManager::editValues(string difficulty,string type, bool add) {

    double core = pet->getCore();
    double mult;
    if (core <= 35) {
        mult = 1.10;
    } else if (core > 35 && core <= 60) {
        mult = 1.30;
    } else if (core > 60 && core <= 90) {
        mult = 1.45;
    } else if (core > 90) {
        mult = 1.60;
    }

    if (type == "strength") {
        if (difficulty == "easy") {
            double amount = 1 + (rand() % 5);
            if (add) {
                pet->addStrength(amount * mult);
                cout << "--==You gained " << amount << " strength==--" << endl;
                sleep(2);
            } else {
                pet->addStrength(amount * -1);
                cout << "--==You lost " << amount << " of strength==--" << endl;
                sleep(2);
            }
        }
        if (difficulty == "medium") {
            double amount = 2 + (rand() % 7);
            if (add) {
                pet->addStrength(amount * mult);
                cout << "--==You gained " << amount << " strength==--" << endl;
                sleep(2);
            } else {
                pet->addStrength(amount * -1);
                cout << "--==You lost " << amount << " of strength==--" << endl;
                sleep(2);
            }
        }
        if (difficulty == "hard") {
            double amount = 4 + (rand() % 14);
            if (add) {
                pet->addStrength(amount * mult);
                cout << "--==You gained " << amount << " strength==--" << endl;
                sleep(2);
            } else {
                pet->addStrength(amount * -1);
                cout << "--==You lost " << amount << " of strength==--" << endl;
                sleep(2);
            }
        }
        if (difficulty == "insane") {
            double amount = 8 + (rand() % 15);
            if (add) {
                pet->addStrength(amount * mult);
                cout << "--==You gained " << amount << " strength==--" << endl;
                sleep(2);
            } else {
                pet->addStrength(amount * -1);
                cout << "--==You lost " << amount << " of strength==--" << endl;
                sleep(2);
            }
        }
        if (pet->getStrength() >= 100) {
            pet->setStrength(100);
            cout << "You have achieved peak Strength...well done" << endl;
            sleep(2);
        }
        return;
    }


}

bool PetManager::trainCore() {

    cout << "Welcome to Core training...." << endl;
    sleep(2);
    cout << "Im going to put you in an environment...this will change based on your core level" << endl;
    sleep(3);
    cout << "Choose the correct actions and increase your core, but make the wrong decision and it'll go down" << endl;
    sleep(4);
    cout << "Ready?.." << endl;
    sleep(2);

    string difficulty;

    double core = pet->getCore();

    if (core > 0 && core <= 20) {
        difficulty = "easy";
    } else if (core > 20 && core <= 45) {
        difficulty = "medium";
    } else if (core > 45 && core <= 80) {
        difficulty = "hard";
    } else if (core > 80 && core <= 99) {
        difficulty = "insane";
    } else if (core >= 100) {
        cout << "You have max core already...what are you doing here" << endl;
        return true;
    }




}

bool PetManager::trainStrength() {

    string easyWords[] = {"yay","car","bar","size","light","pop","sit","lap","fat","sat","yet","kite"};
    string mediumWords[] = {"tough","fight","battle","hard","laugh","crackle","trance","create","flying","through","amplify"};
    string hardWords[] = {"seizing","blacksmith","thankfulness","infinite","uncanny","therefor","dominance","intrinsic","embraced","destroying","billiards","surviving","enduring","swallowing","unbecoming"};
    string insaneWords[] = {"mississippi","incredible","hypercriticize","overzealous","hyperbolize","uncannyvalley","hahahahaha","goodluckwiththisone","extremedomination","benevolence","insurmountable","insanedifficulty"};

    int timeLimit;
    int correctAmount;
    int askAmount;

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

    if (difficulty == "easy") {
        if (pet->getEnergy() >= 6) {
           cout << "This will cost 6 energy" << endl;
        } else {
            cout << "You do not have enough energy (need 6)" << endl;
            sleep(2);
            return false;
        }
    }
    if (difficulty == "medium") {
        if (pet->getEnergy() >= 8) {
            cout << "This will cost 8 energy" << endl;
        } else {
            cout << "You do not have enough energy (need 8)" << endl;
            sleep(2);
            return false;
        }
    }
    if (difficulty == "hard") {
        if (pet->getEnergy() >= 10) {
            cout << "This will cost 10 energy" << endl;
        } else {
            cout << "You do not have enough energy (need 10)" << endl;
            sleep(2);
            return false;
        }
    }
    if (difficulty == "insane") {
        if (pet->getEnergy() >= 15) {
            cout << "This will cost 15 energy" << endl;
        } else {
            cout << "You do not have enough energy (need 15)" << endl;
            sleep(2);
            return false;
        }
    }

    sleep(2);
    cout << "Welcome to strength training" << endl;
    sleep(3);
    cout << "Im going to give you some words to type, type them within the time limit to increase strength" << endl;
    sleep(3);
    cout << "Let me check the stats of your " << pet->getType() << " real quick..." << endl;
    sleep(3);
    if (difficulty == "easy") {
        timeLimit = 4;
        correctAmount = 3;
        askAmount = 6;
        cout << "Hmm, you are pretty weak so your difficulty is " << difficulty << endl;
        sleep(3);
        cout << "I will give you " << askAmount << " words..and you only need to get " << correctAmount << " right within " << timeLimit << " seconds" << endl;
    }
    if (difficulty == "medium") {
        timeLimit = 3;
        correctAmount = 4;
        askAmount = 7;
        cout << "Hmm, you are still kinda weak so your difficulty is " << difficulty << endl;
        sleep(3);
        cout << "I will give you " << askAmount << " words..and you only need to get " << correctAmount << " right within " << timeLimit << " seconds" << endl;
    }
    if (difficulty == "hard") {
        timeLimit = 2;
        correctAmount = 7;
        askAmount = 9;
        cout << "You are getting there...here is your difficulty: " << difficulty << endl;
        sleep(3);
        cout << "I will give you " << askAmount << " words..and you only need to get " << correctAmount << " right within " << timeLimit << " seconds" << endl;
    }
    if (difficulty == "insane") {
        timeLimit = 2;
        correctAmount = 9;
        askAmount = 10;
        cout << "Im impressed....let me see if I shouldnt be...." << difficulty << endl;
        sleep(3);
        cout << "You get " << askAmount << " words..get " << correctAmount << " right within " << timeLimit << " seconds..." << endl;
    }
    sleep(4);
    cout << "You ready?..." << endl;
    sleep(2);
    cout << "3" << endl;
    sleep(1);
    cout << "2" << endl;
    sleep(1);
    cout << "1" << endl;
    sleep(1);


    int x = 0;
    int correct = 0;

    const chrono::seconds time_limit( timeLimit );

    while (x < askAmount) {
        string targetWord;
        if (difficulty == "easy") {
            int targetNum = 0 + (rand() % (1+easyWords->size()));
            targetWord = easyWords[targetNum];
        }
        if (difficulty == "medium") {
            int targetNum = 0 + (rand() % (3+mediumWords->size()));
            targetWord = mediumWords[targetNum];
        }
        if (difficulty == "hard") {
            int targetNum = 0 + (rand() % (3+hardWords->size()));
            targetWord = hardWords[targetNum];
        }
        if (difficulty == "insane") {
            int targetNum = 0 + (rand() % (3+insaneWords->size()));
            targetWord = insaneWords[targetNum];
        }

        cout << "Type " << targetWord << endl;

        string input;
        auto time_begin = chrono::steady_clock::now();
        cin >> input;
        auto time_end = chrono::steady_clock::now();

        auto elapsed_milli = chrono::duration_cast<chrono::seconds>(
                time_end - time_begin );

        if( input == targetWord && elapsed_milli <= time_limit ) {
            cout << "Got it" << endl;
            correct++;
        } else {
            cout << "Nope" << endl;
        }
        sleep(1);
        cout << "Next..." << endl;
        sleep(2);
        x++;
    }

    if (correct >= correctAmount) {
        cout << "Well done..." << endl;
        sleep(2);
        editValues(difficulty,"strength",true);
    } else {
        cout << "Looks like you arent strong enough for this one " << pet->getName() << endl;
        sleep(2);
        editValues(difficulty,"strength",false);
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
            if (subOption == 2) {

            }
        }
    }




}