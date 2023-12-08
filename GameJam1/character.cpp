#include <iostream>
#include "character.h"

Character::Character()
{
	m_health = 0;
	m_maxHealth = 0;
	m_damage = 0;
	m_defense = 1;
	m_weaponType = 0;
	m_armorType = 0;
}

Character::Character(float health, float maxHealth, float damage, float defense, float weaponType, float armorType)
{
	m_health = health;
	m_maxHealth = maxHealth;
	m_damage = damage;
	m_defense = defense;
	m_weaponType = weaponType;
	m_armorType = armorType;

	//Character has no weapon
	if (weaponType == 0)
		damage = 5;
	//Character has rusted daggers
	else if (weaponType == 1)
		damage = 11;
	//Character has copper daggers
	else if (weaponType == 1.1)
		damage = 15;
	//Character has steel daggers
	else if (weaponType == 1.2)
		damage = 20;
	//Character has rusted sword
	else if (weaponType == 2)
		damage = 12;
	//Character has copper sword
	else if (weaponType == 2.1)
		damage = 18;
	//Character has steel sword
	else if (weaponType == 2.2)
		damage = 22;
	//Character has wooden staff
	else if (weaponType == 3)
		damage = 14;
	
	//Character has no armor
	if (armorType == 0)
		defense = 0;
	//Character has robe
	else if (armorType == 1)
		defense = 0.13;
	//Character has leather armor
	else if (armorType == 2)
		defense = 0.25f;
	//Character has copper armor
	else if (armorType == 3)
		defense = 0.50f;
	//Character has steel armor
	else if (armorType == 4)
		defense = 0.75f;

}

void Character::printStats()
{
	std::cout << "Health: ";
	std::cout << m_health << std::endl;

	std::cout << "Damage: ";
	std::cout << m_damage << std::endl;

	std::cout << "Defense: ";
	std::cout << m_defense << std::endl;
}

void Character::takeDamage(float damage)
{
	m_health -= damage;
}

void Character::attack(Character enemy)
{
	enemy.takeDamage(getDamage());
}

void Character::resetHealth(Character player)
{
	player.m_health = player.m_maxHealth;
}