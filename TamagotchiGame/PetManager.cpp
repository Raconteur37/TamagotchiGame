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
        mult = 1.05;
    } else if (core > 35 && core <= 60) {
        mult = 1.20;
    } else if (core > 60 && core <= 90) {
        mult = 1.35;
    } else if (core > 90) {
        mult = 1.45;
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
    if (type == "core") {
        if (difficulty == "easy") {
            double amount = 1 + (rand() % 3);
            if (add) {
                pet->addCore(amount * mult);
                cout << "--==You gained " << amount << " core==--" << endl;
                sleep(2);
            } else {
                pet->addCore(amount * -1);
                cout << "--==You lost " << amount << " of core==--" << endl;
                sleep(2);
            }
        }
        if (difficulty == "medium") {
            double amount = 2 + (rand() % 4);
            if (add) {
                pet->addCore(amount * mult);
                cout << "--==You gained " << amount << " core==--" << endl;
                sleep(2);
            } else {
                pet->addCore(amount * -1);
                cout << "--==You lost " << amount << " of core==--" << endl;
                sleep(2);
            }
        }
        if (difficulty == "hard") {
            double amount = 3 + (rand() % 7);
            if (add) {
                pet->addCore(amount * mult);
                cout << "--==You gained " << amount << " core==--" << endl;
                sleep(2);
            } else {
                pet->addCore(amount * -1);
                cout << "--==You lost " << amount << " of core==--" << endl;
                sleep(2);
            }
        }
        if (difficulty == "insane") {
            double amount = 3 + (rand() % 9);
            if (add) {
                pet->addCore(amount * mult);
                cout << "--==You gained " << amount << " core==--" << endl;
                sleep(2);
            } else {
                pet->addCore(amount * -1);
                cout << "--==You lost " << amount << " of core==--" << endl;
                sleep(2);
            }
        }
        if (pet->getCore() >= 100) {
            pet->setCore(100);
            cout << "You have achieved max Core...well done, you have certified ethics" << endl;
            sleep(2);
        }
        return;
    }


}

bool PetManager::trainLuck() {

    cout << "Welcome to Luck training..." << endl;
    sleep(2);
    cout << "I hope you trust " << pet->getName() << " because they are going to gamble" << endl;
    sleep(3);
    cout << pet->getName() << "'s current luck is " << pet->getLuck() << endl;
    sleep(2);
    cout << "The higher that stat is, the more likely they are to win...but also they have more to lose" << endl;
    sleep(3);
    cout << "Im going to determine which casino to send your pet to, then you are going to bet on which games they will win or lose one" << endl;
    sleep(5);

    double luck = pet->getLuck();

    string casino,difficulty;

    if (luck > 0 && luck <= 20) {
        difficulty = "easy";
        casino = "Dirt Hut Casino";
    } else if (luck > 20 && luck <= 45) {
        difficulty = "medium";
        casino = "Middle Class Money Grabbing Casino";
    } else if (luck > 45 && luck <= 80) {
        difficulty = "hard";
        casino = "High Stakes Casino";
    } else if (luck > 80 && luck <= 99) {
        difficulty = "insane";
        casino = "Big Baller Lose All Your Money Here Casino";
    } else if (luck >= 100) {
        cout << "You have max luck already...what are you doing here" << endl;
        return true;
    }

    cout << "Looks like you are heading to --==" << casino << "==--" << endl;
    cout << "Goodluck..." <<endl;
    sleep(3);
    cout << "First off your pet is going to play Poker" << endl;

    int pokerWins = 0;
    int pokerPlays = 4;
    int pokerPredictWins = 0;

    int blackjackWins = 0;
    int blackjackPlays = 0;
    int blackjackPredictWins = 0;

    int crapsWins = 0;
    int crapsPlays = 0;
    int crapsPredictWins = 0;

    sleep(3);
    if (difficulty == "medium") {
        pokerPlays += 2;
        blackjackPlays += 2;
    }
    if (difficulty == "hard") {
        pokerPlays += 3;
        blackjackPlays += 2;
        crapsPlays += 1;
    }
    if (difficulty == "insane") {
        pokerPlays += 4;
        blackjackPlays += 1;
        crapsPlays += 2;
    }
    cout << "Your pet will play " << pokerPlays << " poker games" << endl;
    sleep(3);
    if (blackjackPlays > 0) {
        cout << "Your pet will play " << blackjackPlays << " blackjack games" << endl;
        sleep(3);
    }
    if (crapsPlays > 0) {
        cout << "Your pet will play " << crapsPlays << " craps games" << endl;
        sleep(3);
    }

    bool miserable = false;
    bool anxious = false;
    bool neutral = false;
    bool confident = false;
    bool overzealous = false;


    cout << "Now its time to place your bets, how many games of Poker will your pet win? (They get " << pokerPlays << " plays)" << endl;
    cin >> pokerPlays;
    sleep(2);
    if (blackjackPlays > 0) {
        cout << "How many games of Blackjack will your pet win? (They get " << blackjackPlays << " plays)" << endl;
        cin >> blackjackPlays;
        sleep(3);
    }
    if (crapsPlays > 0) {
        cout << "How many games of Craps will your pet win? (They get " << crapsPlays << " plays)" << endl;
        cin >> crapsPlays;
        sleep(3);
    }








}

string askOptions() {

    string inp;
    cout << "1. Pet" << endl;
    cout << "2. Smack" << endl;
    cout << "3. Ignore" << endl;
    cout << "What do you do? " << endl;
    cin >> inp;
    return inp;

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

    string environment;

    if (core > 0 && core <= 20) {
        difficulty = "easy";
        environment = "grasslands";
    } else if (core > 20 && core <= 45) {
        difficulty = "medium";
        environment = "cave";
    } else if (core > 45 && core <= 80) {
        difficulty = "hard";
        environment = "Ohio";
    } else if (core > 80 && core <= 99) {
        difficulty = "insane";
        environment = "hell";
    } else if (core >= 100) {
        cout << "You have max core already...what are you doing here" << endl;
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

    cout << "--===" << environment << "===--" << endl;
    cout << "-You are walking and spot a puppy...he is in your way-" << endl;
    string option;
    option = askOptions();
    if (option == "1") { // Pet
        if (environment == "grasslands") {
            editValues(difficulty,"core",true);
            cout << "aww you gave him a little pat" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",false);
            cout << "he bit you" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",false);
            cout << "never pet the puppy in Ohio..." << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",true);
            cout << "just because hes in hell doesnt mean he doesnt like pets" << endl;
        }
    }
    if (option == "2") { // Smack
        if (environment == "grasslands") {
            editValues(difficulty,"core",false);
            cout << "you monster" << endl;
        }
        if (environment == "cave") {
            cout << "he wouldve bit you but you still dont do that" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",false);
            cout << "       /^-^\\" << endl;
            cout << "      / o o \\" << endl;
            cout << "     /   Y   \\" << endl;
            cout << "     V \\ v / V" << endl;
            cout << "       / - \\" << endl;
            cout << "      /    |" << endl;
            cout << "(    /     |" << endl;
            cout << " ===/___) ||" << endl;
            sleep(15);
            exit(1);
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "why..." << endl;
        }
    }
    if (option == "3") { // Ignore
        if (environment == "grasslands") {
            cout << "You ignored the puppy...nothing happened" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",true);
            cout << "Smart choice..." << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",true);
            cout << "It had to be done" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "He bullied you and took your money for not petting him...guess thats why hes in hell" << endl;
        }
    }
    sleep(4);
    cout << "-You continue on your path...suddenly you meet a crying Ogre-" << endl;
    sleep(3);
    option = askOptions();
    if (option == "1") { // Pet
        if (environment == "grasslands") {
            editValues(difficulty,"core",true);
            cout << "you gave him a pat to make him feel better" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",false);
            cout << "he bit you...rude" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",true);
            cout << "He transforms into a princess and kisses you" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "The devil appears and smites you" << endl;
        }
    }
    if (option == "2") { // Smack
        if (environment == "grasslands") {
            editValues(difficulty,"core",true);
            cout << "Look...he was a scary ogre I understand" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",true);
            cout << "You had an epic battle that lasted 4 hours, you came out victorious" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",false);
            cout << "He literally almost killed you" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "The devil appears and smites you" << endl;
        }
    }
    if (option == "3") { // Ignore
        if (environment == "grasslands") {
            cout << "You left him crying..i dont know if I should take away points or not" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",true);
            cout << "You had an epic battle, you came out victorious" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",false);
            cout << "He literally almost killed you for walking away" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",true);
            cout << "The devil appears but just watches you leave" << endl;
        }
    }
    sleep(4);
    cout << "-As you walk, suddenly you meet a pretty (insert preferred gender) person, your owner starts to fall in love-" << endl;
    sleep(3);
    option = askOptions();
    if (option == "1") { // Pet
        if (environment == "grasslands") {
            editValues(difficulty,"core",true);
            cout << "Your owner was happy that you like your future co-owner" << endl;
        }
        if (environment == "cave") {
            cout << "A little weird that they are in a cave...the sparks didnt fly after you pet them" << endl;
        }
        if (environment == "Ohio") {
            cout << "Wow you also showed interest in this person..suddenly you want a new owner" << endl;
            sleep(3);
            cout << "You talk to the person about switching owners, your owner over hears and confronts you" << endl;
            sleep(3);
            cout << "You tell your owner its nothing personal and that you think its time for a change..." << endl;
            sleep(3);
            cout << "Your owner eventually agrees because they just want the best for you" << endl;
            sleep(3);
            pet->setOwner("Ohio");
            cout << "4 Years Later...." << endl;
            sleep(3);
            cout << "You are miserable and miss your old partner...you text them" << endl;
            sleep(3);
            cout << "There is no response..." << endl;
            sleep(4);
            cout << "Your partner leaves you with $139,568 in debt" << endl;
            sleep(4);
            cout << "The end." << endl;
            exit(1);
        }
        if (environment == "hell") {
            editValues(difficulty,"core",true);
            cout << "It's pretty obvious this is the devil trying to charm you but I respect the grind" << endl;
        }
    }
    if (option == "2") { // Smack
        if (environment == "grasslands") {
            editValues(difficulty,"core",false);
            cout << "Really....." << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",true);
            cout << "She turned into an evil witch and tried to kill you..good catch" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",true);
            cout << "They are for the streets of Ohio anyway" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "Yes, refuse temptation...wait this isnt that type of game" << endl;
        }
    }
    if (option == "3") { // Ignore
        if (environment == "grasslands") {
            editValues(difficulty,"core",true);
            cout << "You arent looking for a new owner right now" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",true);
            cout << "Just...dont interact with someone like that in a cave" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",false);
            cout << "They got mad and pushed in the soft part of your head..now you have a weird dent" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "Yes, refuse temptation...wait this isnt that type of game" << endl;
        }
    }
    sleep(4);
    cout << "-You are getting pretty tired...someone comes up to you and offers you some water" << endl;
    sleep(3);
    option = askOptions();
    if (option == "1") { // Pet
        if (environment == "grasslands") {
            editValues(difficulty,"core",true);
            cout << "The person is confused as to why you did that but gave you water anyway" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",false);
            cout << "he bit you......why do they always do that here" << endl;
        }
        if (environment == "Ohio") {
            cout << "They gave you the water..." << endl;
            sleep(3);
            cout << "But you start to feel weird.." << endl;
            sleep(3);
            cout << "Ugh oh...." << endl;
            sleep(3);
            editValues(difficulty,"core",false);
        }
        if (environment == "hell") {
            editValues(difficulty,"core",false);
            cout << "You took the water but ouch...it was throat hurty juice" << endl;
        }
    }
    if (option == "2") { // Smack
        if (environment == "grasslands") {
            editValues(difficulty,"core",false);
            cout << "They just wanted to give you water...geez" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty,"core",true);
            cout << "You dont need that water, this cave is cold" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty,"core",false);
            cout << "It was just a kid trying to raise enough money to get out of Ohio" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty,"core",true);
            cout << "It was a test, the devil is impressed" << endl;
        }
    }
    if (option == "3") { // Ignore
        if (environment == "grasslands") {
            cout << "Wow...your tough" << endl;
        }
        if (environment == "cave") {
            cout << "Its a sketchy place to offer water anyway" << endl;
        }
        if (environment == "Ohio") {
            cout << "The water wasnt even made in Ohio" << endl;
        }
        if (environment == "hell") {
            cout << "Its pretty obvious water isnt offered in hell" << endl;
        }
    }
    sleep(4);
    cout << "-You are nearing the end of your journey....you see the puppy again..." << endl;
    sleep(3);
    option = askOptions();
    if (option == "1") { // Pet
        if (environment == "grasslands") {
            editValues(difficulty, "core", true);
            cout << "Looks like this journey hasnt changed you for the worse" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty, "core", true);
            cout << "He felt bad and licked you this time" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty, "core", false);
            cout << "I told you...never pet the puppy in Ohio" << endl;
        }
        if (environment == "hell") {
            editValues(difficulty, "core", false);
            cout << "He bit your hand off...it was a different puppy...how could you not tell?" << endl;
        }
    }
    if (option == "2") { // Smack
        if (environment == "grasslands") {
            editValues(difficulty, "core", false);
            cout << "How have you become a worse pet after all this" << endl;
        }
        if (environment == "cave") {
            editValues(difficulty, "core", false);
            cout << "You were supposed to forgive them..you learned nothing" << endl;
        }
        if (environment == "Ohio") {
            editValues(difficulty, "core", false);
            cout << "       /^-^\\" << endl;
            cout << "      / o o \\" << endl;
            cout << "     /   Y   \\" << endl;
            cout << "     V \\ v / V" << endl;
            cout << "       / - \\" << endl;
            cout << "      /    |" << endl;
            cout << "(    /     |" << endl;
            cout << " ===/___) ||" << endl;
            sleep(15);
            exit(1);
        }
        if (environment == "hell") {
            editValues(difficulty, "core", true);
            cout << "The dog stands on two legs and stares at you" << endl;
        }
    }
    if (option == "3") { // Ignore
        if (environment == "grasslands") {
            cout << "Nothing happened again...you are boring" << endl;
        }
        if (environment == "cave") {
            cout << "You took the easy way out of this cave" << endl;
        }
        if (environment == "Ohio") {
            cout << "       /^-^\\" << endl;
            cout << "      / o o \\" << endl;
            cout << "     /   Y   \\" << endl;
            cout << "     V \\ v / V" << endl;
            cout << "       / - \\" << endl;
            cout << "      /    |" << endl;
            cout << "(    /     |" << endl;
            cout << " ===/___) ||" << endl;
            sleep(15);
            cout << "Wise choice...." << endl;
            sleep(5);
        }
        if (environment == "hell") {
            editValues(difficulty, "core", true);
            cout << "The dog stands on two legs and stares at you" << endl;
        }
    }
    sleep(3);
    cout << "Well done..you have completed ethic core training" << endl;
    sleep(3);

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
                trainCore();
            }
        }
    }




}