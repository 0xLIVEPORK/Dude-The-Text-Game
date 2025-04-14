#include <iostream>
#include <random>
#include <string>
#include <limits>



int MenuLoop(int &test);

int main () {
    int test = 0;

    MenuLoop(test);

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
        
        case 3:
        std::cout << "THANKS FOR PLAYING!";
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


