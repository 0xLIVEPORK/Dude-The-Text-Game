#include <iostream>
#include <random>
#include <string>
#include <limits>
#include <fstream> //still useless but will be used for savefiles function

int MenuLoop(int &test);

int main () {
    int test = 0;

    MenuLoop(test);

    //TEST IS PLACE HOLDER
    //EACH WILL REPLACED WITH THEIR OWN FUNCTION CALL
    switch (test) 
    {
        case 0:
        std::cout << "WE ARE PLAYING!";
        break;

        case 1:
        std::cout << "> FILE 1\n" << " FILE 2\n";
        break;
        
        case 2:
        std::cout << "\t\tCREDITS\n" << "\n0xLIVEPORK - PROGRAMMER\n";
        break;
        
        default:
        break;
    }

return 0;
}

int MenuLoop(int &test) {
    
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
