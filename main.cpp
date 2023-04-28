#include <menu.hpp>

#include <iostream>
using namespace std;

int main() {
    auto menu = Menu();
    return menu.runLoop();
}
