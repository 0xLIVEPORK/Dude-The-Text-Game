#include <iostream>
#include <string>

class Character {
protected:
    std::string name;
    unsigned short health;
    short stamina;
    std::string weapon;

public:
    Character(std::string w, unsigned short x, short y, std::string z) 
        : name(w), health(x), stamina(y), weapon(z) 
    {
        // constructor
    }
};

class DeadCheese : public Character {
public:
    DeadCheese(std::string w, unsigned short x, short y, std::string z)
        : Character(w, x, y, z) 
    {}

    void cheese() {
        std::cout << "Enter: ";
    }
};

int main() {
    DeadCheese deadCheese("test", 10, 10, "word");
    deadCheese.cheese();

    return EXIT_SUCCESS;
}
