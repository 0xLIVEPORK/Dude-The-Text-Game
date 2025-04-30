#include <iostream>
#include <cstdlib>
#include <random>
#include <limits>



class Player{
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
        while(true) {
            if(!(std::cin >> Name)) {

            }
        }
    }
    

};



int main() {

}
