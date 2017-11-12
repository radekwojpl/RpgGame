#pragma once
#include <iostream>
#include <string>
using namespace std;

class Statistics
{
private:

	int health;
	int mana;
	int strenght;
	int agility;
	int intelligence;
	int armor;
	
public:
	
	int getMana();
	int getHealth();
	int getStrenght();
	int getAgility();
	int getIntelligence();
	int getArmor();

	void setMana(int);
	void setArmor(int);
	void setHealth(int);
	void setStrenght(int);
	void setAgility(int);
	void setIntelligence(int);

	void setStartingStatisticsDependsOnProfession(string);
	void increasStatisticsIfHeroLevelUp(string profession);
	void printStat();
	Statistics();
	~Statistics();
};

