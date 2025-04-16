#include <iostream>
#include <random>
#include <string>
#include <limits>
#include <fstream>

class Character{
    Character(unsigned short x, short y, std::string z) {
        unsigned short health = x;
        short stamina = y;
        std::string weapon = z;
    }

    void Inventory();
};




