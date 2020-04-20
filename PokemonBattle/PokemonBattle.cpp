#include "PokemonBattle.h"
#include "BattleRewards.h"
#include <iostream>
using namespace std;

int main()
{
    string Starters[3] = { "Bulbasaur", "Squirtle", "Charmander" };
    string input;

    cout << "Blue has challenged you for a battle!\n";
    cout << "What will you do, Attack or Heal\n";
    cin >> input;
    cout << "Bulbasaur used Tackle\n";
    cout << "Blue's Charmander has fainted\n";
    cout << "You got " << BattleRewards::Coins << " coins";

}

