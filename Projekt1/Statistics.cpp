#include "Statistics.h"


int Statistics::getMana()
{
	return this->mana;
}

int Statistics::getHealth()
{
	return this->health;;
}

int Statistics::getStrenght()
{
	return this->strenght;
}

int Statistics::getAgility()
{
	return this->agility;
}

int Statistics::getIntelligence()
{
	return this->intelligence;
}

int Statistics::getArmor()
{
	return this->armor;
}

void Statistics::setMana(int mana)
{
	this->mana = mana;
}

void Statistics::setArmor(int armor)
{
	this->armor = armor;
}

void Statistics::setHealth(int hp)
{
	this->health = hp;
}

void Statistics::setStrenght(int strenght)
{
	this->strenght = strenght;
}

void Statistics::setAgility(int agility)
{
	this->agility = agility;
}

void Statistics::setIntelligence(int intelligence)
{
	this->intelligence = intelligence;
}

void Statistics::setStartingStatisticsDependsOnProfession(string profession)
{
	if (profession == "warrior")
	{
		this->mana = 80;
		this->agility = 10;
		this->health = 70;
		this->intelligence = 5;
		this->strenght = 15;
		this->armor = 20;
	}
	else if (profession == "mage")
	{
		this->mana = 100;
		this->agility = 10;
		this->health = 100;
		this->intelligence = 15;
		this->strenght = 5;	
		this->armor = 10;
	}
	else if (profession == "paladin")
	{
		this->mana = 100;
		this->agility = 15;
		this->health = 100;
		this->intelligence = 5;
		this->strenght = 10;
		this->armor = 15;
	}
}

void Statistics::increasStatisticsIfHeroLevelUp(string profession)
{
	if (profession == "warrior")
	{
		this->agility += 10;
		this->health += 100;
		this->intelligence += 5;
		this->strenght += 15;
		this->armor += 20;
	}
	else if (profession == "mage")
	{
		this->agility += 10;
		this->health += 100;
		this->intelligence += 15;
		this->strenght += 5;
		this->armor += 10;
	}
	else if (profession == "paladin")
	{
		this->agility += 15;
		this->health += 100;
		this->intelligence += 5;
		this->strenght += 10;
		this->armor += 15;
	}
}

void Statistics::printStat()
{
	cout << "Health: " << health;
	cout << "\nMana: " << mana;
	cout << "\nStrenght: " << strenght;
	cout << "\nAgility: " << agility;
	cout << "\nIntelligence: " << intelligence;
}

Statistics::Statistics()
{
}

Statistics::~Statistics()
{
}
