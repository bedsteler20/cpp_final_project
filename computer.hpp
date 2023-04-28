#include <helpers.hpp>
#include <iomanip>
#include <iostream>
using namespace std;

class Computer {
   private:
    string _cpu;
    string _gpu;
    string _name;
    int _ram;
    int _storage;

   public:
    Computer(string name, string cpu, string gpu, int ram, int storage)
        : _name(name), _gpu(gpu), _cpu(cpu), _ram(ram), _storage(storage){};
    string getCpu();
    string getGpu();
    string getName();
    virtual string getType();
    int getRam();
    int getStorage();
    void setStorage(int);
    void setRam(int);
    void setCpu(string);
    void setGpu(string);
    void setName(string);
    virtual void print();
};

class Laptop : public Computer {
   private:
    int _screenSize;
    int _batterSize;

   public:
    Laptop(string name, string cpu, string gpu, int ram, int storage, int screenSize,
           int batterySize)
        : Computer(name, cpu, gpu, ram, storage),
          _screenSize(screenSize),
          _batterSize(_batterSize) {}
    int getScreenSize();
    int getBatterySize();
    void setScreenSize(int);
    void setBatterySize(int);
    string getType() override;
    void print() override;
};
