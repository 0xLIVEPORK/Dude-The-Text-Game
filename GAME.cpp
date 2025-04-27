#include <iostream>
#include <cstdlib>
#include <limits>

class BattleArmor{
    private: 

    std::string material;
    int defense;
    int durability;

    public:

    //Constructinos

    BattleArmor(std::string m, int d1, int d2) 
    : material(m), defense(d1), durability(d2 > 500 ? 500 : (d2 < 0 ? 0 : d2)) 
    {}

    BattleArmor(std::string m, int d1) : BattleArmor(m, d1, 100) {}


    BattleArmor(std::string m) : BattleArmor(m, 5, 100) {}


    BattleArmor() : BattleArmor("Cloth", 1, 50) {}
    

    //Getterinos

    std::string getMaterial() {
        return material;
    }

    int getDefense() {
        return defense;
    }

    int getDurability() {
        return durability;
    }

    //Setterinos

    int setDurability() {

        int new_durability;
        
        while (true)
        {
            std::cout << "Set the New Value for Armor Durability: \n";

            if(!(std::cin >> new_durability) || new_durability > 1000 || new_durability < 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
        durability = new_durability;
        break;
        }
    
    return durability;
    }

    //Methodinos

    void describeBattleArmor(){
        std::cout << "Material: " << material << ", Defense: " << defense << ", Durability: " << durability << "\n";
    }
};

class MagicArmor : BattleArmor{
    private:
    
    int magicResistance;

    public:

    int returnMagicResistance() {
        return magicResistance;
    }

    int setMagicResistance() {

        while(true) {
            if(!(std::cin >> magicResistance) )
            {

            }
        }
    }

    void describeBattleArmor(){
        std::cout << "Material: " << getMaterial() << ", Defense: " << getDefense() << ", Durability: " << getDurability() << "\n";
    }

};

int main()
{
    BattleArmor Cuirass("Iron", 5, 800);

    Cuirass.describeBattleArmor();

    return EXIT_SUCCESS;
}
