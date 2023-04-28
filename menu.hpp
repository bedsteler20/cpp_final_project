#include <computer.hpp>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// Controls the main prompt and executes commands
// based on user input
class Menu {
   public:
    Menu();
    int runLoop();

   private:
    string _command;
    vector<unique_ptr<Computer>> _computers;
    void _prompt();
    void _mainMenu();
    void _addMenu();
    void _removeMenu();
    void _displayMenu();
};