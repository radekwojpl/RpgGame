#include "Statistics.h"


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

void Statistics::serIntelligence(int intelligence)
{
	this->intelligence = intelligence;
}

void Statistics::setStartingStatisticsDependsOnProfession(string profession)
{
	if (profession == "warrior")
	{
		this->agility = 10;
		this->health = 120;
		this->intelligence = 5;
		this->strenght = 15;
	}
	else if (profession == "mage")
	{
		this->agility = 10;
		this->health = 110;
		this->intelligence = 15;
		this->strenght = 5;	
	}
	else if (profession == "paladin")
	{
		this->agility = 15;
		this->health = 120;
		this->intelligence = 5;
		this->strenght = 10;
	}
}

void Statistics::printStat()
{
	cout << "Health: " << health;
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
