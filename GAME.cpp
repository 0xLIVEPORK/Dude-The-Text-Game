#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>

class Player{

};

class GambleYourLife: public Player{
    private:

    std::string items[19] = {
        "Second Chance Token",       // Survive a fatal shot once
        "Barrel Jammer",             // Nullifies next lethal shot
        "Ghost Round",               // Makes one bullet a dud
        ""
        "Mirror of Fate",            // Swap outcome with another player
        "Time Rewinder",             // Rewind last move
        "Loaded Die",                // Increase odds in your favor
        "Smoker's Distraction",      // Skip your turn
        "Unseen Hand",               // Randomly affect another player's chance
        "Adrenaline Surge",          // Allows You to Use 2 More Items at the cost of having 1 Less Health
        "Fake Bullet",               // Insert harmless round
        "Dealer's Glove",            // Peek at next chamber
        "Silencer",                  // Increased Headshot Percentage
        "Misfire Charm",             // 50% chance to nullify shot
        "Cursed Coin",               // Force Roll on One's Life TWICE!
        "Hollow Round",              // Turns next bullet into a warning shot
        "Shadow Cloak",              // Become untargetable for one round
        "Vengeful Spirit",           // Take down the opponent's health by 1 if Hurt
        "Twist of Fate",             // Shuffle all chambers
    };
};

class GameLoop: GambleYourLife{

   
    

    public:


};

int main() {   

}
