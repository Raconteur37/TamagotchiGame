#include <string>
#include <iostream>

#include "Art.h"

using namespace std;

Art::Art() {

}

void Art::drawWelcome() {
    wcout << R"(
───▄▀▀▀▄▄▄▄▄▄▄▀▀▀▄───
───█▒▒░░░░░░░░░▒▒█───
────█░░█░░░░░█░░█────
─▄▄──█░░░▀█▀░░░█──▄▄─
█░░█─▀▄░░░░░░░▄▀─█░░█
█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█
█░░╦─╦╔╗╦─╔╗╔╗╔╦╗╔╗░░█
█░░║║║╠─║─║─║║║║║╠─░░█
█░░╚╩╝╚╝╚╝╚╝╚╝╩─╩╚╝░░█                          
)" << endl;
}

void Art::drawPhoenix() {

    cout << "                \\||/" << endl;
    cout << "                |  @___oo" << endl;
    cout << "      /\\  /\\   / (__,,,,|" << endl;
    cout << "     ) /^\\) ^\\/ _)" << endl;
    cout << "     )   /^\\/   _)" << endl;
    cout << "     )   _ /  / _)" << endl;
    cout << " /\\  )/\\/ ||  | )_)" << endl;
    cout << "<  >      |(,,) )__)" << endl;
    cout << " ||      /    \\)___)\\" << endl;
    cout << " | \\____(      )___) )___" << endl;
    cout << "   \\______(_______;;; __;;;" << endl;

}