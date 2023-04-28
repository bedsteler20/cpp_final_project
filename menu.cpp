#include "menu.hpp"

#include "helpers.hpp"

Menu::Menu() { _command = "help"; }

// The main loop that runs the menu handles selecting
// and displaying submenus
int Menu::runLoop() {
    do {
        _mainMenu();
        _prompt();
        getline(cin, _command);
        if (_command == "help") {
            _mainMenu();
        } else if (_command == "add") {
            _addMenu();
        } else if (_command == "remove") {
            _removeMenu();
        } else if (_command == "display") {
            _displayMenu();
        } else if (_command == "exit") {
            return 0;
        } else {
            cout << "Unknown Command: " << _command << endl;
        }
    } while (true);
}

void Menu::_prompt() { cout << "$> "; }

// displays a menu to add a computer to the inventory
void Menu::_addMenu() {
    bool isLaptop;
    string cpu, gpu, name;
    int ram, storage, screenSize, batterSize;
    ask("Is your computer a laptop", isLaptop);
    ask("CPU", cpu);
    ask("Ram", ram);
    ask("Computer Name", name);
    ask("GPU", gpu);
    ask("Storage", storage);
    if (isLaptop) {
        ask("Screen Size", screenSize);
        ask("Battery Size", batterSize);
        _computers.push_back(
            make_unique<Laptop>(Laptop(name, cpu, gpu, ram, storage, screenSize, batterSize)));
    } else {
        _computers.push_back(make_unique<Computer>(Computer(name, cpu, gpu, ram, storage)));
    }
}

// Prints all computers stored to the standend output
void Menu::_displayMenu() {
    const string TITLE = "Computers";
    const int TITLE_PADDING = 10;
    // Print out a fancy title
    cout << setfill(' ') << setw(TITLE_PADDING) << "" << TITLE << setfill(' ')
         << setw(TITLE_PADDING) << "" << endl
         << setfill('-') << setw(TITLE.length() + TITLE_PADDING * 2) << "" << endl;
    for (auto& computer : _computers) {
        computer->print();
        cout << endl;
    }
}
// Removes the last item from the inventory
void Menu::_removeMenu() {
    cout << "Removing last item in inventory" << endl;
    _computers.pop_back();
}

// Prints out a help command
void Menu::_mainMenu() {
    cout << "======================== Commands ========================" << endl;
    cout << "| help: Display this message                             |" << endl;
    cout << "| add: Add a computer to the inventory                   |" << endl;
    cout << "| remove: Remove the last computer from the inventory    |" << endl;
    cout << "| display: prints out all the computers in the inventory |" << endl;
    cout << "| exit: close this program                               |" << endl;
    cout << "==========================================================" << endl;
}