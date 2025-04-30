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
        bool Accepted;
        std::string temp;

        std::cout << "\nEnter a Name for Your NPC"; //"Enter a Name for Your " >> type >> ": ";
        std::getline(std::cin, Name);
        std::cin.clear();

        std::cout << "\nDo you Accept The Name: yes(Y) or no(N) ";
        
        if(!(std::cin >> temp)|| temp != "Y" || temp !=) {

        }

     }
    

};



int main() {

}
