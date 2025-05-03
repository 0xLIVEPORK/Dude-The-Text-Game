#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>

class Player {
protected:
    int health;
    std::vector<std::string> inventory;
    bool secondChance = false;
    bool shadowCloak = false;
    bool barrelJammer = false;
    bool misfireCharm = false;

public:
    Player() : health(1) {}

    void takeDamage() {
        if (shadowCloak) {
            std::cout << "Shadow Cloak activated! You evade the shot.\n";
            shadowCloak = false;
            return;
        }

        if (secondChance) {
            std::cout << "Second Chance Token used! You miraculously survive.\n";
            secondChance = false;
            return;
        }

        health--;
        std::cout << "You took damage! Health is now: " << health << "\n";
    }

    bool isAlive() {
        return health > 0;
    }

    void addItem(const std::string& item) {
        inventory.push_back(item);
        std::cout << "You received an item: " << item << "\n";
    }

    void showInventory() {
        if (inventory.empty()) {
            std::cout << "Your inventory is empty.\n";
            return;
        }
        std::cout << "Your Items:\n";
        for (size_t i = 0; i < inventory.size(); ++i) {
            std::cout << "  [" << i << "] " << inventory[i] << "\n";
        }
    }

    bool useItem(int index, bool chamber[], int& chamberIndex) {
        if (index < 0 || index >= static_cast<int>(inventory.size())) {
            std::cout << "Invalid item index!\n";
            return false;
        }

        std::string item = inventory[index];
        std::cout << "Using item: " << item << "\n";

        if (item == "Second Chance Token") {
            secondChance = true;
        } else if (item == "Barrel Jammer") {
            barrelJammer = true;
        } else if (item == "Ghost Round") {
            for (int i = 0; i < 6; ++i) {
                if (chamber[i]) {
                    chamber[i] = false;
                    std::cout << "A bullet has been turned into a dud.\n";
                    break;
                }
            }
        } else if (item == "Adrenaline Surge") {
            health--;
            std::cout << "Health reduced to " << health << " but you draw 2 items!\n";
            drawItem();
            drawItem();
        } else if (item == "Fake Bullet") {
            int slot = std::rand() % 6;
            chamber[slot] = false;
            std::cout << "A fake bullet has been inserted into chamber slot " << slot << ".\n";
        } else if (item == "Misfire Charm") {
            misfireCharm = true;
        } else if (item == "Dealer's Glove") {
            std::cout << "Peeking at next chamber: " << (chamber[chamberIndex] ? "BANG!" : "Click.") << "\n";
        } else if (item == "Shadow Cloak") {
            shadowCloak = true;
        } else if (item == "Twist of Fate") {
            resetChamber(chamber);
        } else {
            std::cout << "Effect for this item hasn't been implemented yet.\n";
            return false;
        }

        inventory.erase(inventory.begin() + index);
        return true;
    }

    void drawItem() {
        std::string items[20] = {
            "Second Chance Token", "Barrel Jammer", "Ghost Round", "Mirror of Fate",
            "Time Rewinder", "Loaded Die", "Smoker's Distraction", "Unseen Hand",
            "Adrenaline Surge", "Fake Bullet", "Dealer's Glove", "Silencer",
            "Misfire Charm", "Cursed Coin", "Hollow Round", "Shadow Cloak",
            "Vengeful Spirit", "Twist of Fate", "Last Will", "Death Defier"
        };

        int idx = std::rand() % 20;
        addItem(items[idx]);
    }

    void resetChamber(bool chamber[]) {
        for (int i = 0; i < 6; ++i) chamber[i] = false;
        int bulletSlot = std::rand() % 6;
        chamber[bulletSlot] = true;
        std::cout << "The revolver has been spun.\n";
    }

    bool pullTrigger(bool chamber[], int& chamberIndex) {
        std::cout << "\nPulling the trigger...\n";
        bool fired = chamber[chamberIndex];
        chamberIndex = (chamberIndex + 1) % 6;

        if (fired) {
            if (barrelJammer) {
                std::cout << "Barrel Jammer activated! Shot nullified.\n";
                barrelJammer = false;
                return true;
            }

            if (misfireCharm) {
                int chance = std::rand() % 100;
                if (chance < 50) {
                    std::cout << "Misfire Charm activated! The gun misfired.\n";
                    misfireCharm = false;
                    return true;
                }
            }

            std::cout << "BANG! You're hit!\n";
            takeDamage();
            return false;
        } else {
            std::cout << "Click. You survived this round.\n";
            return true;
        }
    }
};

class GameLoop : public Player {
private:
    bool chamber[6];
    int chamberIndex;

public:
    GameLoop() {
        std::srand(std::time(nullptr));
        resetChamber(chamber);
        chamberIndex = 0;
    }

    void start() {
        std::cout << "Welcome to Gamble Your Life!\n";

        while (isAlive()) {
            std::cout << "\n=== NEW TURN ===\n";
            std::cout << "[1] Pull Trigger\n[2] Draw Item\n[3] Use Item\n[4] Inventory\nChoice: ";
            int choice;
            std::cin >> choice;

            switch (choice) {
                case 1:
                    if (!pullTrigger(chamber, chamberIndex)) return;
                    break;
                case 2:
                    drawItem();
                    break;
                case 3:
                    showInventory();
                    std::cout << "Enter item index to use: ";
                    int index;
                    std::cin >> index;
                    useItem(index, chamber, chamberIndex);
                    break;
                case 4:
                    showInventory();
                    break;
                default:
                    std::cout << "Invalid choice.\n";
            }
        }

        std::cout << "\nGame Over. You died.\n";
    }
};

int main() {
    GameLoop game;
    game.start();
    return 0;
}
