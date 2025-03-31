#include <iostream>
#include <random>
#include <string>
#include <limits>
#include <fstream>

int MenuLoop(int test);

int main () {
    int test;

    std::cout << MenuLoop(test);

return 0;
}

int MenuLoop(int test) {
    
    std::string Menu = 
    "Menu: \n"
    "[0] PLAY\n" 
    "[1] SAVE FILES\n" 
    "[2] CREDITS\n"
    "[3] EXIT\n";

    std::cout << Menu;

    do
    {
        if(!(std::cin >> test) || test < 0 || test > 3)
        {
            std::cout << Menu;
            std::cout << "Invalid Input\nTry Again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
    break;
    }
    while (true);

    return test;
}
