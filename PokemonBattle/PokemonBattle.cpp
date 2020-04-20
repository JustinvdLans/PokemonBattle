#include "PokemonBattle.h"
#include <iostream>
using namespace std;

int main()
{
    string Starters[3] = { "Bulbasaur", "Squirtle", "Charmander" };
    
    std::cout << "Hello Trainer What will your starter be?\n";
    std::cout << "Will it be:\n";
 
    for (int i = 0; i < 3; i++) {
        std::cout << Starters[i] << "\n";
    }
}

