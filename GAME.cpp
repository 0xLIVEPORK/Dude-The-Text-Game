#include <iostream>
#include <random>
#include <string>
#include <limits>
#include <fstream>

class Character{
    Character(unsigned short x) {
        unsigned short health = x;
        
    }
};

int MenuLoop(int &test);

struct character{
    std::string name;
    unsigned short level;
    unsigned short health;
    unsigned short strength;
    std::string weapon;

    void attack(std::string& name, unsigned short& level,  unsigned short& health, unsigned short& strength, std::string& weapon) {
        std::cout << name << " attacks with" << weapon << " for" << strength * 2 << " damage!\n";
    }
};

void display(std::string& name, unsigned short& level,  unsigned short& health, unsigned short& strength, std::string& weapon) {
    
}



int main () {
    i

return 0;
}

int Menu()
