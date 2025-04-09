#include <iostream>
#include <random>
#include <string>
#include <limits>


int MenuLoop(int &test);

struct character{
    std::string name = "Kei";
    unsigned short level = 2;
    unsigned short health = 5;
    unsigned short strength = rand(); 
    std::string weapon = "Bread";

    void attack(std::string& name, unsigned short& level,  unsigned short& health, unsigned short& strength, std::string& weapon) {
        std::cout << name << " attacks with " << weapon << " for " << strength * 2 << " damage!\n";
    }
};

void display(std::string& name, unsigned short& level,  unsigned short& health, unsigned short& strength, std::string& weapon) {
    std::cout 
    << "Character: " << name << "\n"
    << "Level: " << level << "\n"
    << "Health: " << health << "\n"
    << "Strength " << strength << "\n"
    << "Weapon: " << weapon << "\n";
}

int main() {
    srand(time(0));

    character Kei;

    display(Kei.name, Kei.level, Kei.health, Kei.strength, Kei.weapon);

    Kei.attack(Kei.name, Kei.level, Kei.health, Kei.strength, Kei.weapon);
    
    return 0;
}


int MenuLoop(int &test);

int main () {
    int test = 0;

    MenuLoop(test);

    switch (test) 
    {
        case 0:
        std::cout << "WE ARE PLAYING!";
        break;

        case 1:
        std::cout << "> FILE 1\n" << " FILE 2\n";
        break;
        
        case 2:
        std::cout << "\t\tCREDITS\n" << "\n0xLIVEPORK - PROGRAMMER\n";
        break;
        
        case 3:
        std::cout << "THANKS FOR PLAYING!";
        break; 
        
        default:
        break;
    }

return 0;
}

int MenuLoop(int &test) {
    
    std::string Menu = 
    "Menu: \n"
    "[0] PLAY\n" 
    "[1] SAVE FILES\n" 
    "[2] CREDITS\n"
    "[3] EXIT\n";

    std::cout << Menu;

    do
    {
        if(!(std::cin >> test) || test < 0 || test > 3)
        {
            std::cout << Menu;
            std::cout << "Invalid Input\nTry Again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
    break;
    }
    while (true);

    return test;
}



int MenuLoop(int &test);

struct character{
    std::string name = "Kei";
    unsigned short level = 2;
    unsigned short health = 5;
    unsigned short strength = rand(); 
    std::string weapon = "Bread";

    void attack(std::string& name, unsigned short& level,  unsigned short& health, unsigned short& strength, std::string& weapon) {
        std::cout << name << " attacks with " << weapon << " for " << strength * 2 << " damage!\n";
    }
};

void display(std::string& name, unsigned short& level,  unsigned short& health, unsigned short& strength, std::string& weapon) {
    std::cout 
    << "Character: " << name << "\n"
    << "Level: " << level << "\n"
    << "Health: " << health << "\n"
    << "Strength " << strength << "\n"
    << "Weapon: " << weapon << "\n";
}

int main() {
    srand(time(0));

    character Kei;

    display(Kei.name, Kei.level, Kei.health, Kei.strength, Kei.weapon);

    Kei.attack(Kei.name, Kei.level, Kei.health, Kei.strength, Kei.weapon);
    
    return 0;
}


int MenuLoop(int &test);

int main () {
    int test = 0;

    MenuLoop(test);

    switch (test) 
    {
        case 0:
        std::cout << "WE ARE PLAYING!";
        break;

        case 1:
        std::cout << "> FILE 1\n" << " FILE 2\n";
        break;
        
        case 2:
        std::cout << "\t\tCREDITS\n" << "\n0xLIVEPORK - PROGRAMMER\n";
        break;
        
        case 3:
        std::cout << "THANKS FOR PLAYING!";
        break; 
        
        default:
        break;
    }

return 0;
}

int MenuLoop(int &test) {
    
    std::string Menu = 
    "Menu: \n"
    "[0] PLAY\n" 
    "[1] SAVE FILES\n" 
    "[2] CREDITS\n"
    "[3] EXIT\n";

    std::cout << Menu;

    do
    {
        if(!(std::cin >> test) || test < 0 || test > 3)
        {
            std::cout << Menu;
            std::cout << "Invalid Input\nTry Again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
    break;
    }
    while (true);

    return test;
}
