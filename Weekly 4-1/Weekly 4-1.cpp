#include <iostream>

char MakeCapital(char letter);

int main()
{
    std::cout << "Write a lowercase letter: " << std::endl;
    char chr;
    std::cin >> chr;
    std::cout << MakeCapital(chr);
}

char MakeCapital(char letter)
{
    return toupper(letter);
}