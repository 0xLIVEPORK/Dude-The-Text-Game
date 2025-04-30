#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
//not a test
class Animal{
    private:

    std::string type;
    int strength;

    public:

    Animal() : type("Null") , strength(0) {}
    Animal(std::string t, int s) : type(t) , strength(s) {}
    

    virtual void attack() {
        std::cout << "base";
    }

    int getStrength() {
        return strength;
    }

    void setStrength() {

        std::cout << "Enter a Number of Strength: ";
        while(true){
            if(!(std::cin >> strength) || strength > 500 || strength < 0)
            {
                std::cerr << "\nInvalid Input\nTry Again: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
        break;
        }
    }
    
};

class Wolf: public Animal{
    private:

    bool owned;

    public:

    Wolf() : Animal() {};
    Wolf(std::string t, int s) : Animal(t, s) {}
    Wolf(std::string t) : Animal(t, 30) {}

    void attack() override{
        std::cout << "\nThe Wolf Bites with " << getStrength() << " Force";
    }

};

class Bear: public Animal{
    private:

    bool crazed;

    public:

    Bear() : Animal() {}
    Bear(std::string t, int s) : Animal(t, s) {}
    Bear(std::string t) : Animal(t, 70) {}

    void attack() override{
        std::cout << "\nThe Bear Clawed with Overwhelming Ferocity: " << getStrength() << " DMG";
    }
};

int main() {
    Animal* test;

    Wolf Dire("Direwolf");

    test = &Dire;
    test->attack();

    Bear Grizzly("Grizzly");

    test = &Grizzly;
    test->attack();

    return 0;
}
