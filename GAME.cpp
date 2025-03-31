#include <iostream>
#include <random>
#include <string>
#include <limits>

int main () {

    int test;
    std::cout << 
    "Menu: \n"
    "[0] PLAY" << "\n" <<
    "[1] SAVE FILES" << "\n" <<
    "[2] CREDITS" << "\n" <<
    "[3] EXIT" << "\n";


    do
    {
    std::cout << "Enter a Valid Integer not more than 3 or less than 0: ";
        if(!(std::cin >> test) || test < 0 || test > 3)
        {
            std::cerr << "Invalid Input\nTry Again: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
    break;
    }
    while (true);
}
