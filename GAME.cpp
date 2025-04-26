/*
✍️ YOUR TASK

👉 Create a new class called Armor.
It should have:

    Two private variables: std::string material; and int defense;

    A constructor that sets both.

    A getter for material.

    A getter for defense.

    A setter for material.

    A setter for defense.

    A describeArmor() method that prints the material and defense.
*/

#include <iostream>
#include <limits>
#include <cstdlib>

class Armor{

    private:

    std::string material;
    int defense;

    public:
    // Constructadinos
    Armor(std::string m, int d) : material(m), defense(d)  {}
    Armor(std::string m) : material(m), defense(5) {}

    // Getterinos
    void getMaterial() {
        std::cout << material;
    }

    void getDefense() {
        std::cout << defense;
    }

    // Setterinos

    void setMaterial() {

        std::cout << "Enter the New Material For Armor: \n";
        getline(std::cin, material);
    }

    void setDefense() {
        
        int new_defense;
        
        while (true)
        {
            std::cout << "Set the New Value for Armor Defense: \n";

            if(!(std::cin >> new_defense) || new_defense > 1000 || new_defense < 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
        defense = new_defense;
        break;
        }
        
    }

    void describeArmor() {
        
    }
};
