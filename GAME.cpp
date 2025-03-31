#include <iostream>
#include <random>
#include <string>
#include <limits>

int main () {

    int test;

    do
    {
    std::cout << "Enter a Valid Integer not more than 10 or less than 0: ";
        if(!(std::cin >> test) || test < 0 || test > 10)
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
