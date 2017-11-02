#include "Statistics.h"


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
