#pragma once
#include <iostream>
#include <string>
using namespace std;
class Statistics
{
	int health;
	int strenght;
	int agility;
	int intelligence;
	
public:
	int getHealth();
	int getStrenght();
	int getAgility();
	int getIntelligence();
	void setHealth(int);
	void setStrenght(int);
	void setAgility(int);
	void serIntelligence(int);
	void setStartingStatisticsDependsOnProfession(string);
	void printStat();
	Statistics();
	~Statistics();
};

