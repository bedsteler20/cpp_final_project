#include "computer.hpp"

string Computer::getCpu() { return _cpu; }

string Computer::getGpu() { return _gpu; }

string Computer::getName() { return _name; }

string Computer::getType() { return "Computer"; }

int Computer::getRam() { return _ram; }

int Computer::getStorage() { return _storage; }

void Computer::setStorage(int storage) { _storage = storage; }

void Computer::setRam(int ram) { _ram = ram; }

void Computer::setCpu(string cpu) { _cpu = cpu; }

void Computer::setGpu(string gpu) { _gpu = gpu; }

void Computer::setName(string name) { _name = name; }

void Computer::print() {
    cout << setw(5) << setfill('=') << "" << getName() << setw(5) << setfill('=') << "" << endl;
    display("Storage", getStorage(), "GB");
    display("Type", getType());
    display("CPU", getCpu());
    display("GPU", getGpu());
}

int Laptop::getBatterySize() { return _batterSize; }

int Laptop::getScreenSize() { return _screenSize; }

void Laptop::setScreenSize(int screenSize) { _screenSize = screenSize; }

void Laptop::setBatterySize(int batterySize) { _batterSize = batterySize; }

string Laptop::getType() { return "Laptop"; }

void Laptop::print() {
    Computer::print();
    display("Battery Size", getBatterySize(), "mha");
    display("Screen Size", getScreenSize(), "in");
}