#pragma once

#include <iostream>

class Character
{
public:

	virtual int melee1() = 0;
	virtual int melee2() = 0;
	virtual int spell() = 0;

	Character();

	int gold = 0;
	int constitution = 100; //Basic character's health
	int strength = 3; //Basic character's strength (effects melee damage)
	int dexterity = 5; //Basic character's dexterity (effects speed)
	int intelligence = 5; //Basic character's intelligence (effects)
	int power = 5; //Basic character's power(effects spell damage)
	int charisma = 5; //Basic characters charisma (effects prices in shops)
};