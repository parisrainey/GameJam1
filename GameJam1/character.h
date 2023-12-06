#pragma once

class Character
{
public:
	Character();

	/// <param name="health">The amount of damage a character can take before dying.</param>
	/// <param name="damage">The amount of health taken when attacking.</param>
	/// <param name="defense">The amount of damage reduced when attacked.</param>
	/// <param name="weapon">An item that boosts attack damage.</param>
	/// <param name="armor">An item that boosts the amount of defense.</param>
	Character(float health, float damage, float defense, float weaponType, float armorType);

	void takeDamage(float damage);
	void attack(Character enemy);
	float getDamage() { return m_damage; }

	float getHealth() { return m_health; }
	void resetHealth(Character player);

	void printStats();

private:
	float m_health;
	float m_maxHealth;
	float m_damage;
	float m_defense;
	float m_weaponType;
	float m_armorType;
};