#include <iostream>
#include <random>
#include <string>
#include <limits>
#include <fstream>

class Character{
    private:
   

    public:
    Character(std::string w, unsigned short x, short y, std::string z) 
    {
        std::string name = w;
        unsigned short health = x;
        short stamina = y;
        std::string weapon = z;
    }
};

class DeadCheese: Character{
    public:

    void cheese()
    {
        std::cout << "Enter: ";
    }
};

int main() {

    DeadCheese Character("test", 10, 10, "word");



    return EXIT_SUCCESS;
}



