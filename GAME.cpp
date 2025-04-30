#include <iostream>
#include <cstdlib>
#include <random>
#include <limits>



class Base_NPC{
    private:

    std::string Name;
    int Health;

    public:

    std::string getName() {
        return Name;
    }

    int getHealth() {
        return Health;
    }

    //Mutators

    void setName() {
        std::cout << "Enter a Name for Your NPC"; //"Enter a Name for Your " >> type >> ": ";
        std::getline(std::cin, Name);
     }
    

};



int main() {

}
