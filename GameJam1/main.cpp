#include <iostream>
#include "character.h"

/// <summary>
/// Will take in and return player input for other functions and scenes
/// </summary>
void input()
{

}

/// <summary>
/// Will allow the player to pick their character type 
/// which will set their stats, weapon type and armor type.
/// </summary>
/// <returns>A Character with preset stats, weapon and armor</returns>
//Character characterSelectionScreen()
//{
//	
//}

/// <summary>
/// 
/// </summary>
/// <param name="enemy"></param>
void fight(Character enemy)
{

}

int main()
{
	Character* player = new Character(100, 100, 30, 0, 1, 1);
	Character* enemy = new Character(100, 100, 30, 0, 1, 1);

	Character* playerPtr = player;
	Character* enemyPtr = enemy;

	playerPtr -> attack(*enemy);
}